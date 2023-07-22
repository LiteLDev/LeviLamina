#pragma once
#include "liteloader/api/db/RowSet.h"
#include "liteloader/api/db/Pointer.h"

#define IF_ENDBG if (debugOutput)

class Logger;

namespace DB
{

extern Logger dbLogger;

class Session;


struct BindType
{
    Any value;
    std::string name;
    int idx = -1;
};


template <typename T>
struct BindSequenceType
{
    T values;
    static_assert(std::is_same<typename T::value_type, Any>::value, "Container value type must be DB::Any");
};

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
    bool autoExecute = false;      ///< Whether to automatically execute the statement on bind
    std::weak_ptr<Session> parent; ///< Parent session
    std::weak_ptr<Stmt> self;

public:
    Stmt(const std::weak_ptr<Session>& parent, bool autoExecute = false);

    virtual ~Stmt();

    /**
     * @brief Turn on/off debug output.
     *
     * @param enable  Enable or not
     */
    LLAPI void setDebugOutput(bool enable);

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
     * @brief Execute the statement(after binding all the parameters)
     * 
     * @return Stmt&  *this
     * @note   If `this->autoExecute` is true, there is no need to call this method
     */
    virtual Stmt& execute() = 0;

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
     * @brief Fetch the current row.
     *
     * @tparam T  The type of the value to return
     * @return T  The current row(converted)
     * @throws std::runtime_error  If there is no row to fetch
     *
     * @par Example
     * @code
     * auto stmt = sess->prepare("SELECT * FROM table");
     * while (stmt->step()) {
     *     auto row = stmt->fetch();
     *     // Do something with the row
     * }
     * stmt->close();
     * @endcode
     */
    template <typename T = Row>
    inline T fetch()
    {
        return row_to<T>(_Fetch());
    }

    /**
     * @brief Fetch the current row.
     * 
     * @param[out] row    The current row
     * @return     Stmt&  *this
     */
    template <typename T = Row>
    inline Stmt& fetch(T& row)
    {
        row = row_to<T>(_Fetch());
        return *this;
    }

    /**
     * @brief Fetch each of the result rows.
     *
     * @param  cb     Callback function to handle the result rows
     * @return Stmt&  *this
     * @note   Return false in callback to stop fetching
     *
     * @par Example
     * @code
     * sess->prepare("SELECT * FROM table")
     *     ->fetchEach([](const Row& row) {
     *         // Do something with the row
     *         return true;
     *       })
     *     ->close();
     * @endcode
     */
    inline Stmt& fetchEach(std::function<bool(const Row&)> cb)
    {
        do {
            auto res = _Fetch();
            if (res.size() == 0) {
                continue;
            }
            if (!cb(res)) {
                break;
            }
        } while (step());
        return *this;
    }

    /**
     * @brief Fetch each of the result rows(For compatibility).
     * 
     * @param  cb     Callback function to handle the result rows
     * @return Stmt&  *this
     * @note   Return false in callback to stop fetching
     * @see Stmt::fetchEach
     */
    inline Stmt& fetchAll(std::function<bool(const Row&)> cb) 
    {
        return fetchEach(cb);
    }
    //virtual Stmt& fetchAll(std::function<bool(const Row&)> cb);

    /**
     * @brief Fetch all the result rows.
     *
     * @tparam T   The value type of vector
     * @param[out] rows   The result set
     * @return     Stmt&  *this
     */
    template <typename T>
    inline Stmt& fetchAll(std::vector<T>& rows) {
        return fetchEach([&](const Row& row) {
            rows.push_back(row_to<T>(row));
            return true;
        });
        return *this;
    }

    /**
     * @brief Fetch all the result rows.
     *
     * @tparam T  The value type of vector
     * @return std::vector<T>  The result rows
     */
    template <typename T>
    inline std::vector<T> fetchAll() {
        std::vector<T> result;
        fetchAll(result);
        return result;
    }
    //virtual ResultSet fetchAll() = 0;
    //virtual Stmt& fetchAll(ResultSet& rows);

    inline ResultSet fetchAll()
    {
        ResultSet set;
        fetchAll(set);
        return set;
    }

    inline Stmt& fetchAll(ResultSet& rows)
    {
        return fetchEach([&rows](const Row& row) {
            rows.push_back(row);
            return true;
        });
    }

    /**
     * @brief Reset the statement from executing state to perpared state
     * 
     * @return Stmt& *this
     * 
     * @par Note
     * Different between `reset()`, `reexec` and `clear()`:
     * - `reset()` : Reset the statement to the prepared state
     * - `reexec()`: Reset the statement to the prepared state and execute it
     * - `clear()` : Reset the statement to the prepared state and clear the parameters, but not execute it
     */
    virtual Stmt& reset() = 0;

