// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "PDB_Platform.h"


// ------------------------------------------------------------------------------------------------
// ATTRIBUTES
// ------------------------------------------------------------------------------------------------

// Indicates to the compiler that the function returns an object that is not aliased by any other pointers.
#define PDB_NO_ALIAS								__declspec(restrict)

// Indicates to the compiler that the return value of a function or class should not be ignored.
#if PDB_CPP_17
#	define PDB_NO_DISCARD							[[nodiscard]]
#else
#	define PDB_NO_DISCARD
#endif

// Indicates to the compiler that a function does not throw an exception.
#define PDB_NO_EXCEPT								noexcept


// ------------------------------------------------------------------------------------------------
// SPECIAL MEMBER FUNCTIONS
// ------------------------------------------------------------------------------------------------

// Default special member functions.
#define PDB_DEFAULT_COPY_CONSTRUCTOR(_name)			_name(const _name&) PDB_NO_EXCEPT = default
#define PDB_DEFAULT_COPY_ASSIGNMENT(_name)			_name& operator=(const _name&) PDB_NO_EXCEPT = default
#define PDB_DEFAULT_MOVE_CONSTRUCTOR(_name)			_name(_name&&) PDB_NO_EXCEPT = default
#define PDB_DEFAULT_MOVE_ASSIGNMENT(_name)			_name& operator=(_name&&) PDB_NO_EXCEPT = default

// Default copy member functions.
#define PDB_DEFAULT_COPY(_name)						PDB_DEFAULT_COPY_CONSTRUCTOR(_name); PDB_DEFAULT_COPY_ASSIGNMENT(_name)

// Default move member functions.
#define PDB_DEFAULT_MOVE(_name)						PDB_DEFAULT_MOVE_CONSTRUCTOR(_name); PDB_DEFAULT_MOVE_ASSIGNMENT(_name)

// Single macro to default all copy and move member functions.
#define PDB_DEFAULT_COPY_MOVE(_name)				PDB_DEFAULT_COPY(_name); PDB_DEFAULT_MOVE(_name)

// Disable special member functions.
#define PDB_DISABLE_COPY_CONSTRUCTOR(_name)			_name(const _name&) PDB_NO_EXCEPT = delete
#define PDB_DISABLE_COPY_ASSIGNMENT(_name)			_name& operator=(const _name&) PDB_NO_EXCEPT = delete
#define PDB_DISABLE_MOVE_CONSTRUCTOR(_name)			_name(_name&&) PDB_NO_EXCEPT = delete
#define PDB_DISABLE_MOVE_ASSIGNMENT(_name)			_name& operator=(_name&&) PDB_NO_EXCEPT = delete

// Disable copy member functions.
#define PDB_DISABLE_COPY(_name)						PDB_DISABLE_COPY_CONSTRUCTOR(_name); PDB_DISABLE_COPY_ASSIGNMENT(_name)

// Disable move member functions.
#define PDB_DISABLE_MOVE(_name)						PDB_DISABLE_MOVE_CONSTRUCTOR(_name); PDB_DISABLE_MOVE_ASSIGNMENT(_name)

// Single macro to disable all copy and move member functions.
#define PDB_DISABLE_COPY_MOVE(_name)				PDB_DISABLE_COPY(_name); PDB_DISABLE_MOVE(_name)


// ------------------------------------------------------------------------------------------------
// COMPILER WARNINGS
// ------------------------------------------------------------------------------------------------

#if PDB_COMPILER_MSVC
#	define PDB_PRAGMA(_x)									__pragma(_x)

#	define PDB_PUSH_WARNING_MSVC							PDB_PRAGMA(warning(push))
#	define PDB_SUPPRESS_WARNING_MSVC(_number)				PDB_PRAGMA(warning(suppress : _number))
#	define PDB_DISABLE_WARNING_MSVC(_number)				PDB_PRAGMA(warning(disable : _number))
#	define PDB_POP_WARNING_MSVC								PDB_PRAGMA(warning(pop))

#	define PDB_PUSH_WARNING_CLANG
#	define PDB_DISABLE_WARNING_CLANG(_diagnostic)
#	define PDB_POP_WARNING_CLANG
#elif PDB_COMPILER_CLANG
#	define PDB_PRAGMA(_x)									_Pragma(#_x)

#	define PDB_PUSH_WARNING_MSVC
#	define PDB_SUPPRESS_WARNING_MSVC(_number)
#	define PDB_DISABLE_WARNING_MSVC(_number)
#	define PDB_POP_WARNING_MSVC

#	define PDB_PUSH_WARNING_CLANG							PDB_PRAGMA(clang diagnostic push)
#	define PDB_DISABLE_WARNING_CLANG(_diagnostic)			PDB_PRAGMA(clang diagnostic ignored _diagnostic)
#	define PDB_POP_WARNING_CLANG							PDB_PRAGMA(clang diagnostic pop)
#endif


// ------------------------------------------------------------------------------------------------
// MISCELLANEOUS
// ------------------------------------------------------------------------------------------------

// Defines a C-like flexible array member.
#define PDB_FLEXIBLE_ARRAY_MEMBER(_type, _name)					\
	PDB_PUSH_WARNING_MSVC										\
	PDB_PUSH_WARNING_CLANG										\
	PDB_DISABLE_WARNING_MSVC(4200)								\
	PDB_DISABLE_WARNING_CLANG("-Wc99-extensions")				\
	PDB_DISABLE_WARNING_CLANG("-Wmicrosoft-flexible-array")		\
	_type _name[];												\
	PDB_POP_WARNING_MSVC										\
	PDB_POP_WARNING_CLANG

// Casts any value to the value of the underlying type.
#define PDB_AS_UNDERLYING(_value)								static_cast<typename std::underlying_type<decltype(_value)>::type>(_value)
