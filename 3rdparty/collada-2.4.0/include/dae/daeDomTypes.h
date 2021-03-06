/*
* Copyright 2006 Sony Computer Entertainment Inc.
*
* Licensed under the MIT Open Source License, for details please see license.txt or the website
* http://www.opensource.org/licenses/mit-license.php
*
*/ 

#ifndef __DAE_DOM_TYPES__
#define __DAE_DOM_TYPES__

#include <dae/daeElement.h>
#include <dae/daeMetaElement.h>
#include <dae/daeArray.h>
#include <dae/daeURI.h>
#include <dae/daeIDRef.h>

//This line is used as a workaround  because the array types enum is invalid when autogenerated
//typedef daeString			domArrayTypes;				// ENUM
typedef daeElement			domElement;

typedef daeURI				xsAnyURI;
typedef daeString			xsDateTime;		

typedef daeString			xsID;
typedef daeIDRef			xsIDREF;
typedef daeTArray<daeIDRef> xsIDREFS;
typedef daeString			xsNCName;
typedef daeString			xsNMTOKEN;
typedef daeString			xsName;
typedef daeString			xsToken;
typedef daeString			xsString;
typedef daeBool				xsBoolean;
typedef daeShort			xsShort;
typedef daeInt				xsInt;
typedef daeLong				xsInteger;
typedef daeUInt				xsNonNegativeInteger;
typedef daeLong				xsLong;
typedef daeFloat			xsFloat;
typedef daeDouble			xsDouble;
typedef daeDouble			xsDecimal;
typedef daeCharArray		xsHexBinaryArray;
typedef daeBoolArray		xsBooleanArray;
typedef daeFloatArray		xsFloatArray;
typedef daeDoubleArray		xsDoubleArray;
typedef daeShortArray		xsShortArray;
typedef daeIntArray			xsIntegerArray;
typedef daeLongArray		xsLongArray;
typedef daeStringRefArray	xsNameArray;
typedef daeStringRefArray	xsNCNameArray;
typedef daeStringRefArray	xsTokenArray;

typedef daeChar				xsByte;
typedef daeUChar			xsUnsignedByte;
typedef	daeUInt				xsUnsignedInt;
typedef daeUInt				xsPositiveInteger;
typedef daeULong			xsUnsignedLong;


#define  daeTSmartRef			daeSmartRef

#endif	//__DAE_DOM_TYPES__

