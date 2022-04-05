#pragma once
#include "RowSet.h"

namespace DB
{

/**
 * @brief Friend function to convert a set of result to T.
 * 
 * @tparam T  The type to convert to
 * @param res A set of rows
 * @return T  The converted value
 */
template <typename T>
inline T results_to(const ResultSet& res)
{
    throw std::bad_cast();
}

struct BindType
{
    Any value;
    std::string name;
    int idx = -1;
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

protected:
    ResultSet* results = nullptr;

public:
    virtual ~Stmt();
    /**
     * @brief Bind a value to a statement parameter.
     * 
     * @param value               Value to bind
     * @param index               Parameter index
     * @throws std::runtime_error If error occurs
     */
    virtual Stmt& bind(const Any& value, int index) = 0;
    /**
     * @brief Bind a value to a statement parameter.
     * 
     * @param value               Value to bind
     * @param name                Parameter name
     * @throws std::runtime_error If error occurs
     */
    virtual Stmt& bind(const Any& value, const std::string& name) = 0;
    /**
     * @brief Bind a value to the next statement parameter.
     * 
     * @param value               Value to bind
     * @throws std::runtime_error If error occurs
     */
    virtual Stmt& bind(const Any& value) = 0;
    /**
     * @brief Get the query results.
     * 
     * @return ResultSet&         Result set
     * @throws std::runtime_error If the result is not available
     */
    virtual ResultSet getResults();
    /**
     * @brief Close the statement.
     * 
     * @warning DO NOT ACCESS THIS OBJECT AFTER CALLING THIS METHOD!!!
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
     * @brief Get the session type
     * 
     * @return DB::DBType The database type
     */
    virtual DBType getType() = 0;
    /**
     * @brief Get wether the statement is executed or not.
     * 
     * @return bool Return true if the statement is executed, false otherwise
     */
    virtual bool isExecuted() = 0;

    /**
     * @brief Operator, to bind single values.
     * 
     * @param b The return value of DB::use
     * @return Stmt& *this
     */
    virtual Stmt& operator,(const BindType& b) = 0;
    /**
     * @brief Operator, to bind a sequence container.
     * 
     * @param b The return value of DB::use
     * @return Stmt& *this
     */
    template <typename T>
    inline Stmt& operator,(const BindSequenceType<T>& b)
    {
        for (auto& v : b.values)
        {
            bind(v);
        }
        return *this;
    }
    /**
     * @brief Operator, to bind a row.
     * 
     * @param b The return value of DB::use
     * @return Stmt& *this
     */
    template <>
    inline Stmt& operator,(const BindSequenceType<Row>& b)
    {
        if (b.values.header.size())
        {
            BindSequenceType<Row> copy = b;
            copy.values.forEach([&](const std::string& name, Any& value) {
                bind(value, name);
                return true;
            });
        }
        else
        {
            for (auto& v : b.values)
            {
                bind(v);
            }
        }
        return *this;
    }
    /**
     * @brief Operator, to bind a map container.
     * 
     * @param b The return value of DB::bind
     * @return Stmt& *this
     */
    template <typename T>
    inline Stmt& operator,(const BindMapType<T>& b)
    {
        for (auto& v : b.values)
        {
            bind(v.second, v.first);
        }
        return *this;
    }

    /**
     * @brief Friend function to convert a set of result to T.
     * 
     * @tparam T  The type to convert to
     * @param res A set of rows
     * @return T  The converted value
     */
    template <typename T>
    friend T results_to(const ResultSet& res);
    /**
     * @brief Operator, to set where to store results.
     * 
     * @param i The return value of DB::into
     * @return Stmt& *this
     */
    template <typename T>
    inline Stmt& operator,(IntoType<T>& i)
    {
        if (results)
        {
            i.value = results_to<T>(*results);
        }
        else
        {
            throw std::runtime_error("$Core$ DB::Stmt::operator,: No results to store");
        }
        return *this;
    }
    template <>
    inline Stmt& operator,(IntoType<ResultSet>& i)
    {
        if (results)
        {
            i.value = *results;
        }
        else
        {
            throw std::runtime_error("$Core$ DB::Stmt::operator,: No results to store");
        }
        return *this;
    }
    template <>
    inline Stmt& operator,(IntoType<Row>& i)
    {
        if (results)
        {
            if (results->size())
            {
                i.value = results->at(0);
            }
            else
            {
                throw std::runtime_error("$Core$ DB::Stmt::operator,: The result set is empty");
            }
        }
        else
        {
            throw std::runtime_error("$Core$ DB::Stmt::operator,: No results to store");
        }
        return *this;
    }
};

template <typename T>
inline void destroy(T* ptr)
{
    delete ptr;
    ptr = nullptr;
}

inline BindType use(const Any& value, int idx = -1)
{
    return BindType{value, std::string(), idx};
}
inline BindType use(const std::string& name, const Any& value)
{
    return BindType{value, name};
}
inline BindSequenceType<Row> use(const Row& values)
{
    return BindSequenceType<Row>{values};
}


template <typename T>
inline BindSequenceType<std::vector<T>> use(const std::vector<T>& values)
{
    return BindSequenceType<std::vector<Any>>{to_any_container(values)};
}
template <typename T>
inline BindSequenceType<std::set<T>> use(const std::set<T>& values)
{
    return BindSequenceType<std::set<T>>{to_any_container(values)};
}
template <typename T>
inline BindSequenceType<std::list<T>> use(const std::list<T>& values)
{
    return BindSequenceType<std::list<T>>{to_any_container(values)};
}
template <typename T>
inline BindSequenceType<std::vector<T>> use(const std::initializer_list<T>& values)
{
    return BindSequenceType<std::vector<T>>{to_any_container(std::vector<T>(values))};
}
template <>
inline BindSequenceType<std::vector<Any>> use(const std::vector<Any>& values)
{
    return BindSequenceType<std::vector<Any>>{values};
}
template <>
inline BindSequenceType<std::set<Any>> use(const std::set<Any>& values)
{
    return BindSequenceType<std::set<Any>>{values};
}
template <>
inline BindSequenceType<std::list<Any>> use(const std::list<Any>& values)
{
    return BindSequenceType<std::list<Any>>{values};
}
template <>
inline BindSequenceType<std::vector<Any>> use(const std::initializer_list<Any>& values)
{
    return BindSequenceType<std::vector<Any>>{std::vector<Any>(values)};
}


// Map
template <typename T>
inline BindMapType<std::map<std::string, T>> use(const std::map<std::string, T>& values)
{
    return BindMapType<std::map<std::string, T>>{values};
}
template <typename T>
inline BindMapType<std::unordered_map<std::string, T>> use(const std::unordered_map<std::string, T>& values)
{
    return BindMapType<std::unordered_map<std::string, T>>{values};
}
template <>
inline BindMapType<std::map<std::string, Any>> use(const std::map<std::string, Any>& values)
{
    return BindMapType<std::map<std::string, Any>>{values};
}
template <>
inline BindMapType<std::unordered_map<std::string, Any>> use(const std::unordered_map<std::string, Any>& values)
{
    return BindMapType<std::unordered_map<std::string, Any>>{values};
}
inline BindMapType<std::map<std::string, Any>> use(const std::initializer_list<std::pair<std::string, Any>>& values)
{
    std::map<std::string, Any> result;
    for (auto& pair : values)
    {
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