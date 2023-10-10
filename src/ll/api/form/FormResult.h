#pragma once

#include "ll/api/base/StdInt.h"
#include <any>
#include <string>

namespace ll::form {

class FormElementResult {

    enum class Type { Null, Int, Double, String };

    Type        type = Type::Null;
    uint64      intVal;
    double      doubleVal;
    std::string stringVal;

public:
    FormElementResult() = default;
    template <typename T>
        requires std::is_integral_v<T>
    FormElementResult(T value) : type(Type::Int),
                                 intVal(value) {}
    template <typename T>
        requires std::is_floating_point_v<T>
    FormElementResult(T value) : type(Type::Double),
                                 doubleVal(value) {}
    FormElementResult(std::string value) : type(Type::String), stringVal(std::move(value)) {}

    void clear() {
        type      = Type::Null;
        intVal    = 0;
        doubleVal = 0.0;
        stringVal = std::string{};
    }

    template <typename T>
        requires std::is_integral_v<T> || std::is_convertible_v<T, uint64>
    void setInt(T value) {
        type   = Type::Int;
        intVal = value;
    }

    template <typename T>
        requires std::is_floating_point_v<T> || std::is_convertible_v<T, double>
    void setDouble(T value) {
        type      = Type::Double;
        doubleVal = value;
    }

    void setString(std::string value) {
        type      = Type::String;
        stringVal = std::move(value);
    }

    template <typename T>
        requires std::is_integral_v<T> || std::is_floating_point_v<T> || std::is_convertible_v<T, std::string>
              || std::is_null_pointer_v<T>
    void set(T value) {
        if constexpr (std::is_integral_v<T>) {
            type   = Type::Int;
            intVal = value;
        } else if constexpr (std::is_floating_point_v<T>) {
            type      = Type::Double;
            doubleVal = value;
        } else if constexpr (std::is_convertible_v<T, std::string>) {
            type      = Type::String;
            stringVal = value;
        } else if constexpr (std::is_null_pointer_v<T>) {
            clear();
        }
    }

    template <typename T>
        requires std::is_integral_v<T> || std::is_floating_point_v<T> || std::is_convertible_v<T, std::string>
              || std::is_null_pointer_v<T>
    FormElementResult& operator=(T value) {
        set(value);
        return *this;
    }

    template <typename T = int>
        requires std::is_integral_v<T> || std::is_convertible_v<T, uint64>
    T asInt() const {
        if (type == Type::Int || type == Type::Double) { return static_cast<T>(intVal); }
        throw std::bad_cast();
    }

    template <typename T = double>
        requires std::is_floating_point_v<T> || std::is_convertible_v<T, double>
    T asDouble() const {
        if (type == Type::Double || type == Type::Int) { return static_cast<T>(doubleVal); }
        throw std::bad_cast();
    }

    std::string asString() const {
        if (type == Type::String) { return stringVal; }
        throw std::bad_cast();
    }

    template <typename T>
        requires std::is_integral_v<T> || std::is_floating_point_v<T> || std::is_same_v<T, std::string>
    T get() const {
        if constexpr (std::is_integral_v<T>) {
            return asInt<T>();
        } else if constexpr (std::is_floating_point_v<T>) {
            return asDouble<T>();
        } else if constexpr (std::is_same_v<T, std::string>) {
            return asString();
        }
    }

    template <class T>
        requires std::is_integral_v<T>
    operator T() const {
        return asInt<T>();
    }

    template <class T>
        requires std::is_floating_point_v<T>
    operator T() const {
        return asDouble<T>();
    }

    operator std::string() const { return asString(); }

    bool isInt() const { return type == Type::Int; }

    bool isDouble() const { return type == Type::Double; }

    bool isString() const { return type == Type::String; }

    bool isNull() const { return type == Type::Null; }
};

using CustomFormResult = std::unordered_map<std::string, FormElementResult>;

} // namespace ll::form