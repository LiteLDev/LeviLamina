#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/units/Enum.h"

// auto generated forward declare list
// clang-format off
namespace bx { class StringView; }
// clang-format on

namespace bx {
// functions
// NOLINTBEGIN
MCNAPI float cos(float _a);

MCNAPI void debugBreak();

MCNAPI void debugOutput(char const* _out);

MCNAPI void debugPrintfVargs(char const* _format, char* _argList);

MCNAPI void dlclose(void* _handle);

MCNAPI void* dlopen(char const* _filePath);

MCNAPI void* dlsym(void* _handle, char const* _symbol);

MCNAPI float exp(float _a);

MCNAPI char const* findIdentifierMatch(char const* _str, char const* _word);

MCNAPI char const* findIdentifierMatch(char const* _str, char const** const _words);

MCNAPI float floor(float _a);

MCNAPI int64 getHPCounter();

MCNAPI int64 getHPFrequency();

MCNAPI uint64 getProcessMemoryUsed();

MCNAPI ushort halfFromFloat(float _a);

MCNAPI float halfToFloat(ushort _a);

MCNAPI float log(float _a);

MCNAPI int memCmp(void const* _lhs, void const* _rhs, uint64 _numBytes);

MCNAPI void memCopy(void* _dst, void const* _src, uint64 _numBytes);

MCNAPI void memCopy(void* _dst, void const* _src, uint _size, uint _num, uint _srcPitch, uint _dstPitch);

MCNAPI void memMove(void* _dst, void const* _src, uint64 _numBytes);

MCNAPI void memSet(void* _dst, uchar _ch, uint64 _numBytes);

MCNAPI void mtxInverse(float* _result, float const* _a);

MCNAPI void mtxMul(float* _result, float const* _a, float const* _b);

MCNAPI void mtxOrtho(
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

MCNAPI void mtxOrthoRh(
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

MCNAPI void mtxProjRh(float* _result, float _fovy, float _aspect, float _near, float _far, bool _oglNdc);

MCNAPI void packBgra8(void* _dst, float const* _src);

MCNAPI void packR16(void* _dst, float const* _src);

MCNAPI void packR16F(void* _dst, float const* _src);

MCNAPI void packR16I(void* _dst, float const* _src);

MCNAPI void packR16S(void* _dst, float const* _src);

MCNAPI void packR16U(void* _dst, float const* _src);

MCNAPI void packR24(void* _dst, float const* _src);

MCNAPI void packR24G8(void* _dst, float const* _src);

MCNAPI void packR32F(void* _dst, float const* _src);

MCNAPI void packR32I(void* _dst, float const* _src);

MCNAPI void packR32U(void* _dst, float const* _src);

MCNAPI void packR5G6B5(void* _dst, float const* _src);

MCNAPI void packR8(void* _dst, float const* _src);

MCNAPI void packR8I(void* _dst, float const* _src);

MCNAPI void packR8S(void* _dst, float const* _src);

MCNAPI void packR8U(void* _dst, float const* _src);

MCNAPI void packRG11B10F(void* _dst, float const* _src);

MCNAPI void packRg16(void* _dst, float const* _src);

MCNAPI void packRg16F(void* _dst, float const* _src);

MCNAPI void packRg16I(void* _dst, float const* _src);

MCNAPI void packRg16S(void* _dst, float const* _src);

MCNAPI void packRg16U(void* _dst, float const* _src);

MCNAPI void packRg32F(void* _dst, float const* _src);

MCNAPI void packRg32I(void* _dst, float const* _src);

MCNAPI void packRg32U(void* _dst, float const* _src);

MCNAPI void packRg8(void* _dst, float const* _src);

MCNAPI void packRg8I(void* _dst, float const* _src);

MCNAPI void packRg8S(void* _dst, float const* _src);

MCNAPI void packRg8U(void* _dst, float const* _src);

MCNAPI void packRgb10A2(void* _dst, float const* _src);

MCNAPI void packRgb5a1(void* _dst, float const* _src);

MCNAPI void packRgb8(void* _dst, float const* _src);

MCNAPI void packRgb8I(void* _dst, float const* _src);

MCNAPI void packRgb8S(void* _dst, float const* _src);

MCNAPI void packRgb8U(void* _dst, float const* _src);

MCNAPI void packRgb9E5F(void* _dst, float const* _src);

MCNAPI void packRgba16(void* _dst, float const* _src);

MCNAPI void packRgba16F(void* _dst, float const* _src);

MCNAPI void packRgba16I(void* _dst, float const* _src);

MCNAPI void packRgba16S(void* _dst, float const* _src);

MCNAPI void packRgba16U(void* _dst, float const* _src);

MCNAPI void packRgba32F(void* _dst, float const* _src);

MCNAPI void packRgba32I(void* _dst, float const* _src);

MCNAPI void packRgba32U(void* _dst, float const* _src);

MCNAPI void packRgba4(void* _dst, float const* _src);

MCNAPI void packRgba8(void* _dst, float const* _src);

MCNAPI void packRgba8I(void* _dst, float const* _src);

MCNAPI void packRgba8S(void* _dst, float const* _src);

MCNAPI void packRgba8U(void* _dst, float const* _src);

MCNAPI int prettify(char* _out, int _count, uint64 _value, ::bx::Units::Enum _units);

MCNAPI void quickSort(void* _data, uint _num, uint _stride, int (*const_fn)(void const*, void const*));

MCNAPI void radixSort(uint* _keys, uint* _tempKeys, uint _size);

MCNAPI int snprintf(char* _out, int max, char const* _format, ...);

MCNAPI int strCat(char* _dst, int _dstSize, ::bx::StringView const& _str, int _num);

MCNAPI int strCmp(::bx::StringView const& _lhs, ::bx::StringView const& _rhs, int max);

MCNAPI int strCopy(char* _dst, int _dstSize, ::bx::StringView const& _str, int _num);

MCNAPI char const* strFind(::bx::StringView const& _str, char _ch);

MCNAPI char const* strFind(::bx::StringView const& _str, ::bx::StringView const& _find, int _num);

MCNAPI int strLen(char const* _str, int max);

MCNAPI int strLen(::bx::StringView const& _str, int max);

MCNAPI char const* streol(char const* _str);

MCNAPI char const* strnl(char const* _str);

MCNAPI char toUpper(char _ch);

MCNAPI void unpackBgra8(float* _dst, void const* _src);

MCNAPI void unpackR16(float* _dst, void const* _src);

MCNAPI void unpackR16F(float* _dst, void const* _src);

MCNAPI void unpackR16I(float* _dst, void const* _src);

MCNAPI void unpackR16S(float* _dst, void const* _src);

MCNAPI void unpackR16U(float* _dst, void const* _src);

MCNAPI void unpackR24(float* _dst, void const* _src);

MCNAPI void unpackR24G8(float* _dst, void const* _src);

MCNAPI void unpackR32F(float* _dst, void const* _src);

MCNAPI void unpackR32I(float* _dst, void const* _src);

MCNAPI void unpackR32U(float* _dst, void const* _src);

MCNAPI void unpackR5G6B5(float* _dst, void const* _src);

MCNAPI void unpackR8(float* _dst, void const* _src);

MCNAPI void unpackR8I(float* _dst, void const* _src);

MCNAPI void unpackR8S(float* _dst, void const* _src);

MCNAPI void unpackR8U(float* _dst, void const* _src);

MCNAPI void unpackRG11B10F(float* _dst, void const* _src);

MCNAPI void unpackRg16(float* _dst, void const* _src);

MCNAPI void unpackRg16F(float* _dst, void const* _src);

MCNAPI void unpackRg16I(float* _dst, void const* _src);

MCNAPI void unpackRg16S(float* _dst, void const* _src);

MCNAPI void unpackRg16U(float* _dst, void const* _src);

MCNAPI void unpackRg32F(float* _dst, void const* _src);

MCNAPI void unpackRg32I(float* _dst, void const* _src);

MCNAPI void unpackRg32U(float* _dst, void const* _src);

MCNAPI void unpackRg8(float* _dst, void const* _src);

MCNAPI void unpackRg8I(float* _dst, void const* _src);

MCNAPI void unpackRg8S(float* _dst, void const* _src);

MCNAPI void unpackRg8U(float* _dst, void const* _src);

MCNAPI void unpackRgb10A2(float* _dst, void const* _src);

MCNAPI void unpackRgb5a1(float* _dst, void const* _src);

MCNAPI void unpackRgb8(float* _dst, void const* _src);

MCNAPI void unpackRgb8I(float* _dst, void const* _src);

MCNAPI void unpackRgb8S(float* _dst, void const* _src);

MCNAPI void unpackRgb8U(float* _dst, void const* _src);

MCNAPI void unpackRgb9E5F(float* _dst, void const* _src);

MCNAPI void unpackRgba16(float* _dst, void const* _src);

MCNAPI void unpackRgba16F(float* _dst, void const* _src);

MCNAPI void unpackRgba16I(float* _dst, void const* _src);

MCNAPI void unpackRgba16S(float* _dst, void const* _src);

MCNAPI void unpackRgba16U(float* _dst, void const* _src);

MCNAPI void unpackRgba32F(float* _dst, void const* _src);

MCNAPI void unpackRgba32I(float* _dst, void const* _src);

MCNAPI void unpackRgba32U(float* _dst, void const* _src);

MCNAPI void unpackRgba4(float* _dst, void const* _src);

MCNAPI void unpackRgba8(float* _dst, void const* _src);

MCNAPI void unpackRgba8I(float* _dst, void const* _src);

MCNAPI void unpackRgba8S(float* _dst, void const* _src);

MCNAPI void unpackRgba8U(float* _dst, void const* _src);

MCNAPI int vsnprintf(char* _out, int max, char const* _format, char* _argList);

MCNAPI void xchg(void* _a, void* _b, uint64 _numBytes);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI float const& kE();

MCNAPI float const& kFloatMax();

MCNAPI float const& kFloatMin();

MCNAPI float const& kInfinity();

MCNAPI float const& kInvLogNat2();

MCNAPI float const& kInvPi();

MCNAPI float const& kLogNat10();

MCNAPI float const& kLogNat2Hi();

MCNAPI float const& kLogNat2Lo();

MCNAPI float const& kNearZero();

MCNAPI float const& kPi();

MCNAPI float const& kPi2();

MCNAPI float const& kPiHalf();

MCNAPI float const& kPiQuarter();

MCNAPI float const& kSqrt2();
// NOLINTEND

} // namespace bx
