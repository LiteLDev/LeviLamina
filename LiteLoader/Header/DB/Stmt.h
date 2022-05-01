#pragma once
#include "RowSet.h"
#include "Pointer.h"
//#define LLDB_DEBUG_MODE

#define IF_ENDBG if (debugOutput)

class Logger;

namespace DB
{

extern Logger dbLogger;

class Session;

/**
 * @brief Structure to store a single value to bind to a prepared statement.
 *
 * @tparam T Type of sequence container, must have begin() and end() methods
 * @tparam The value type of the container must be DB::Any.
 */
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
#if defined(LLDB_DEBUG_MODE)
    bool debugOutput = true;
#else
    bool debugOutput = false;
#endif
    std::weak_ptr<Session> session; ///< Parent session

public:
    virtual ~Stmt();
    /**
     * @brief Turn on/off debug output.
     *
     * @param enable  Enable or not
     */
    LIAPI void setDebugOutput(bool enable);
    /**
     * @brief Bind a value to a statement parameter.
     *
     * @param value  Value to bind
     * @param index  Parameter index
     * @throws std::runtime_error  If error occurs
     *
     * @par Implementation
     * @see SQLiteStmt::bind
     */
    virtual Stmt& bind(const Any& value, int index) = 0;
    /**
     * @brief Bind a value to a statement parameter.
     *
     * @param value  Value to bind
     * @param name   Parameter name
     * @throws std::runtime_error  If error occurs
     *
     * @par Impletementation
     * @see SQLiteStmt::bind
     */
    virtual Stmt& bind(const Any& value, const std::string& name) = 0;
    /**
     * @brief Bind a value to the next statement parameter.
     *
     * @param value  Value to bind
     * @throws std::runtime_error  If error occurs
     *
     * @par Impletementation
     * @see SQLiteStmt::bind
     */
    virtual Stmt& bind(const Any& value) = 0;
    /**
     * @brief Step to the next row(not fetch).
     *
     * @return bool  True if there is a next row
     *
     * @par Impletementation
     * @see SQLiteStmt::step
     */
    virtual bool step() = 0;
    /**
     * @brief Step to the next row(=step).
     *
     * @return bool  True if there is a next row
     *
     * @par Impletementation
     * @see SQLiteStmt::next
     */
    virtual bool next() = 0;
    /**
     * @brief Get weather all the rows have been fetched.
     *
     * @return bool  True if all the rows have been fetched
     *
     * @par Impletementation
     * @see SQLiteStmt::done
     */
    virtual bool done() = 0;
    /**
     * @brief Fetch the next row.
     *
     * @return Row  The next row
     * @throws std::runtime_error  If there is no row to fetch
     *
     * @par Example
     * @code
     * auto& stmt = sess.prepare("SELECT * FROM table");
     * while (stmt.step()) {
     *     auto row = stmt.fetch();
     *     // Do something with the row
     * }
     * stmt.close();
     * @endcode
     *
     * @par Impletementation
     * @see SQLiteStmt::fetch
     */
    virtual Row fetch() = 0;
    /**
     * @brief Fetch all the result rows.
     *
     * @param  cb     Callback function to handle the result rows
     * @return Stmt&  *this
     * @note   Return false in callback to stop fetching
     *
     * @par Example
     * @code
     * auto& stmt = sess.prepare("SELECT * FROM table");
     * stmt.fetchAll([](const Row& row) {
     *     // Do something with the row
     *     return true;
     * });
     * stmt.close();
     * @endcode
     *
     * @par Impletementation
     * @see SQLiteStmt::fetchAll
     */
    virtual Stmt& fetchAll(std::function<bool(const Row&)> cb) = 0;
    /**
     * @brief Fetch all the result rows.
     *
     * @return ResultSet  The result rows
     *
     * @par Impletementation
     * @see SQLiteStmt::fetchAll
     */
    virtual ResultSet fetchAll() = 0;
    /**
     * @brief Re-execute the statement(keep the currently bound value to re-excute).
     *
     * @return Stmt&  *this
     * @note   If you want to clear the bound value, use clear() instead.
     *
     * @par Impletementation
     * @see SQLiteStmt::reexec
     */
    virtual Stmt& reexec() = 0;
    /**
     * @brief Clear all the bound values.
     *
     * @return Stmt&  *this
     *
     * @par Impletementation
     * @see SQLiteStmt::clear
     */
    virtual Stmt& clear() = 0;
    /**
     * @brief Close the statement.
     *
     *
     * @par Impletementation
     * @see SQLiteStmt::close
     */
    virtual void close() = 0;
    /**
     * @brief Get the number of rows affected by the statement.
     *
     * @return int  The number of rows affected
     * @note   It will return -1(ULLONG_MAX - 1) if the row count is not available
     *
     * @par Impletementation
     * @see SQLiteStmt::getAffectedRows
     */
    virtual uint64_t getAffectedRows() const = 0;
    /**
     * @brief Get the insert id of the statement
     *
     * @return uint64_t  The insert id
     * @throws std::runtime_error  If error occurs
     * @note   It will return -1(ULLONG_MAX - 1) if the insert id is not available
     *
     * @par Implementation
     * @see SQLiteStmt::getInsertId
     */
    virtual uint64_t getInsertId() const = 0;
    /**
     * @brief Get the number of the unbound parameters.
     *
     * @return int  The number of the unbound parameters
     *
     * @par Impletementation
     * @see SQLiteStmt::getUnboundParams
     */
    virtual int getUnboundParams() const = 0;
    /**
     * @brief Get the number of the bound parameters.
     *
     * @return int  The number of the bound parameters
     *
     * @par Impletementation
     * @see SQLiteStmt::getBoundParams
     */
    virtual int getBoundParams() const = 0;
    /**
     * @brief Get the number of parameters.
     *
     * @return int  The number of parameters
     *
     * @par Impletementation
     * @see SQLiteStmt::getParamsCount
     */
    virtual int getParamsCount() const = 0;
    /**
     * @brief Get the session.
     *
     * @return std::weak_ptr<Session>  The session ptr
     */
    virtual std::weak_ptr<Session> getSession() const = 0;
    /**
     * @brief Get the session type
     *
     * @return DB::DBType  The database type
     *
     * @par Impletementation
     * @see SQLiteStmt::getType
     */
    virtual DBType getType() const = 0;

