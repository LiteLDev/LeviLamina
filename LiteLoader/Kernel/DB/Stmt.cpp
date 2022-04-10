#include <DB/Stmt.h>

namespace DB
{

Stmt::~Stmt()
{
}

void Stmt::setDebugOutput(bool enable)
{
    debugOutput = enable;
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