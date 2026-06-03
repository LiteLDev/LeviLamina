#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/Units.h"

// auto generated forward declare list
// clang-format off
namespace bx { class StringView; }
// clang-format on

namespace bx {
// functions
// NOLINTBEGIN
MCAPI float cos(float _a);

MCAPI void debugBreak();

MCAPI void debugOutput(char const* _out);

MCAPI void debugPrintfVargs(char const* _format, char* _argList);

MCAPI void dlclose(void* _handle);

MCAPI void* dlopen(char const* _filePath);

MCFOLD void* dlsym(void* _handle, char const* _symbol);

MCAPI float exp(float _a);

MCAPI char const* findIdentifierMatch(char const* _str, char const* _word);

MCAPI char const* findIdentifierMatch(char const* _str, char const** const _words);

MCAPI float floor(float _a);

MCAPI int64 getHPCounter();

MCAPI int64 getHPFrequency();

MCAPI uint64 getProcessMemoryUsed();

MCAPI ushort halfFromFloat(float _a);

MCAPI float halfToFloat(ushort _a);

MCAPI float log(float _a);

MCAPI int memCmp(void const* _lhs, void const* _rhs, uint64 _numBytes);

MCAPI void memCopy(void* _dst, void const* _src, uint64 _numBytes);

MCAPI void memCopy(void* _dst, void const* _src, uint _size, uint _num, uint _srcPitch, uint _dstPitch);

MCAPI void memMove(void* _dst, void const* _src, uint64 _numBytes);

MCAPI void memSet(void* _dst, uchar _ch, uint64 _numBytes);

MCAPI void mtxInverse(float* _result, float const* _a);

MCAPI void mtxMul(float* _result, float const* _a, float const* _b);

MCAPI void mtxOrtho(
    float* _result,
    float  _left,
    float  _right,
    float  _bottom,
    float  _top,
    float  _near,
    float  _far,
    float  _offset,
    bool   _oglNdc
);

MCAPI void mtxOrthoRh(
    float* _result,
    float  _left,
    float  _right,
    float  _bottom,
    float  _top,
    float  _near,
    float  _far,
    float  _offset,
    bool   _oglNdc
);

MCAPI void mtxProjRh(float* _result, float _fovy, float _aspect, float _near, float _far, bool _oglNdc);

MCAPI void packBgr5a1(void* _dst, float const* _src);

MCAPI void packBgra4(void* _dst, float const* _src);

MCAPI void packBgra8(void* _dst, float const* _src);

MCAPI void packR16(void* _dst, float const* _src);

MCAPI void packR16F(void* _dst, float const* _src);

MCFOLD void packR16I(void* _dst, float const* _src);

MCAPI void packR16S(void* _dst, float const* _src);

MCFOLD void packR16U(void* _dst, float const* _src);

MCAPI void packR24(void* _dst, float const* _src);

MCAPI void packR24G8(void* _dst, float const* _src);

MCFOLD void packR32F(void* _dst, float const* _src);

MCFOLD void packR32I(void* _dst, float const* _src);

MCFOLD void packR32U(void* _dst, float const* _src);

MCAPI void packR5G6B5(void* _dst, float const* _src);

MCAPI void packR8(void* _dst, float const* _src);

MCFOLD void packR8I(void* _dst, float const* _src);

MCAPI void packR8S(void* _dst, float const* _src);

MCFOLD void packR8U(void* _dst, float const* _src);

MCAPI void packRG11B10F(void* _dst, float const* _src);

MCAPI void packRg16(void* _dst, float const* _src);

MCAPI void packRg16F(void* _dst, float const* _src);

MCFOLD void packRg16I(void* _dst, float const* _src);

MCAPI void packRg16S(void* _dst, float const* _src);

MCFOLD void packRg16U(void* _dst, float const* _src);

MCFOLD void packRg32F(void* _dst, float const* _src);

MCFOLD void packRg32I(void* _dst, float const* _src);

MCFOLD void packRg32U(void* _dst, float const* _src);

MCAPI void packRg8(void* _dst, float const* _src);

MCFOLD void packRg8I(void* _dst, float const* _src);

MCAPI void packRg8S(void* _dst, float const* _src);

MCFOLD void packRg8U(void* _dst, float const* _src);

MCAPI void packRgb10A2(void* _dst, float const* _src);

MCAPI void packRgb5a1(void* _dst, float const* _src);

MCAPI void packRgb8(void* _dst, float const* _src);

MCFOLD void packRgb8I(void* _dst, float const* _src);

MCAPI void packRgb8S(void* _dst, float const* _src);

MCFOLD void packRgb8U(void* _dst, float const* _src);

MCAPI void packRgb9E5F(void* _dst, float const* _src);

MCAPI void packRgba16(void* _dst, float const* _src);

MCAPI void packRgba16F(void* _dst, float const* _src);

MCFOLD void packRgba16I(void* _dst, float const* _src);

MCAPI void packRgba16S(void* _dst, float const* _src);

MCFOLD void packRgba16U(void* _dst, float const* _src);

MCFOLD void packRgba32F(void* _dst, float const* _src);

MCFOLD void packRgba32I(void* _dst, float const* _src);

MCFOLD void packRgba32U(void* _dst, float const* _src);

MCAPI void packRgba4(void* _dst, float const* _src);

MCAPI void packRgba8(void* _dst, float const* _src);

MCFOLD void packRgba8I(void* _dst, float const* _src);

MCAPI void packRgba8S(void* _dst, float const* _src);

MCFOLD void packRgba8U(void* _dst, float const* _src);

MCAPI int prettify(char* _out, int _count, uint64 _value, ::bx::Units::Enum _units);

MCAPI void quickSort(void* _data, uint _num, uint _stride, int (*const_fn)(void const*, void const*));

MCAPI void radixSort(uint* _keys, uint* _tempKeys, uint _size);

MCAPI int snprintf(char*, int, char const*, ...);

MCAPI int strCat(char* _dst, int _dstSize, ::bx::StringView const& _str, int _num);

MCAPI int strCmp(::bx::StringView const& _lhs, ::bx::StringView const& _rhs, int max);

MCAPI int strCopy(char* _dst, int _dstSize, ::bx::StringView const& _str, int _num);

MCAPI char const* strFind(::bx::StringView const& _str, char _ch);

MCAPI char const* strFind(::bx::StringView const& _str, ::bx::StringView const& _find, int _num);

MCAPI int strLen(char const* _str, int max);

MCAPI int strLen(::bx::StringView const& _str, int max);

MCAPI char const* streol(char const* _str);

MCAPI char const* strnl(char const* _str);

MCAPI char toUpper(char _ch);

MCAPI void unpackBgra8(float* _dst, void const* _src);

MCAPI void unpackR16(float* _dst, void const* _src);

MCAPI void unpackR16F(float* _dst, void const* _src);

MCAPI void unpackR16I(float* _dst, void const* _src);

MCAPI void unpackR16S(float* _dst, void const* _src);

MCAPI void unpackR16U(float* _dst, void const* _src);

MCAPI void unpackR24(float* _dst, void const* _src);

MCAPI void unpackR24G8(float* _dst, void const* _src);

MCFOLD void unpackR32F(float* _dst, void const* _src);

MCFOLD void unpackR32I(float* _dst, void const* _src);

MCFOLD void unpackR32U(float* _dst, void const* _src);

MCAPI void unpackR5G6B5(float* _dst, void const* _src);

MCAPI void unpackR8(float* _dst, void const* _src);

MCAPI void unpackR8I(float* _dst, void const* _src);

MCAPI void unpackR8S(float* _dst, void const* _src);

MCAPI void unpackR8U(float* _dst, void const* _src);

MCAPI void unpackRG11B10F(float* _dst, void const* _src);

MCAPI void unpackRg16(float* _dst, void const* _src);

MCAPI void unpackRg16F(float* _dst, void const* _src);

MCAPI void unpackRg16I(float* _dst, void const* _src);

MCAPI void unpackRg16S(float* _dst, void const* _src);

MCAPI void unpackRg16U(float* _dst, void const* _src);

MCFOLD void unpackRg32F(float* _dst, void const* _src);

MCFOLD void unpackRg32I(float* _dst, void const* _src);

MCFOLD void unpackRg32U(float* _dst, void const* _src);

MCAPI void unpackRg8(float* _dst, void const* _src);

MCAPI void unpackRg8I(float* _dst, void const* _src);

MCAPI void unpackRg8S(float* _dst, void const* _src);

MCAPI void unpackRg8U(float* _dst, void const* _src);

MCAPI void unpackRgb10A2(float* _dst, void const* _src);

MCAPI void unpackRgb5a1(float* _dst, void const* _src);

MCAPI void unpackRgb8(float* _dst, void const* _src);

MCAPI void unpackRgb8I(float* _dst, void const* _src);

MCAPI void unpackRgb8S(float* _dst, void const* _src);

MCAPI void unpackRgb8U(float* _dst, void const* _src);

MCAPI void unpackRgb9E5F(float* _dst, void const* _src);

MCAPI void unpackRgba16(float* _dst, void const* _src);

MCAPI void unpackRgba16F(float* _dst, void const* _src);

MCAPI void unpackRgba16I(float* _dst, void const* _src);

MCAPI void unpackRgba16S(float* _dst, void const* _src);

MCAPI void unpackRgba16U(float* _dst, void const* _src);

MCFOLD void unpackRgba32F(float* _dst, void const* _src);

MCFOLD void unpackRgba32I(float* _dst, void const* _src);

MCFOLD void unpackRgba32U(float* _dst, void const* _src);

MCAPI void unpackRgba4(float* _dst, void const* _src);

MCAPI void unpackRgba8(float* _dst, void const* _src);

MCAPI void unpackRgba8I(float* _dst, void const* _src);

MCAPI void unpackRgba8S(float* _dst, void const* _src);

MCAPI void unpackRgba8U(float* _dst, void const* _src);

MCAPI int vsnprintf(char* _out, int max, char const* _format, char* _argList);

MCAPI void xchg(void* _a, void* _b, uint64 _numBytes);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI float const& kE();

MCAPI float const& kFloatMax();

MCAPI float const& kFloatMin();

MCAPI float const& kInfinity();

MCAPI float const& kInvLogNat2();

MCAPI float const& kInvPi();

MCAPI float const& kLogNat10();

MCAPI float const& kLogNat2Hi();

MCAPI float const& kLogNat2Lo();

MCAPI float const& kNearZero();

MCAPI float const& kPi();

MCAPI float const& kPi2();

MCAPI float const& kPiHalf();

MCAPI float const& kPiQuarter();

MCAPI float const& kSqrt2();
// NOLINTEND

} // namespace bx
