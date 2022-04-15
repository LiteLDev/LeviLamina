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

} // namespace DB