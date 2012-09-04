CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

PROJECT (GameMonkey CXX)

SET ( GMSCRIPT_Version_Major 1 )
SET ( GMSCRIPT_Version_Minor 29 )
SET ( GMSCRIPT_Version_Build 0 )

SET ( GMSCRIPT_compiler_cdecl "" CACHE STRING "Needs to be __cdecl for MSVC platform" )

SET ( GMScript_msvc_earlier_2010 0 )
IF (MSVC)
	ADD_DEFINITIONS("-DGM_IS_MSVC")
	
	SET ( GMSCRIPT_compiler_cdecl "__cdecl" CACHE STRING "Needs to be __cdecl for MSVC platform" )
	IF (MSVC_VERSION < 1600)
		SET ( GMScript_msvc_earlier_2010 1 )
		ADD_DEFINITIONS("-DGM_MSVC_EARLIER_2010")
	ENDIF (MSVC_VERSION < 1600)
ENDIF (MSVC)

MESSAGE( "Checking path of mConfig.h.in; ${GameMonkey_SOURCE_DIR}/mConfig.h.in" )
CONFIGURE_FILE(
	"${GameMonkey_SOURCE_DIR}/gmConfig_p.h.in"
	"${GameMonkey_SOURCE_DIR}/include/gamemonkey/gmConfig_p.h"
)

INCLUDE_DIRECTORIES( "${GameMonkey_SOURCE_DIR}/include/gamemonkey" )

ADD_LIBRARY(gmscript
				${GameMonkey_SOURCE_DIR}/src/gmArraySimple.cpp
				${GameMonkey_SOURCE_DIR}/src/gmByteCode.cpp
				${GameMonkey_SOURCE_DIR}/src/gmByteCodeGen.cpp
				${GameMonkey_SOURCE_DIR}/src/gmCodeGen.cpp
				${GameMonkey_SOURCE_DIR}/src/gmCodeGenHooks.cpp
				${GameMonkey_SOURCE_DIR}/src/gmCodeTree.cpp
				${GameMonkey_SOURCE_DIR}/src/gmCrc.cpp
				${GameMonkey_SOURCE_DIR}/src/gmFunctionObject.cpp
				${GameMonkey_SOURCE_DIR}/src/gmHash.cpp
				${GameMonkey_SOURCE_DIR}/src/gmIncGC.cpp
				${GameMonkey_SOURCE_DIR}/src/gmLibHooks.cpp
				${GameMonkey_SOURCE_DIR}/src/gmListDouble.cpp
				${GameMonkey_SOURCE_DIR}/src/gmLog.cpp
				${GameMonkey_SOURCE_DIR}/src/gmMachine.cpp
				${GameMonkey_SOURCE_DIR}/src/gmMachineLib.cpp
				${GameMonkey_SOURCE_DIR}/src/gmMem.cpp
				${GameMonkey_SOURCE_DIR}/src/gmMemChain.cpp
				${GameMonkey_SOURCE_DIR}/src/gmMemFixed.cpp
				${GameMonkey_SOURCE_DIR}/src/gmMemFixedSet.cpp
				${GameMonkey_SOURCE_DIR}/src/gmOperators.cpp
				${GameMonkey_SOURCE_DIR}/src/gmParser.cpp
				${GameMonkey_SOURCE_DIR}/src/gmScanner.cpp
				${GameMonkey_SOURCE_DIR}/src/gmStream.cpp
				${GameMonkey_SOURCE_DIR}/src/gmStreamBuffer.cpp
				${GameMonkey_SOURCE_DIR}/src/gmStringObject.cpp
				${GameMonkey_SOURCE_DIR}/src/gmTableObject.cpp
				${GameMonkey_SOURCE_DIR}/src/gmThread.cpp
				${GameMonkey_SOURCE_DIR}/src/gmUserObject.cpp
				${GameMonkey_SOURCE_DIR}/src/gmUtil.cpp
				${GameMonkey_SOURCE_DIR}/src/gmVariable.cpp)
