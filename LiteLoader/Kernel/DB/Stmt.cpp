#include <DB/Stmt.h>

namespace DB
{

Stmt::~Stmt()
{
}

ResultSet Stmt::getResults() 
{
    if (!results)
    {
        throw std::runtime_error("Stmt::getResults: No results available");
    }
    return *results;
}

} // namespace DB