#pragma once
#include "../../Session.h"

struct sqlite3;
namespace DB
{

class SQLiteSession : public Session
{
    
    sqlite3* conn = nullptr;

public:

    SQLiteSession(const ConnParams& params);
    ~SQLiteSession();
    bool execute(const std::string& query);
    void close();

};

} // namespace DB