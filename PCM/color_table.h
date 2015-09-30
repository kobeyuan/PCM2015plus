#ifndef _COLOR_TABLE_H
#define _COLOR_TABLE_H
#include "basic_types.h"

#define SELECTED_COLOR ColorType(1.0f, 0.0f, 0.0f, 1.0f)
#define HIGHTLIGHTED_COLOR ColorType(0.0f, 0.0f, 0.0f, 1.0f) //edited by huayun ,origin is 1.0f


namespace Color_Utility
{

	static const ScalarType tiny_color_table[18][3] = {
		255.f,0.f,51.f,    // 0  
		102.f,204.f,204.f,       //1  
		204.f,153.f,153.f,     // 2
		255.f,255.f,153.f,    // 3
		169.f,200.f,169.f,    // 4
		153.f,102.f,204.f,    // 5
		0.f,51.f,102.f,    // 6
		204.f,204.f,204.f,	    // 7
		255.f,153.f,102.f,    // 8
		0.f,51.f,0.f,         // 9
		0.f,153.f,204.f,      // 10
		51.f,102.f,102.f,     // 11
		255.f,255.f,0.f,      // 12
		153.f,204.f,51.f,     // 13
		153.f,0.f,102.f,      // 14
		51.f,153.f,102.f,     // 15
		102.f,0.f,51.f,       // 16
		204.f,255.f,153.f     // 17

	};
	static const ScalarType huanyun_color_table[19][3] = {
		171.f,48.f,46.f,    // 0
		58.f,110.f,176.f,       //1
		25.f,135.f,66.f,     // 2
		239.f,122.f,47.f,    // 3
		170.f,121.f,180.f,    // 4
		165.f,165.f,65.f,    // 5
		41.f,180.f,192.f,   //34.f,10.f,54.f,    // 6
		117.f,147.f,148.f,	    // 7
		0.f,255.f,57.f,    // 8
		171.f,35.f,153.f,         // 9
		255.f,57.f,0.f,      // 10
		227.f,255.f,0.f,     // 11
		15.f,71.f,127.f,      // 12
		174.f,75.f,93.f,     // 13
		255.f,170.f,0.f,      // 14
		237.f,238.f,143.f,     // 15
		170.f,255.f,0.f,       // 16
		206.f,127.f,97.f,     // 17
		255.f,0.f,0.f     // 18
	};





