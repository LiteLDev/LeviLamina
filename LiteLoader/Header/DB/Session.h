#pragma once
#include "RowSet.h"
#include "Stmt.h"
#include "ConnParams.h"

class Logger;

namespace DB
{

extern Logger dbLogger;

class Session
{
protected:
    bool debugOutput = false;

public:
    /// Destructor
    virtual ~Session() = default;
    /**
     * @brief Open the database connection.
     *
     */
    virtual void open(const ConnParams& params) = 0;
    /**
     * @brief Turn on/off debug output.
     * 
     * @param enable Enable or not
     */
    LIAPI void setDebugOutput(bool enable);
    /**
     * @brief Change current user.
     * 
     * @param  user Username
     * @param  pass Password
     * @return bool Success or not
     * @throws std::runtime_error If not implemented
     */
    virtual bool changeUser(const std::string& user, const std::string& password);
    /**
     * @brief Change current database.
     * 
     * @param  database Database name
     * @return bool     Success or not
     * @throws std::runtime_error If not implemented
     */
    virtual bool changeDatabase(const std::string& database);
    /**
     * @brief Execute a query.
     * 
     * @param  query    Query to execute
     * @param  callback Callback to process results
     */
    virtual void query(const std::string& query, std::function<bool(const Row&)> callback) = 0;
    /**
     * @brief Execute a query.
     * 
     * @param  query Query to execute
     * @return ResultSet Result set
     */
    virtual ResultSet query(const std::string& query);
    /**
     * @brief Execute a query without results.
     * 
     * @param  query Query to execute
     * @return bool Success or not
     */
    virtual bool execute(const std::string& query) = 0;
    /**
     * @brief Prepare a query.
     * 
     * @param  query Query to execute
     * @return Stmt& Statement
     * @par Example
     * @code
     * auto& stmt = session.prepare("SELECT * FROM table WHERE id = ?");
     * stmt.bind(1);
     * auto res = stmt.getResults();
     * stmt.close();
     * @endcode
     */
    virtual Stmt& prepare(const std::string& query) = 0;
    /**
     * @brief Get the last error message
     * 
     * @return std::string Error message
     */
	virtual std::string getLastError() const;
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
     * @return DBType The database type
     */
    virtual DBType getType() = 0;
    /**
     * @brief Destroy the session.
     * 
     * @warning DO NOT ACCESS THIS OBJECT AFTER CALLING THIS METHOD!!!
     */
    virtual void destroy();

    /**
     * @brief Operator<< to execute a query.
     * 
     * @param query The query to execute
     * @return Stmt& The prepared statement
     * @par Example
     * @code
     * ResultSet res;
     * session << "SELECT * FROM table WHERE id = ?", bind(114514), into(res);
     * @endcode
     * @note It is not recommended to store the DB::Stmt reference returned by this method,
     *       it will be closed on the next execution.
     * @code
     * // Wrong code
     * auto& stmt1 = session << "INSERT INTO table VALUES(11, 45, 14)";
     * session << "SELECT * FROM table";  // stmt1 will be closed after this
     * stmt1.getResults();                // seh_exception: Access to illegal addresses 0x0
     */
    virtual Stmt& operator<<(const std::string& query);

    /**
     * @brief Create and open a new session.
     * 
     * @param params    Connection parameters
     * @return Session& The session
     */
    LIAPI static Session& create(const ConnParams& params);
    /**
     * @brief Create a new session.
     * 
     * @param type      Database type
     * @return Session& The session
     */
    LIAPI static Session& create(DBType type);
    /**
     * @brief Create and open a new session.
     * 
     * @param type      Database type
     * @param params    Connection parameters
     * @return Session& The session
     */
    LIAPI static Session& create(DBType type, const ConnParams& params);
    /**
     * @brief Create and open a new session.
     * 
     * @param type      Database type
     * @param host      Hostname
     * @param port      Port
     * @param user      Username
     * @param password  Password
     * @param database  Database name
     * @return Session& The session
     */
    LIAPI static Session& create(DBType type, const std::string& host, uint16_t port, const std::string& user, const std::string& password, const std::string& database);
    /**
     * @brief Create and open a new session.
     * 
     * @param type      Database type
     * @param path      Path to the database file
     * @return Session& The session
     */
    LIAPI static Session& create(DBType type, const std::string& path);
};

} // namespace DB