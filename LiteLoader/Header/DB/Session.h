#pragma once
#include "RowSet.h"
#include "Stmt.h"
#include "ConnParams.h"

class Logger;

namespace DB
{

extern Logger logger;

class Session
{
protected:
    bool debugOutput = false;

public:
    /**
     * @brief Turn on/off debug output.
     * 
     * @param enable Enable or not
     */
    void setDebugOutput(bool enable);
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
     */
    virtual Stmt& prepare(const std::string& query) = 0;
    /**
     * @brief Close the session.
     * 
     */
    virtual void close() = 0;
    /**
     * @brief Get if the session is open.
     * 
     */
    virtual bool isOpen() = 0;
};

} // namespace DB