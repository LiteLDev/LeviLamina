#pragma once
#include "liteloader/api/db/RowSet.h"
#include "liteloader/api/db/Stmt.h"
#include "liteloader/api/db/ConnParams.h"
#include "liteloader/api/db/Pointer.h"

class Logger;

namespace DB
{

extern Logger dbLogger;

class Session
{

protected:
#if defined(LLDB_DEBUG_MODE)
    bool debugOutput = true;
#else
    bool debugOutput = false;
#endif
    std::weak_ptr<Session> self;
    std::vector<std::weak_ptr<Stmt>> stmtPool; ///< List of statements opened by prepare method.

public:

    /// Destructor
    virtual ~Session() = default;
    /**
     * @brief Open the database connection.
     *
     * @par Implementation
     * @see SQLiteSession::open
     */
    virtual void open(const ConnParams& params) = 0;
    /**
     * @brief Turn on/off debug output.
     *
     * @param enable  Enable or not
     */
    LLAPI void setDebugOutput(bool enable);
    /**
     * @brief Change current user and database.
     *
     * @param  user  Username
     * @param  password  Password
     * @param  db    Database name
     * @return bool  Success or not
     * @throws std::runtime_error  If not implemented
     * @par Implementation
     *  None
     */
    virtual bool relogin(const std::string& user, const std::string& password, const std::string& db = "");
    /**
     * @brief Execute a query.
     *
     * @param  query     Query to execute
     * @param  callback  Callback to process results
     * @return *this
     * 
     * @par Implementation
     * @see SQLiteSession::query
     */
    virtual Session& query(const std::string& query, std::function<bool(const Row&)> callback) = 0;
    /**
     * @brief Execute a query.
     *
     * @param  query     The query to execute
     * @return ResultSet Result set
     */
    virtual ResultSet query(const std::string& query);
    /**
     * @brief Execute a query without results.
     *
     * @param  query  The query to execute
     * @return bool   Success or not
     */
    virtual bool execute(const std::string& query) = 0;
    /**
     * @brief Prepare a query.
     *
     * @param  query                The query to execute
     * @param  autoExecute          Whether to execute the statement automatically after binding all parameters
     * @return SharedPointer<Stmt>  The statement
     * @par Example
     * @code
     * auto& stmt = session.prepare("SELECT * FROM table WHERE id = ?");
     * stmt.bind(1);
     * auto res = stmt.getResults();
     * stmt.close();
     * @endcode
     */
    virtual SharedPointer<Stmt> prepare(const std::string& query, bool autoExecute = false) = 0;
    /**
     * @brief Get the last error message
     *
     * @return std::string  Error message
     */
    virtual std::string getLastError() const;
    /**
     * @brief Get the number of affected rows by the last query.
     *
     * @return uint64_t  The number of affected rows
     */
    virtual uint64_t getAffectedRows() const = 0;
    /**
     * @brief Get the last insert id
     *
     * @return uint64_t  The row id of the last inserted row
     */
    virtual uint64_t getLastInsertId() const = 0;
    /**
     * @brief Close the session.
     *
     */
    virtual void close() = 0;
    /**
     * @brief Get whether the session is open.
     *
     */
    virtual bool isOpen() = 0;
    /**
     * @brief Get the type of session
     *
     * @return DBType  The database type
     */
    virtual DBType getType() = 0;
    /**
     * @brief Get or set the self pointer
     * 
     * @return std::weak_ptr<Session>  self
     */
    virtual std::weak_ptr<Session> getOrSetSelf();

    /**
     * @brief Operator<< to execute a query.
     *
     * @param  query  The query to execute
     * @return SharedPointer<Stmt>  The prepared statement
     * @par Example
     * @code
     * ResultSet res;
     * session << "SELECT * FROM table WHERE id = ?", bind(114514), into(res);
     * @endcode
     * @note It is not recommended to store the DB::Stmt reference returned by this method,
     *       it will be closed on the next execution.
     */
    virtual SharedPointer<Stmt> operator<<(const std::string& query);

    /**
     * @brief Create a new session.
     *
     * @param  type  Database type
     * @return SharedPointer<Session>  The session
     */
    LLAPI static SharedPointer<Session> create(DBType type);
    /**
     * @brief Create and open a new session.
     *
     * @param  params  Connection parameters
     * @return SharedPointer<Session>  The session
     */
    LLAPI static SharedPointer<Session> create(const ConnParams& params);
    /**
     * @brief Create and open a new session.
     *
     * @param  type    Database type
     * @param  params  Connection parameters
     * @return SharedPointer<Session>  The session
     */
    LLAPI static SharedPointer<Session> create(DBType type, const ConnParams& params);
    /**
     * @brief Create and open a new session.
     *
     * @param  type      Database type
     * @param  host      Hostname
     * @param  port      Port
     * @param  user      Username
     * @param  password  Password
     * @param  database  Database name
     * @return SharedPointer<Session>  The session
     */
    LLAPI static SharedPointer<Session> create(DBType type, const std::string& host, uint16_t port, const std::string& user, const std::string& password, const std::string& database);
    /**
     * @brief Create and open a new session.
     *
     * @param  type  Database type
     * @param  path  Path to the database file
     * @return SharedPointer<Session>  The session
     */
    LLAPI static SharedPointer<Session> create(DBType type, const std::string& path);

private:

    /**
     * @brief Create a new session(internal).
     * 
     * @param  type    Database type
     * @param  params  Connection parameters
     * @return SharedPointer<Session>  The session
     */
    static SharedPointer<Session> _Create(DBType type, const ConnParams& params = {});

private:

    static std::vector<std::weak_ptr<Session>> sessionPool; ///< List of sessions(weak pointers)

public:

    /**
     * @brief Get the Session ptr by the (this) pointer.
     * 
     * @param  session  The (this) pointer
     * @return std::shared_ptr<Session>  The Session ptr
     */
    static std::shared_ptr<Session> getSession(Session* session)
    {
        for (auto& s : sessionPool)
        {
            if (s.expired()) continue;
            auto ptr = s.lock();
            if (ptr.get() == session)
                return ptr;
        }
        throw std::runtime_error("Session::getSession: Session is not found or expired");
    }

};

} // namespace DB