    /**
     * @brief Re-execute the statement(keep the currently bound value to re-excute).
     *
     * @return Stmt&  *this
     * @note   If you want to clear the bound value, use clear() instead.
     * @see    Stmt::reset
     * 
     * @par Impletementation
     * @see SQLiteStmt::reexec
     */
    virtual Stmt& reexec() = 0;

    /**
     * @brief Clear all the bound values.
     *
     * @return Stmt&  *this
     * @see    Stmt::reset
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
    virtual std::weak_ptr<Session> getParent() const;

    /**
     * @brief Get the shared pointer point to this
     * 
     * @return SharedPointer<Stmt>  The ptr
     */
    virtual SharedPointer<Stmt> getSharedPointer() const;

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
     * @brief Fetch the current row(internal).
     * 
     * @return Row  The current row
     */
    virtual Row _Fetch() = 0;


    /**
     * @brief Operator<< to bind values.
     *
     * @param  v  The value
     * @return SharedPointer<Stmt>  this
     */
    inline SharedPointer<Stmt> operator<<(const Any& v)
    {
        bind(v);
        return getSharedPointer();
    }

    /**
     * @brief Operator>> to store the result.
     * 
     * @tparam T  The value type
     * @param  v  Where to store
     * @return SharedPointer<Stmt>  this
     */
    template <typename T>
    inline SharedPointer<Stmt> operator>>(T& v)
    {
        fetch(v);
        return getSharedPointer();
    }
    template <>
    inline SharedPointer<Stmt> operator>>(ResultSet& v)
    {
        fetchAll(v);
        return getSharedPointer();     
    }
    template <typename T>
    inline SharedPointer<Stmt> operator>>(std::vector<T>& v)
    {
        fetchAll(v);
        return getSharedPointer();
    }

    /**
     * @brief Operator, to bind single values.
     *
     * @param  b      The return value of DB::use
     * @return SharedPointer<Stmt>  this
     */
    virtual SharedPointer<Stmt> operator,(const BindType& b);
    /**
     * @brief Operator, to bind a sequence container.
     *
     * @param  b      The return value of DB::use
     * @return SharedPointer<Stmt>  this
     */
    template <typename T>
    inline SharedPointer<Stmt> operator,(const BindSequenceType<T>& b)
    {
        for (auto& v : b.values)
        {
            bind(v);
        }
        return getSharedPointer();
    }
    /**
     * @brief Operator, to bind a row.
     *
     * @param  b      The return value of DB::use
     * @return SharedPointer<Stmt>  this
     */
    template <>
    inline SharedPointer<Stmt> operator,(const BindSequenceType<Row>& b)
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
        return getSharedPointer();
    }
    /**
     * @brief Operator, to bind a map container.
     *
     * @param  b      The return value of DB::bind
     * @return SharedPointer<Stmt>  this
     */
    template <typename T>
    inline SharedPointer<Stmt> operator,(const BindMapType<T>& b)
    {
        for (auto& v : b.values)
        {
            bind(v.second, v.first);
        }
        return getSharedPointer();
    }
    /**
     * @brief Operator, to store a row of results.
     *
     * @param  i      The return value of DB::into
     * @return SharedPointer<Stmt>  this
     */
    template <typename T>
    inline SharedPointer<Stmt> operator,(IntoType<T>& i)
    {
        if (!done()) fetch<T>(i.value);
        return getSharedPointer();
    }
    /**
     * @brief Operator, to store a set of results.
     *
     * @param  i      The return value of DB::into
     * @return SharedPointer<Stmt>  this
     */
    template <typename T>
    inline SharedPointer<Stmt> operator,(IntoType<std::vector<T>>& i)
    {
        fetchAll<std::vector<T>>(i.value);
        return getSharedPointer();
    }
    /**
     * @brief Operator, to store a set of results.
     *
     * @param  i      The return value of DB::into
     * @return SharedPointer<Stmt>  this
     */
    template <>
    inline SharedPointer<Stmt> operator,(IntoType<ResultSet>& i)
    {
        fetchAll(i.value);
        return getSharedPointer();
    }
    /**
     * @brief Operator, to store a row of results.
     *
     * @param  i      The return value of DB::into
     * @return SharedPointer<Stmt>  this
     */
    template <>
    inline SharedPointer<Stmt> operator,(IntoType<Row>& i)
    {
        fetch(i.value);
        return getSharedPointer();
    }

    /**
     * @brief Operator-> to implement better API.
     * 
     * @return Stmt*  this
     */
    inline Stmt* operator->()
    {
        return this;
    }
};

inline BindType use(const Any& value, int idx = -1)
{
    return BindType{value, std::string(), idx};
}
inline BindType use(const Any& value, const std::string& name)
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
inline IntoType<T> into(T& out)
{
    return IntoType<T>{out};
}

} // namespace DB