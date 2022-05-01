#include <DB/Session.h>

namespace DB
{

Stmt::~Stmt()
{
}

void Stmt::setDebugOutput(bool enable)
{
    debugOutput = enable;
}

std::weak_ptr<Session> Stmt::getSession() const
{
    return session;
}

SharedPointer<Stmt> Stmt::getSharedPointer()
{
    if (!self.expired())
    {
        return self.lock();
    }
    if (!session.expired())
    {
        auto ptr = session.lock();
        if (ptr)
        {
            for (auto& wptr : ptr->stmtPool)
            {
                if (!wptr.expired())
                {
                    auto stmt = wptr.lock();
                    if (stmt.get() == this)
                    {
                        self = wptr;
                        return stmt;
                    }
                }
            }
        }
    }
    throw std::runtime_error("Stmt::getSharedPointer: The pointer is not found or expired");
}

SharedPointer<Stmt> Stmt::operator,(const BindType& b)
{
    if (b.name.empty() && b.idx == -1)
    {
        bind(b.value);
    }
    else if (!b.name.empty())
    {
        bind(b.value, b.name);
    }
    else if (b.idx != -1)
    {
        bind(b.value, b.idx);
    }
    else
    {
        throw std::invalid_argument("Stmt::operator,: Parameter `b`(const BindType&) is invalid");
    }
    return getSharedPointer();
}

} // namespace DB