	// 256 colors
	static const ScalarType color_table[256][3] = {
		0.0f, 0.0f, 0.5156f
		, 0.0f, 0.0f, 0.5313f
		, 0.0f, 0.0f, 0.5469f
		, 0.0f, 0.0f, 0.5625f
		, 0.0f, 0.0f, 0.5781f
		, 0.0f, 0.0f, 0.5938f
		, 0.0f, 0.0f, 0.6094f
		, 0.0f, 0.0f, 0.6250f
		, 0.0f, 0.0f, 0.6406f
		, 0.0f, 0.0f, 0.6563f
		, 0.0f, 0.0f, 0.6719f
		, 0.0f, 0.0f, 0.6875f
		, 0.0f, 0.0f, 0.7031f
		, 0.0f, 0.0f, 0.7188f
		, 0.0f, 0.0f, 0.7344f
		, 0.0f, 0.0f, 0.7500f
		, 0.0f, 0.0f, 0.7656f
		, 0.0f, 0.0f, 0.7813f
		, 0.0f, 0.0f, 0.7969f
		, 0.0f, 0.0f, 0.8125f
		, 0.0f, 0.0f, 0.8281f
		, 0.0f, 0.0f, 0.8438f
		, 0.0f, 0.0f, 0.8594f
		, 0.0f, 0.0f, 0.8750f
		, 0.0f, 0.0f, 0.8906f
		, 0.0f, 0.0f, 0.9063f
		, 0.0f, 0.0f, 0.9219f
		, 0.0f, 0.0f, 0.9375f
		, 0.0f, 0.0f, 0.9531f
		, 0.0f, 0.0f, 0.9688f
		, 0.0f, 0.0f, 0.9844f
		, 0.0f, 0.0f, 1.0000f
		, 0.0f, 0.0156f, 1.0f
		, 0.0f, 0.0313f, 1.0f
		, 0.0f, 0.0469f, 1.0f
		, 0.0f, 0.0625f, 1.0f
		, 0.0f, 0.0781f, 1.0f
		, 0.0f, 0.0938f, 1.0f
		, 0.0f, 0.1094f, 1.0f
		, 0.0f, 0.1250f, 1.0f
		, 0.0f, 0.1406f, 1.0f
		, 0.0f, 0.1563f, 1.0f
		, 0.0f, 0.1719f, 1.0f
		, 0.0f, 0.1875f, 1.0f
		, 0.0f, 0.2031f, 1.0f
		, 0.0f, 0.2188f, 1.0f
		, 0.0f, 0.2344f, 1.0f
		, 0.0f, 0.2500f, 1.0f
		, 0.0f, 0.2656f, 1.0f
		, 0.0f, 0.2813f, 1.0f
		, 0.0f, 0.2969f, 1.0f
		, 0.0f, 0.3125f, 1.0f
		, 0.0f, 0.3281f, 1.0f
		, 0.0f, 0.3438f, 1.0f
		, 0.0f, 0.3594f, 1.0f
		, 0.0f, 0.3750f, 1.0f
		, 0.0f, 0.3906f, 1.0f
		, 0.0f, 0.4063f, 1.0f
		, 0.0f, 0.4219f, 1.0f
		, 0.0f, 0.4375f, 1.0f
		, 0.0f, 0.4531f, 1.0f
		, 0.0f, 0.4688f, 1.0f
		, 0.0f, 0.4844f, 1.0f
		, 0.0f, 0.5000f, 1.0f
		, 0.0f, 0.5156f, 1.0f
		, 0.0f, 0.5313f, 1.0f
		, 0.0f, 0.5469f, 1.0f
		, 0.0f, 0.5625f, 1.0f
		, 0.0f, 0.5781f, 1.0f
		, 0.0f, 0.5938f, 1.0f
		, 0.0f, 0.6094f, 1.0f
		, 0.0f, 0.6250f, 1.0f
		, 0.0f, 0.6406f, 1.0f
		, 0.0f, 0.6563f, 1.0f
		, 0.0f, 0.6719f, 1.0f
		, 0.0f, 0.6875f, 1.0f
		, 0.0f, 0.7031f, 1.0f
		, 0.0f, 0.7188f, 1.0f
		, 0.0f, 0.7344f, 1.0f
		, 0.0f, 0.7500f, 1.0f
		, 0.0f, 0.7656f, 1.0f
		, 0.0f, 0.7813f, 1.0f
		, 0.0f, 0.7969f, 1.0f
		, 0.0f, 0.8125f, 1.0f
		, 0.0f, 0.8281f, 1.0f
		, 0.0f, 0.8438f, 1.0f
		, 0.0f, 0.8594f, 1.0f
		, 0.0f, 0.8750f, 1.0f
		, 0.0f, 0.8906f, 1.0f
		, 0.0f, 0.9063f, 1.0f
		, 0.0f, 0.9219f, 1.0f
		, 0.0f, 0.9375f, 1.0f
		, 0.0f, 0.9531f, 1.0f
		, 0.0f, 0.9688f, 1.0f
		, 0.0f, 0.9844f, 1.0f
		, 0.0f, 1.0000f, 1.0f
		, 0.0156f, 1.0000f, 0.9844f
		, 0.0313f, 1.0000f, 0.9688f
		, 0.0469f, 1.0000f, 0.9531f
		, 0.0625f, 1.0000f, 0.9375f
		, 0.0781f, 1.0000f, 0.9219f
		, 0.0938f, 1.0000f, 0.9063f
		, 0.1094f, 1.0000f, 0.8906f
		, 0.1250f, 1.0000f, 0.8750f
		, 0.1406f, 1.0000f, 0.8594f
		, 0.1563f, 1.0000f, 0.8438f
		, 0.1719f, 1.0000f, 0.8281f
		, 0.1875f, 1.0000f, 0.8125f
		, 0.2031f, 1.0000f, 0.7969f
		, 0.2188f, 1.0000f, 0.7813f
		, 0.2344f, 1.0000f, 0.7656f
		, 0.2500f, 1.0000f, 0.7500f
		, 0.2656f, 1.0000f, 0.7344f
		, 0.2813f, 1.0000f, 0.7188f
		, 0.2969f, 1.0000f, 0.7031f
		, 0.3125f, 1.0000f, 0.6875f
		, 0.3281f, 1.0000f, 0.6719f
		, 0.3438f, 1.0000f, 0.6563f
		, 0.3594f, 1.0000f, 0.6406f
		, 0.3750f, 1.0000f, 0.6250f
		, 0.3906f, 1.0000f, 0.6094f
		, 0.4063f, 1.0000f, 0.5938f
		, 0.4219f, 1.0000f, 0.5781f
		, 0.4375f, 1.0000f, 0.5625f
		, 0.4531f, 1.0000f, 0.5469f
		, 0.4688f, 1.0000f, 0.5313f
		, 0.4844f, 1.0000f, 0.5156f
		, 0.5000f, 1.0000f, 0.5000f
		, 0.5156f, 1.0000f, 0.4844f
		, 0.5313f, 1.0000f, 0.4688f
		, 0.5469f, 1.0000f, 0.4531f
		, 0.5625f, 1.0000f, 0.4375f
		, 0.5781f, 1.0000f, 0.4219f
		, 0.5938f, 1.0000f, 0.4063f
		, 0.6094f, 1.0000f, 0.3906f
		, 0.6250f, 1.0000f, 0.3750f
		, 0.6406f, 1.0000f, 0.3594f
		, 0.6563f, 1.0000f, 0.3438f
		, 0.6719f, 1.0000f, 0.3281f
		, 0.6875f, 1.0000f, 0.3125f
		, 0.7031f, 1.0000f, 0.2969f
		, 0.7188f, 1.0000f, 0.2813f
		, 0.7344f, 1.0000f, 0.2656f
		, 0.7500f, 1.0000f, 0.2500f
		, 0.7656f, 1.0000f, 0.2344f
		, 0.7813f, 1.0000f, 0.2188f
		, 0.7969f, 1.0000f, 0.2031f
		, 0.8125f, 1.0000f, 0.1875f
		, 0.8281f, 1.0000f, 0.1719f
		, 0.8438f, 1.0000f, 0.1563f
		, 0.8594f, 1.0000f, 0.1406f
		, 0.8750f, 1.0000f, 0.1250f
		, 0.8906f, 1.0000f, 0.1094f
		, 0.9063f, 1.0000f, 0.0938f
		, 0.9219f, 1.0000f, 0.0781f
		, 0.9375f, 1.0000f, 0.0625f
		, 0.9531f, 1.0000f, 0.0469f
		, 0.9688f, 1.0000f, 0.0313f
		, 0.9844f, 1.0000f, 0.0156f
		, 1.0000f, 1.0000f, 0.0f
		, 1.0000f, 0.9844f, 0.0f
		, 1.0000f, 0.9688f, 0.0f
		, 1.0000f, 0.9531f, 0.0f
		, 1.0000f, 0.9375f, 0.0f
		, 1.0000f, 0.9219f, 0.0f
		, 1.0000f, 0.9063f, 0.0f
		, 1.0000f, 0.8906f, 0.0f
		, 1.0000f, 0.8750f, 0.0f
		, 1.0000f, 0.8594f, 0.0f
		, 1.0000f, 0.8438f, 0.0f
		, 1.0000f, 0.8281f, 0.0f
		, 1.0000f, 0.8125f, 0.0f
		, 1.0000f, 0.7969f, 0.0f
		, 1.0000f, 0.7813f, 0.0f
		, 1.0000f, 0.7656f, 0.0f
		, 1.0000f, 0.7500f, 0.0f
		, 1.0000f, 0.7344f, 0.0f
		, 1.0000f, 0.7188f, 0.0f
		, 1.0000f, 0.7031f, 0.0f
		, 1.0000f, 0.6875f, 0.0f
		, 1.0000f, 0.6719f, 0.0f
		, 1.0000f, 0.6563f, 0.0f
		, 1.0000f, 0.6406f, 0.0f
		, 1.0000f, 0.6250f, 0.0f
		, 1.0000f, 0.6094f, 0.0f
		, 1.0000f, 0.5938f, 0.0f
		, 1.0000f, 0.5781f, 0.0f
		, 1.0000f, 0.5625f, 0.0f
		, 1.0000f, 0.5469f, 0.0f
		, 1.0000f, 0.5313f, 0.0f
		, 1.0000f, 0.5156f, 0.0f
		, 1.0000f, 0.5000f, 0.0f
		, 1.0000f, 0.4844f, 0.0f
		, 1.0000f, 0.4688f, 0.0f
		, 1.0000f, 0.4531f, 0.0f
		, 1.0000f, 0.4375f, 0.0f
		, 1.0000f, 0.4219f, 0.0f
		, 1.0000f, 0.4063f, 0.0f
		, 1.0000f, 0.3906f, 0.0f
		, 1.0000f, 0.3750f, 0.0f
		, 1.0000f, 0.3594f, 0.0f
		, 1.0000f, 0.3438f, 0.0f
		, 1.0000f, 0.3281f, 0.0f
		, 1.0000f, 0.3125f, 0.0f
		, 1.0000f, 0.2969f, 0.0f
		, 1.0000f, 0.2813f, 0.0f
		, 1.0000f, 0.2656f, 0.0f
		, 1.0000f, 0.2500f, 0.0f
		, 1.0000f, 0.2344f, 0.0f
		, 1.0000f, 0.2188f, 0.0f
		, 1.0000f, 0.2031f, 0.0f
		, 1.0000f, 0.1875f, 0.0f
		, 1.0000f, 0.1719f, 0.0f
		, 1.0000f, 0.1563f, 0.0f
		, 1.0000f, 0.1406f, 0.0f
		, 1.0000f, 0.1250f, 0.0f
		, 1.0000f, 0.1094f, 0.0f
		, 1.0000f, 0.0938f, 0.0f
		, 1.0000f, 0.0781f, 0.0f
		, 1.0000f, 0.0625f, 0.0f
		, 1.0000f, 0.0469f, 0.0f
		, 1.0000f, 0.0313f, 0.0f
		, 1.0000f, 0.0156f, 0.0f
		, 1.0000f, 0.0f, 0.0f
		, 0.9844f, 0.0f, 0.0f
		, 0.9688f, 0.0f, 0.0f
		, 0.9531f, 0.0f, 0.0f
		, 0.9375f, 0.0f, 0.0f
		, 0.9219f, 0.0f, 0.0f
		, 0.9063f, 0.0f, 0.0f
		, 0.8906f, 0.0f, 0.0f
		, 0.8750f, 0.0f, 0.0f
		, 0.8594f, 0.0f, 0.0f
		, 0.8438f, 0.0f, 0.0f
		, 0.8281f, 0.0f, 0.0f
		, 0.8125f, 0.0f, 0.0f
		, 0.7969f, 0.0f, 0.0f
		, 0.7813f, 0.0f, 0.0f
		, 0.7656f, 0.0f, 0.0f
		, 0.7500f, 0.0f, 0.0f
		, 0.7344f, 0.0f, 0.0f
		, 0.7188f, 0.0f, 0.0f
		, 0.7031f, 0.0f, 0.0f
		, 0.6875f, 0.0f, 0.0f
		, 0.6719f, 0.0f, 0.0f
		, 0.6563f, 0.0f, 0.0f
		, 0.6406f, 0.0f, 0.0f
		, 0.6250f, 0.0f, 0.0f
		, 0.6094f, 0.0f, 0.0f
		, 0.5938f, 0.0f, 0.0f
		, 0.5781f, 0.0f, 0.0f
		, 0.5625f, 0.0f, 0.0f
		, 0.5469f, 0.0f, 0.0f
		, 0.5313f, 0.0f, 0.0f
		, 0.5156f, 0.0f, 0.0f
		, 0.5000f, 0.0f, 0.0f
	};

