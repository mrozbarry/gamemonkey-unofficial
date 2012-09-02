cmake_minimum_required (VERSION 2.6)

project (GameMonkey)

#   #define GM_LITTLE_ENDIAN      0
TEST_BIG_ENDIAN(IS_BIG_ENDIAN)
IF (IS_BIG_ENDIAN)
        ADD_DEFINITIONS("-DGM_LITTLE_ENDIAN=0")
ELSE (IS_BIG_ENDIAN)
        ADD_DEFINITIONS("-DGM_LITTLE_ENDIAN=1")
ENDIF (IS_BIG_ENDIAN)

IF (MSVC)
	IF (MSVC_VERSION < 1600)
		ADD_DEFINITIONS("-DGM_MSVC_EARLIER_2010")
	ENDIF (MSVC_VERSION < 1600)
ENDIF (MSVC)

include_directories(${CMAKE_SOURCE_DIR}/include/gamemonkey)

add_library(libgmscript
				src/gmArraySimple.cpp
				src/gmByteCode.cpp
				src/gmByteCodeGen.cpp
				src/gmCodeGen.cpp
				src/gmCodeGenHooks.cpp
				src/gmCodeTree.cpp
				src/gmCrc.cpp
				src/gmDebug.cpp
				src/gmFunctionObject.cpp
				src/gmHash.cpp
				src/gmIncGC.cpp
				src/gmLibHooks.cpp
				src/gmListDouble.cpp
				src/gmLog.cpp
				src/gmMachine.cpp
				src/gmMachineLib.cpp
				src/gmMem.cpp
				src/gmMemChain.cpp
				src/gmMemFixed.cpp
				src/gmMemFixedSet.cpp
				src/gmOperators.cpp
				src/gmParser.cpp
				src/gmScanner.cpp
				src/gmStream.cpp
				src/gmStreamBuffer.cpp
				src/gmStringObject.cpp
				src/gmTableObject.cpp
				src/gmThread.cpp
				src/gmUserObject.cpp
				src/gmUtil.cpp
				src/gmVariable.cpp)
