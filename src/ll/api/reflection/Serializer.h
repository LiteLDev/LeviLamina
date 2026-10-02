#pragma once
#include "ll/api/reflection/ReflectionError.h"
#include "ll/api/utils/StringUtils.h"

namespace ll::reflection {

template <typename T, typename J = void>
struct Serializer {};

template <>
struct Serializer<bool> {
    static std::string        to_string(bool t) { return t ? "true" : "false"; }
    static ll::Expected<bool> from_string(std::string_view s) { return ll::string_utils::svtobool(s); }
};

template <>
struct Serializer<int8> {
    static std::string        to_string(int8 t) { return fmt::to_string(t); }
    static ll::Expected<int8> from_string(std::string_view s) { return ll::string_utils::svtoc(s); }
};

template <>
struct Serializer<uint8> {
    static std::string         to_string(uint8 t) { return fmt::to_string(t); }
    static ll::Expected<uint8> from_string(std::string_view s) { return ll::string_utils::svtouc(s); }
};

template <>
struct Serializer<int16> {
    static std::string         to_string(int16 t) { return fmt::to_string(t); }
    static ll::Expected<int16> from_string(std::string_view s) { return ll::string_utils::svtos(s); }
};

template <>
struct Serializer<uint16> {
    static std::string          to_string(uint16 t) { return fmt::to_string(t); }
    static ll::Expected<uint16> from_string(std::string_view s) { return ll::string_utils::svtous(s); }
};

template <>
struct Serializer<int32> {
    static std::string         to_string(int32 t) { return fmt::to_string(t); }
    static ll::Expected<int32> from_string(std::string_view s) { return ll::string_utils::svtoi(s); }
};

template <>
struct Serializer<uint32> {
    static std::string          to_string(uint32 t) { return fmt::to_string(t); }
    static ll::Expected<uint32> from_string(std::string_view s) { return ll::string_utils::svtoui(s); }
};

template <>
struct Serializer<long> {
    static std::string        to_string(long t) { return fmt::to_string(t); }
    static ll::Expected<long> from_string(std::string_view s) { return ll::string_utils::svtol(s); }
};

template <>
struct Serializer<ulong> {
    static std::string         to_string(ulong t) { return fmt::to_string(t); }
    static ll::Expected<ulong> from_string(std::string_view s) { return ll::string_utils::svtoul(s); }
};

template <>
struct Serializer<int64> {
    static std::string         to_string(int64 t) { return fmt::to_string(t); }
    static ll::Expected<int64> from_string(std::string_view s) { return ll::string_utils::svtoll(s); }
};

template <>
struct Serializer<uint64> {
    static std::string          to_string(uint64 t) { return fmt::to_string(t); }
    static ll::Expected<uint64> from_string(std::string_view s) { return ll::string_utils::svtoull(s); }
};

template <>
struct Serializer<float> {
    static std::string         to_string(float t) { return fmt::to_string(t); }
    static ll::Expected<float> from_string(std::string_view s) { return ll::string_utils::svtof(s); }
};

template <>
struct Serializer<double> {
    static std::string          to_string(double t) { return fmt::to_string(t); }
    static ll::Expected<double> from_string(std::string_view s) { return ll::string_utils::svtod(s); }
};

template <>
struct Serializer<ldouble> {
    static std::string           to_string(ldouble t) { return fmt::to_string(t); }
    static ll::Expected<ldouble> from_string(std::string_view s) { return ll::string_utils::svtold(s); }
};

} // namespace ll::reflection
