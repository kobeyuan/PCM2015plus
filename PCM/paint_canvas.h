#ifndef _PAINT_CANVAS_H
#define _PAINT_CANVAS_H

#include "QGLViewer/qglviewer.h"
#include "select_tool.h"
#include "snapshotsetting.h"
#include "savePLYDialog.h"


class main_window;
class SavePlySetting;
class PaintCanvas: public QGLViewer
{
	Q_OBJECT
public:
	PaintCanvas(const QGLFormat& format, QWidget *parent);

public:
	std::string title() const { return "[PaintCanvas]:"; }

	void forceUpdate(){};
	void updateCanvas(){};

	void setTracerShowOrNot( bool b ){ show_trajectory_=b; }
	void setGraph_WrapBoxShowOrNot(bool b){show_Graph_WrapBox_ = b;}
	void setEdgeVertexsShowOrNot(bool b){ show_EdgeVertexs_ = b;}

	void showSelectedTraj();
	//save screeshot
	void saveSnapshot();
	void pasteTile();
	void setView();
	void setTiledView(GLdouble fovY , float viewRatio , float fAspect , GLdouble zNear ,GLdouble zFar , float cameraDist);
	SnapshotSetting ss;
	ScalarType fov;
	ScalarType clipRatioFar;
	ScalarType clipRatioNear;
	ScalarType nearPlane;
	ScalarType farPlane;
	void Logf(int level ,const char* f );
	//save ply
	SavePlySetting splys;
	void savePLY(SavePlySetting& ss);
	

	
protected:
	virtual void draw();
	virtual void init();
	void drawCornerAxis();

	// Mouse events functions
	virtual void mousePressEvent(QMouseEvent *e);
	virtual void mouseMoveEvent(QMouseEvent *e);
	virtual void mouseReleaseEvent(QMouseEvent *e);
	virtual void keyPressEvent(QKeyEvent * e);

	// wheel event
	virtual void wheelEvent(QWheelEvent *e);
	void saveSnapshotImp(SnapshotSetting& _ss);
	void setTileView( IndexType totalCols , IndexType totalRows ,IndexType tileCol ,IndexType tileRow );

private:
	int				coord_system_region_size_;
	main_window*	main_window_;
	//screeshot
	QImage snapBuffer;
	bool  takeSnapTile;
	IndexType tileCol ,tileRow , totalCols ,totalRows;
	IndexType currSnapLayer;  // snapshot; total number of layers and current layer rendered


public:
	enum WhichColorMode{ VERTEX_COLOR, OBJECT_COLOR, LABEL_COLOR ,WrapBoxColorMode ,EdgePointColorMode ,SphereMode};
	WhichColorMode	which_color_mode_;

	Tool*	single_operate_tool_;

	bool			show_trajectory_;
	//added by huayun
	bool			show_Graph_WrapBox_;
	bool			show_EdgeVertexs_;
	IndexType		centerframeNum;
};

#endif