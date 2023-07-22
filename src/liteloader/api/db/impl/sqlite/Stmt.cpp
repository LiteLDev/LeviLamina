#include "liteloader/api/db/impl/sqlite/Stmt.h"
#include "liteloader/api/db/impl/sqlite/Session.h"
#include "liteloader/api/LoggerAPI.h"
#include <sqlite3.h>

namespace DB {

SQLiteStmt::SQLiteStmt(sqlite3_stmt* stmt, const std::weak_ptr<Session> parent, bool autoExecute)
: Stmt(parent, autoExecute)
, stmt(stmt) {
    IF_ENDBG dbLogger.debug("SQLiteStmt::SQLiteStmt: Constructed! this: {}", (void*)this);
    totalParamsCount = sqlite3_bind_parameter_count(stmt);
    if (!totalParamsCount && autoExecute)
        execute(); // Execute without params
}

int SQLiteStmt::getNextParamIndex() {
    int result = -1;
    for (int i = 0; i < boundIndexes.size() && i < totalParamsCount; i++) {
        if (boundIndexes[i] == result + 1) {
            result++;
        }
    }
    IF_ENDBG dbLogger.debug("SQLiteStmt::getNextParamIndex: The next param index is {}", result + 1);
    return result + 1;
}

void SQLiteStmt::fetchResultHeader() {
    if (!resultHeader)
        resultHeader.reset(new RowHeader);
    int colCnt = sqlite3_column_count(stmt);
    for (int i = 0; i < colCnt; i++) {
        auto name = sqlite3_column_name(stmt, i);
        IF_ENDBG dbLogger.debug("SQLiteStmt::fetchResultHeader: Column Name[{}]: {}", i, name);
        resultHeader->add(name);
    }
}

SQLiteStmt::~SQLiteStmt() {
    IF_ENDBG dbLogger.debug("SQLiteStmt::~SQLiteStmt: Destructor: this: {}", (void*)this);
    close();
}

Stmt& SQLiteStmt::bind(const Any& value, int index) {
    ++index; // Index starts at 1, but we need to start at 0
    if (index <= 0 || index > totalParamsCount) {
        throw std::invalid_argument("SQLiteStmt::bind: Invalid argument `index`");
    }
    if (getUnboundParams() == 0) {
        throw std::runtime_error("SQLiteStmt::bind: All the parameters are already bound");
    }
    int res = SQLITE_OK;
    auto type = value.type;
    switch (type) {
        case Any::Type::Null:
            res = sqlite3_bind_null(stmt, index);
            break;
        case Any::Type::Integer:
            res = sqlite3_bind_int64(stmt, index, value.get<int64_t>());
            break;
        case Any::Type::UInteger: {
            uint64_t val = value.get<uint64_t>();
            if (val > LLONG_MAX) {
                // The conversion of uint64 to double may result in loss of precision,
                // so it is recommended to use string/blob for big numbers
                res = sqlite3_bind_double(stmt, index, (double)val);
            } else {
                res = sqlite3_bind_int64(stmt, index, (int64_t)val);
            }
            break;
        }
        case Any::Type::Floating:
            res = sqlite3_bind_double(stmt, index, value.get<double>());
            break;
        case Any::Type::String:
        case Any::Type::Date:
        case Any::Type::Time:
        case Any::Type::DateTime:
            res = sqlite3_bind_text(stmt, index, value.get<std::string>().c_str(), -1, SQLITE_TRANSIENT);
            break;
        case Any::Type::Blob:
            res = sqlite3_bind_blob(stmt, index, value.get<ByteArray>().data(), (int)value.get<ByteArray>().size(), SQLITE_TRANSIENT);
            break;
        default:
            throw std::runtime_error("SQLiteStmt::bind: Unsupported type");
    }
    if (res != SQLITE_OK) {
        std::string e = fmt::format("SQLiteStmt::bind: Failed to bind {} to parameter at index {}",
                                    Any::type2str(type), index);
        if (auto s = parent.lock()) {
            e += ": " + s->getLastError();
        }
        throw std::runtime_error(e);
    }
    boundParamsCount++;
    boundIndexes.push_back(index - 1);
    if (!getUnboundParams() && autoExecute)
        execute(); // Execute the statement if all the parameters are bound
    return *this;
}
Stmt& SQLiteStmt::bind(const Any& value, const std::string& name) {
    if (name.empty()) {
        throw std::runtime_error("SQLiteStmt::bind: The name is empty");
    }
    std::vector<char> start{'?', ':', '@', '$'};
    int index = 0;
    for (auto& s : start) {
        auto i = sqlite3_bind_parameter_index(stmt, (s + name).c_str());
        if (i != 0) {
            if (index != 0) {
                throw std::runtime_error("SQLiteStmt::bind: Multiple parameters match the name `" + name + "`");
            }
            index = i;
        }
    }
    if (index == 0) {
        // Tips: The first parameter of SQLiteStmt::bind is the value to bind, the second is the key!
        throw std::invalid_argument("SQLiteStmt::bind: There isn't any statement parameter named `" + name + "`!");
    }
    IF_ENDBG dbLogger.debug("SQLiteStmt::bind: Parameter `{}` is at index {}", name, index);
    return bind(value, index - 1);
}
Stmt& SQLiteStmt::bind(const Any& value) {
    return bind(value, getNextParamIndex());
}

Stmt& SQLiteStmt::execute() {
    step();
    return *this;
}

bool SQLiteStmt::step() {
    int res = sqlite3_step(stmt);
    if (res == SQLITE_ROW || res == SQLITE_DONE) {
        if (!parent.expired() && !executed) {
            auto s = parent.lock();
            affectedRowCount = s->getAffectedRows();
            insertRowId = s->getLastInsertId();
            executed = true;
        }
        ++steps;
    }
    if (res == SQLITE_ROW) {
        if (!resultHeader || resultHeader->empty()) {
            fetchResultHeader();
        }
        IF_ENDBG dbLogger.debug("SQLiteStmt::step: Successfully");
        stepped = true;
        return true;
    } else if (res == SQLITE_DONE) {
        IF_ENDBG dbLogger.debug("SQLiteStmt::step: The statment is done");
        stepped = false;
        return false;
    } else {
        throw std::runtime_error("SQLiteStmt::step: Failed to step");
    }
}

bool SQLiteStmt::next() {
    return step();
}

bool SQLiteStmt::done() {
    if (stepped)
        return false;
    return !step();
}

Row SQLiteStmt::_Fetch() {
    if (done())
        return Row();
    if (!resultHeader || resultHeader->empty()) {
        fetchResultHeader();
    }
    Row row(resultHeader);
    for (int i = 0; i < resultHeader->size(); i++) {
        switch (sqlite3_column_type(stmt, i)) {
            case SQLITE_INTEGER:
                row.push_back(sqlite3_column_int64(stmt, i));
                break;
            case SQLITE_FLOAT:
                row.push_back(sqlite3_column_double(stmt, i));
                break;
            case SQLITE_TEXT: {
                std::string text(reinterpret_cast<const char*>(sqlite3_column_text(stmt, i)));
                IF_ENDBG dbLogger.debug("SQLiteStmt::_Fetch: Fetched TEXT type column: {} {}", i, text);
                row.push_back(text);
                break;
            }
            case SQLITE_BLOB: {
                ByteArray arr(
                    reinterpret_cast<const uint8_t*>(sqlite3_column_blob(stmt, i)),
                    reinterpret_cast<const uint8_t*>(sqlite3_column_blob(stmt, i)) +
                        sqlite3_column_bytes(stmt, i));
                IF_ENDBG {
                    std::string out = "SQLiteStmt::_Fetch: Fetched BLOB type column: " + std::to_string(i) + " ";
                    for (auto& byte : arr) {
                        out += IntToHexStr(byte, true, true, false) + ' ';
                    }
                    dbLogger.debug(out);
                }
                row.push_back(arr);
                break;
            }
            case SQLITE_NULL:
                row.push_back(Any());
                break;
            default:
                throw std::runtime_error("SQLiteSession::query: Unknown column type!");
        }
    }
    return row;
}

Stmt& SQLiteStmt::reset() {
    auto res = sqlite3_reset(stmt);
    if (res != SQLITE_OK) {
        throw std::runtime_error("SQLiteStmt::reexec: Failed to reset");
    }
    IF_ENDBG dbLogger.debug("SQLiteStmt::reexec: Reset successfully");
    resultHeader.reset();
    steps = 0;
    stepped = false;
    executed = false;
    affectedRowCount = -1;
    insertRowId = -1;
    return *this;
}

Stmt& SQLiteStmt::reexec() {
    reset();
    step(); // Execute
    return *this;
}

Stmt& SQLiteStmt::clear() {
    auto res = sqlite3_reset(stmt);
    if (res != SQLITE_OK) {
        throw std::runtime_error("SQLiteStmt::clear: Failed to reset");
    }
    IF_ENDBG dbLogger.debug("SQLiteStmt::clear: Reset successfully");
    res = sqlite3_clear_bindings(stmt);
    if (res != SQLITE_OK) {
        throw std::runtime_error("SQLiteStmt::clear: Failed to clear bindings");
    }
    IF_ENDBG dbLogger.debug("SQLiteStmt::clear: Cleared bindings successfully");
    boundParamsCount = 0;
    boundIndexes = {};
    resultHeader.reset();
    steps = 0;
    stepped = false;
    executed = false;
    affectedRowCount = -1;
    insertRowId = -1;
    // close();
    //*this = *(SQLiteStmt*)create(session, query).get();
    return *this;
}

void SQLiteStmt::close() {
    if (stmt) {
        sqlite3_finalize(stmt);
        stmt = nullptr;
    }
    totalParamsCount = 0;
    boundParamsCount = 0;
    boundIndexes = {};
    resultHeader.reset();
    steps = 0;
    stepped = false;
    executed = false;
    affectedRowCount = -1;
    insertRowId = -1;
}

uint64_t SQLiteStmt::getAffectedRows() const {
    return affectedRowCount;
}

uint64_t SQLiteStmt::getInsertId() const {
    return insertRowId;
}

int SQLiteStmt::getUnboundParams() const {
    return totalParamsCount - boundParamsCount;
}

int SQLiteStmt::getBoundParams() const {
    return boundParamsCount;
}

int SQLiteStmt::getParamsCount() const {
    return totalParamsCount;
}

DBType SQLiteStmt::getType() const {
    return DBType::SQLite;
}

SharedPointer<Stmt> SQLiteStmt::create(const std::weak_ptr<Session>& session, const std::string& sql, bool autoExecute) {
    auto s = session.lock();
    if (!s || s->getType() != DBType::SQLite) {
        throw std::invalid_argument("SQLiteStmt::create: Session is invalid");
    }
    sqlite3_stmt* stmt = nullptr;
    auto raw = (SQLiteSession*)s.get();
    int res = sqlite3_prepare_v2(raw->conn, sql.c_str(), -1, &stmt, nullptr);
    if (res != SQLITE_OK) {
        throw std::runtime_error("SQLiteStmt::create: " + s->getLastError());
    }
    auto result = new SQLiteStmt(stmt, session, autoExecute);
    result->parent = session;
    result->setDebugOutput(raw->debugOutput);
    if (raw->debugOutput)
        dbLogger.debug("SQLiteStmt::create: Prepared > " + sql);
    auto shared = SharedPointer<Stmt>(result);
    result->self = shared;
    return shared;
}

} // namespace DB