    /**
     * @brief Operator, to bind single values.
     *
     * @param  b      The return value of DB::use
     * @return Stmt&  *this
     *
     * @par Impletementation
     * @see SQLiteStmt::operator,
     */
    virtual Stmt& operator,(const BindType& b) = 0;
    /**
     * @brief Operator, to bind a sequence container.
     *
     * @param  b      The return value of DB::use
     * @return Stmt&  *this
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
     * @param  b      The return value of DB::use
     * @return Stmt&  *this
     */
    template <>
    inline Stmt& operator,(const BindSequenceType<Row>& b)
    {
        if (b.values.header && b.values.header->size())
        {
            b.values.forEach([&](const std::string& name, const Any& value) {
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
     * @param  b      The return value of DB::bind
     * @return Stmt&  *this
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
     * @brief Operator, to store a row of results.
     *
     * @param  i      The return value of DB::into
     * @return Stmt&  *this
     */
    template <typename T>
    inline Stmt& operator,(IntoType<T>& i)
    {
        if (!done()) i.value = row_to<T>(next());
        return *this;
    }
    /**
     * @brief Operator, to store a set of results.
     *
     * @param  i      The return value of DB::into
     * @return Stmt&  *this
     */
    template <typename T>
    inline Stmt& operator,(IntoType<std::vector<T>>& i)
    {
        fetch([&](const Row& row) {
            i.value.push_back(row_to<T>(row));
            return true;
        });
        return *this;
    }
    /**
     * @brief Operator, to store a set of results.
     *
     * @param  i      The return value of DB::into
     * @return Stmt&  *this
     */
    template <>
    inline Stmt& operator,(IntoType<ResultSet>& i)
    {
        i.value = fetchAll();
        return *this;
    }
    /**
     * @brief Operator, to store a row of results.
     *
     * @param  i      The return value of DB::into
     * @return Stmt&  *this
     */
    template <>
    inline Stmt& operator,(IntoType<Row>& i)
    {
        if (!done()) i.value = fetch();
        return *this;
    }
};

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