	static const ScalarType color_table_map[100][3] ={
		12 , 60 , 83
		, 12 , 62 , 83
		, 10 , 65 , 84
		,9 , 68 , 85
		,7 , 71 , 86
		,5 , 74 , 86
		,3 , 78 , 86
		,1 , 82 , 87
		,0 , 87 , 88
		,0 , 91 , 89
		,0 , 95 , 89
		,0 ,100 , 90
		,0 ,104 , 91
		,0 ,108 , 91
		,0 ,114 , 93
		,0 ,119 , 94
		,0 ,123 , 94
		,0 ,127 , 95
		,0 ,132 , 96
		,0 ,136 , 97
		,0 ,140 , 98
		,0 ,145 , 99
		,0 ,149 ,100
		,0 ,152 ,100
		,6 ,156 ,101
		, 11 ,160 ,102
		, 17 ,164 ,103
		, 24 ,168 ,105
		, 33 ,173 ,107
		, 42 ,177 ,108
		, 51 ,181 ,110
		, 60 ,186 ,112
		, 70 ,190 ,113
		, 81 ,194 ,116
		, 91 ,200 ,117
		,102 ,204 ,119
		,113 ,208 ,121
		,124 ,212 ,122
		,135 ,216 ,124
		,146 ,220 ,125
		,157 ,223 ,125
		,168 ,226 ,124
		,177 ,230 ,125
		,187 ,232 ,125
		,197 ,234 ,125
		,205 ,235 ,125
		,213 ,236 ,124
		,221 ,237 ,124
		,227 ,237 ,125
		,233 ,237 ,125
		,238 ,237 ,124
		,244 ,234 ,121
		,248 ,232 ,118
		,251 ,229 ,114
		,255 ,225 ,110
		,255 ,220 ,105
		,255 ,215 , 99
		,255 ,210 , 93
		,255 ,203 , 87
		,255 ,197 , 81
		,255 ,189 , 75
		,255 ,182 , 68
		,255 ,175 , 61
		,255 ,168 , 55
		,255 ,160 , 48
		,255 ,153 , 41
		,255 ,146 , 36
		,255 ,138 , 30
		,255 ,131 , 24
		,255 ,125 , 18
		,255 ,118 , 14
		,255 ,112 , 10
		,255 ,107  ,6
		,255 ,101  ,2
		,255 , 97  ,1
		,253 , 93  ,0
		,251 , 89  ,0
		,247 , 86  ,0
		,243 , 83  ,0
		,238 , 79  ,0
		,234 , 77  ,0
		,229 , 73  ,0
		,224 , 71  ,0
		,218 , 67  ,1
		,212 , 66  ,2
		,206 , 63  ,4
		,200 , 60  ,5
		,194 , 58  ,7
		,188 , 56  ,9
		,182 , 54 , 11
		,176 , 52 , 13
		,170 , 49 , 16
		,164 , 48 , 18
		,158 , 46 , 21
		,152 , 44 , 23
		,148 , 43 , 25
		,143 , 42 , 26
		,138 , 40 , 28
		,133 , 38 , 30
		,130 , 37 , 30
	};

	ColorType		color_from_table(IndexType index) ;
	ColorType		random_color_from_table();
	ColorType		span_color_from_table(IndexType);
	ColorType       color_map_one(ScalarType index);
	//added by huayun
	ColorType		span_color_from_table_with_edge(IndexType label);
	ColorType	span_color_from_hy_table( IndexType idx );
	IndexType   getColorLabelId( const ColorType& _color );
}

#endif