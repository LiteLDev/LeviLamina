#pragma once
#include "RowSet.h"

namespace DB
{

struct BindType
{
    Any value;
    std::string name;
};

/**
 * @brief Structure to store a sequential container 
 *        to bind multiple parameters at once.
 * 
 * @tparam T Type of sequence container, must have begin() and end() methods
 * @tparam The value type of the container must be DB::Any.
 */
template <typename T>
struct BindSequenceType
{
    T values;
    std::vector<std::string> names;
    static_assert(std::is_same<typename T::value_type, Any>::value, "Container value type must be DB::Any");
};
/**
 * @brief Structure to store a map(relevance) container
 *        to bind multiple parameters at once.
 * 
 * @tparam T Type of map container, must have begin() and end() methods
 * @note   The key type of the map must be std::string, 
 *         and the value type of the map must be DB::Any.
 */
template <typename T>
struct BindMapType
{
    T values;
    static_assert(std::is_same<typename T::key_type, std::string>::value, "Map key type must be std::string");
    static_assert(std::is_same<typename T::mapped_type, Any>::value, "Map value type must be DB::Any");
};

template <typename T>
struct IntoType
{
    T& value;
};

class Stmt
{

    ResultSet* results = nullptr;

public:

    virtual ~Stmt();
    /**
     * @brief Bind a value to a statement parameter.
     * 
     * @param value Value to bind
     * @param index Parameter index
     * @throws std::runtime_error If error occurs
     */
    virtual Stmt& bind(const Any& value, int index) = 0;
    /**
     * @brief Bind a value to a statement parameter.
     * 
     * @param value Value to bind
     * @param name  Parameter name
     * @throws std::runtime_error If error occurs
     */
    virtual Stmt& bind(const Any& value, const std::string& name) = 0;
    /**
     * @brief Close the statement.
     * 
     */
    virtual void close() = 0;
    /**
     * @brief Get the number of the unbound parameters.
     * 
     * @return int The number of the unbound parameters
     */
    virtual int getUnboundParamsCount() = 0;
    /**
     * @brief Get the number of the bound parameters.
     * 
     * @return int The number of the bound parameters
     */
    virtual int getBoundParamsCount() = 0;
    /**
     * @brief Get the number of parameters.
     * 
     * @return int The number of parameters
     */
    virtual int getParamsCount() = 0;

    /**
     * @brief Operator, to bind values.
     * 
     * @param u The return value of DB::bind
     * @return Stmt& *this
     */
    //virtual Stmt& operator,(const BindType& u) = 0;
    /**
     * @brief Operator, to set where to store results.
     * 
     * @param i The return value of DB::into
     * @return Stmt& *this
     */
    template <typename T>
    inline Stmt& operator,(IntoType<T>& i)
    {
        
    }
    
};

inline BindType bind(const Any& value)
{
    return BindType{value};
}
inline BindType bind(const std::string& name, const Any& value)
{
    return BindType{value, name};
}
inline BindSequenceType<Row> bind(const Row& values)
{
    return BindSequenceType<Row>{values};
}


template <typename T>
inline BindSequenceType<std::vector<T>> bind(const std::vector<T>& values)
{
    return BindSequenceType<std::vector<Any>>{to_any_container(values)};
}
template <typename T>
inline BindSequenceType<std::set<T>> bind(const std::set<T>& values)
{
    return BindSequenceType<std::set<T>>{values};
}
template <typename T>
inline BindSequenceType<std::list<T>> bind(const std::list<T>& values)
{
    return BindSequenceType<std::list<T>>{values};
}
template <typename T>
inline BindSequenceType<std::initializer_list<T>> bind(const std::initializer_list<T>& values)
{
    return BindSequenceType<std::initializer_list<T>>{values};
}
template <>
inline BindSequenceType<std::vector<Any>> bind(const std::vector<Any>& values)
{
    return BindSequenceType<std::vector<Any>>{values};
}
template <>
inline BindSequenceType<std::set<Any>> bind(const std::set<Any>& values)
{
    return BindSequenceType<std::set<Any>>{values};
}
template <>
inline BindSequenceType<std::list<Any>> bind(const std::list<Any>& values)
{
    return BindSequenceType<std::list<Any>>{values};
}
template <>
inline BindSequenceType<std::initializer_list<Any>> bind(const std::initializer_list<Any>& values)
{
    return BindSequenceType<std::initializer_list<Any>>{values};
}


// Map
template <typename T>
inline BindMapType<std::map<std::string, T>> bind(const std::map<std::string, T>& values)
{
    return BindMapType<std::map<std::string, T>>{values};
}
template <typename T>
inline BindMapType<std::unordered_map<std::string, T>> bind(const std::unordered_map<std::string, T>& values)
{
    return BindMapType<std::unordered_map<std::string, T>>{values};
}
template <>
inline BindMapType<std::map<std::string, Any>> bind(const std::map<std::string, Any>& values)
{
    return BindMapType<std::map<std::string, Any>>{values};
}
template <>
inline BindMapType<std::unordered_map<std::string, Any>> bind(const std::unordered_map<std::string, Any>& values)
{
    return BindMapType<std::unordered_map<std::string, Any>>{values};
}
inline BindMapType<std::map<std::string, Any>> bind(const std::initializer_list<std::pair<std::string, Any>>& values)
{
    std::map<std::string, Any> result;
    for (auto& pair : values) {
        result.insert(std::make_pair(pair.first, pair.second));
    }
    return BindMapType<std::map<std::string, Any>>{result};
}

template <typename T>
inline IntoType<T>&& into(T& out)
{
    return IntoType<T>{out};
}

} // namespace DB