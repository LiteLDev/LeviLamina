#include "llapi/db/Session.h"
#include "llapi/LoggerAPI.h"

namespace DB {

Stmt::Stmt(const std::weak_ptr<Session>& parent, bool autoExecute)
: parent(parent)
, autoExecute(autoExecute) {
}


Stmt::~Stmt() {
}

void Stmt::setDebugOutput(bool enable) {
    debugOutput = enable;
}

std::weak_ptr<Session> Stmt::getParent() const {
    return parent;
}

SharedPointer<Stmt> Stmt::getSharedPointer() const {
    if (!self.expired()) {
        return self.lock();
    }
    return nullptr;
    /* Get the stmt ptr
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
    */
}

SharedPointer<Stmt> Stmt::operator,(const BindType&b) {
    if (b.name.empty() && b.idx == -1) {
        bind(b.value);
    } else if (!b.name.empty()) {
        bind(b.value, b.name);
    } else if (b.idx != -1) {
        bind(b.value, b.idx);
    } else {
        throw std::invalid_argument("Stmt::operator,: Parameter `b`(const BindType&) is invalid");
    }
    return getSharedPointer();
}

} // namespace DB