#include "DatabaseAPI.h"
using namespace DB;

#define CATCH_AND_THROW(LOG) \
    catch(const Exception& e) \
    { \
        logger.error(LOG##"\n"); PrintException(e); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>(); \
    } \
    catch(const std::exception &e) \
    { \
        throw Exception(e.what()); \
    } \
    catch(const seh_exception &e) \
    { \
        logger.error("SEH Uncaught Exception Detected!"); \
        logger.error(TextEncoding::toUTF8(e.what())); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>(); \
    } \
    catch(...) \
    { \
        logger.error("Uncaught Exception Detected!"); \
        logger.error(std::string("In API: ") + __FUNCTION__); \
        logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName); \
        return Local<Value>(); \
    }

//////////////////// Class Definition ////////////////////

ClassDefine<KVDBClass> KVDBClassBuilder =
    defineClass<KVDBClass>("KVDatabase")
        .constructor(&KVDBClass::constructor)
        .instanceFunction("get", &KVDBClass::get)
        .instanceFunction("set", &KVDBClass::set)
        .instanceFunction("delete", &KVDBClass::del)
        .instanceFunction("close", &KVDBClass::close)
        .instanceFunction("listKey", &KVDBClass::listKey)
        .build();

ClassDefine<DBSessionClass> DBSessionClassBuilder =
    defineClass<DBSessionClass>("DBSession")
        .constructor(&DBSessionClass::constructor)
        .instanceFunction("query", &DBSessionClass::query)
        .instanceFunction("exec", &DBSessionClass::exec)
        .instanceFunction("execute", &DBSessionClass::exec)
        .instanceFunction("prepare", &DBSessionClass::prepare)
        .instanceFunction("close", &DBSessionClass::close)
        .instanceFunction("isOpen", &DBSessionClass::isOpen)
        .build();

ClassDefine<DBStmtClass> DBStmtClassBuilder =
    defineClass<DBStmtClass>("DBStmt")
        .constructor(nullptr)
        .instanceProperty("affectedRows", &DBStmtClass::getAffectedRows)
        .instanceProperty("insertId", &DBStmtClass::getInsertId)

        .instanceFunction("bind", &DBStmtClass::bind)
        .instanceFunction("execute", &DBStmtClass::execute)
        .instanceFunction("step", &DBStmtClass::step)
        .instanceFunction("fetch", &DBStmtClass::fetch)
        .instanceFunction("fetchAll", &DBStmtClass::fetchAll)
        .instanceFunction("reset", &DBStmtClass::reset)
        .instanceFunction("reexec", &DBStmtClass::reexec)
        .instanceFunction("clear", &DBStmtClass::clear)
        .build();


//////////////////// Functions ////////////////////

Any LocalValueToAny(const Local<Value>& val)
{
    switch (val.getKind())
    {
        case ValueKind::kObject:
        case ValueKind::kArray:
            throw std::exception("Cannot convert script object(array) to Any");
        case ValueKind::kNull:
        case ValueKind::kUnsupported:
            return Any();
        case ValueKind::kBoolean:
            return Any(val.asBoolean().value());
        case ValueKind::kNumber:
            if (CheckIsFloat(val.asNumber()))
                return Any(val.asNumber().toDouble());
            else
                return Any(val.asNumber().toInt64());
        case ValueKind::kString:
            return Any(val.asString().toString());
        case ValueKind::kByteBuffer:
            switch (val.asByteBuffer().getType())
            {
                case ByteBuffer::Type::kInt8:
                case ByteBuffer::Type::kUint8:
                {
                    auto buf = (uint8_t*)val.asByteBuffer().getRawBytes();
                    return Any(ByteArray(buf, buf + val.asByteBuffer().elementCount()));
                }
                default:
                    break;
            }
            break;
        default:
            break;
    }
    return Any();
}

template <>
Local<Value> any_to(const Any& val)
{
    switch (val.type)
    {
        case Any::Type::Null:
            return Local<Value>();
        case Any::Type::Boolean:
            return Boolean::newBoolean(val.value.boolean);
        case Any::Type::Integer:
            return Number::newNumber(val.value.integer);
        case Any::Type::UInteger:
            if (val.value.uinteger > LLONG_MAX)
                return Number::newNumber((double)val.value.uinteger);
            return Number::newNumber((int64_t)val.value.uinteger);
        case Any::Type::Floating:
            return Number::newNumber(val.value.floating);
        case Any::Type::String:
            return String::newString(*val.value.string);
        case Any::Type::Date:
        {
            auto obj = Object::newObject();
            obj.set("Y", val.value.date->year);
            obj.set("M", val.value.date->month);
            obj.set("D", val.value.date->day);
            return obj;
        }
        case Any::Type::Time:
        {
            auto obj = Object::newObject();
            obj.set("h", val.value.time->hour);
            obj.set("m", val.value.time->minute);
            obj.set("s", val.value.time->second);
            return obj;
        }
        case Any::Type::DateTime:
        {
            auto obj = Object::newObject();
            obj.set("Y", val.value.datetime->date.year);
            obj.set("M", val.value.datetime->date.month);
            obj.set("D", val.value.datetime->date.day);
            obj.set("h", val.value.datetime->time.hour);
            obj.set("m", val.value.datetime->time.minute);
            obj.set("s", val.value.datetime->time.second);
            return obj;
        }
        case Any::Type::Blob:
            return String::newString(val.get<std::string>());
        default:
            break;
    }
    return Local<Value>();
}

Local<Value> RowSetToLocalValue(const RowSet& rows)
{
    if (rows.empty() || !rows.header)
    {
        return Local<Value>();
    }
    Local<Array> arr = Array::newArray();
    Local<Array> header = Array::newArray();
    for (auto& col : *rows.header)
        header.add(String::newString(col));
    arr.add(header);
    for (auto& row : rows)
    {
        Local<Array> rowValues = Array::newArray();
        for (auto& col : row)
            rowValues.add(col.get<Local<Value>>());
        arr.add(rowValues);
    }
    return arr;
}

Local<Value> RowToLocalValue(const Row& row)
{
    auto result = Object::newObject();
    row.forEach([&](const std::string& key, const Any& value) {
        result.set(key, value.get<Local<Value>>());
        return true;
    });
    return result;
}

//////////////////// Classes KVDB ////////////////////

// 生成函数
KVDBClass::KVDBClass(const Local<Object>& scriptObj, const string& dir)
    : ScriptClass(scriptObj)
    , kvdb(KVDB::create(dir))
{
    unloadCallbackIndex = ENGINE_OWN_DATA()->addUnloadCallback([&](ScriptEngine* engine) {
        kvdb.reset();
    });
}

KVDBClass::KVDBClass(const string& dir)
    : ScriptClass(script::ScriptClass::ConstructFromCpp<KVDBClass>{})
    , kvdb(KVDB::create(dir))
{
    unloadCallbackIndex = ENGINE_OWN_DATA()->addUnloadCallback([&](ScriptEngine* engine) {
        kvdb.reset();
    });
}

KVDBClass::~KVDBClass()
{
}

KVDBClass* KVDBClass::constructor(const Arguments& args)
{
    CHECK_ARGS_COUNT_C(args, 1);
    CHECK_ARG_TYPE_C(args[0], ValueKind::kString);

    try
    {
        auto res = new KVDBClass(args.thiz(), args[0].toStr());
        if (res->isValid())
            return res;
        else
            return nullptr;
    }
    CATCH_C("Fail in Open Database!");
}

Local<Value> KVDBClass::get(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        if (!isValid())
            return Local<Value>();

        string res;
        if (!kvdb->get(args[0].asString().toString(), res))
            return Local<Value>();

        return JsonToValue(res);
    }
    CATCH_AND_THROW("Fail in DbGet!");
}

Local<Value> KVDBClass::set(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        if (!isValid())
            return Local<Value>();

        kvdb->put(args[0].asString().toString(), ValueToJson(args[1]));
        return Boolean::newBoolean(true);
    }
    CATCH_AND_THROW("Fail in DbSet!");
}

Local<Value> KVDBClass::del(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        if (!isValid())
            return Local<Value>();

        return Boolean::newBoolean(kvdb->del(args[0].asString().toString()));
    }
    CATCH_AND_THROW("Fail in DbDel!");
}

Local<Value> KVDBClass::close(const Arguments& args)
{
    ENGINE_OWN_DATA()->removeUnloadCallback(unloadCallbackIndex);
    unloadCallbackIndex = -1;
    try
    {
        kvdb.reset();
        return Boolean::newBoolean(true);
    }
    CATCH_AND_THROW("Fail in DbClose!");
}

Local<Value> KVDBClass::listKey(const Arguments& args)
{
    try
    {
        if (!isValid())
            return Local<Value>();

        auto list = kvdb->getAllKeys();
        Local<Array> arr = Array::newArray();
        for (auto& key : list)
        {
            arr.add(String::newString(key));
        }
        return arr;
    }
    CATCH_AND_THROW("Fail in DbListKey!");
}

//////////////////// Classes DBSession ////////////////////

// 生成函数
DBSessionClass::DBSessionClass(const Local<Object>& scriptObj, const ConnParams& params)
    : ScriptClass(scriptObj)
    , session(Session::create(params))
{
    session->setDebugOutput(true);
}
DBSessionClass::DBSessionClass(const ConnParams& params)
    : ScriptClass(script::ScriptClass::ConstructFromCpp<DBSessionClass>{})
    , session(Session::create(params))
{
    session->setDebugOutput(true);
}

DBSessionClass::~DBSessionClass()
{
}

DBSessionClass* DBSessionClass::constructor(const Arguments& args)
{
    try
    {
        DBSessionClass* result = nullptr;
        switch (args.size())
        {
            case 1:
            {
                // When the first argument is a string, it is a url or file path.
                if (args[0].isString())
                {
                    result = new DBSessionClass(args.thiz(), ConnParams(args[0].asString().toString()));
                }
                else if (args[0].isObject())
                {
                    auto obj = args[0].asObject();
                    ConnParams params;
                    for (auto& key : obj.getKeys())
                        params[key.toString()] = LocalValueToAny(obj.get(key));
                    result = new DBSessionClass(args.thiz(), params);
                }
                else
                {
                    LOG_WRONG_ARG_TYPE();
                }
                break;
            }
            case 2:
            {
                CHECK_ARG_TYPE_C(args[0], ValueKind::kString);
                CHECK_ARG_TYPE_C(args[1], ValueKind::kObject);
                auto obj = args[1].asObject();
                ConnParams params;
                params["type"] = args[0].asString().toString();
                for (auto& key : obj.getKeys())
                    params[key.toString()] = LocalValueToAny(obj.get(key));
                result = new DBSessionClass(args.thiz(), ConnParams(params));
                break;
            }
            default:
                LOG_WRONG_ARG_TYPE();
                break;
        }
        return result;
    }
    CATCH_C("Fail in Open Database!");
}

Local<Value> DBSessionClass::query(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        auto res = session->query(args[0].asString().toString());
        return RowSetToLocalValue(res);
    }
    CATCH_AND_THROW("Fail in query!");
}

Local<Value> DBSessionClass::exec(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        session->execute(args[0].asString().toString());
        return this->getScriptObject();
    }
    CATCH_AND_THROW("Fail in exec!");
}

Local<Value> DBSessionClass::prepare(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        auto stmt = new DBStmtClass(session->prepare(args[0].asString().toString()));
        return stmt->getScriptObject();
    }
    CATCH_AND_THROW("Fail in exec!");
}

Local<Value> DBSessionClass::close(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 0);

    try
    {
        session->close();
        return Boolean::newBoolean(true);
    }
    CATCH_WITHOUT_RETURN("Fail in close!");
    return Boolean::newBoolean(false);
}
Local<Value> DBSessionClass::isOpen(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 0);

    try
    {
        return Boolean::newBoolean(session->isOpen());
    }
    CATCH_AND_THROW("Fail in isOpen!");
}

//////////////////// Classes DBStmt ////////////////////

// 生成函数
DBStmtClass::DBStmtClass(const Local<Object>& scriptObj, const DB::SharedPointer<DB::Stmt>& stmt)
    : ScriptClass(scriptObj)
    , stmt(stmt)
{
}

DBStmtClass::DBStmtClass(const DB::SharedPointer<DB::Stmt>& stmt)
    : ScriptClass(script::ScriptClass::ConstructFromCpp<DBStmtClass>{})
    , stmt(stmt)
{
}

DBStmtClass::~DBStmtClass()
{
}

Local<Value> DBStmtClass::getAffectedRows()
{
    try
    {
        auto res = stmt->getAffectedRows();
        if (res == (uint64_t)-1)
            return Number::newNumber(-1);
        if (res > LLONG_MAX)
            return Number::newNumber((double)res);
        return Number::newNumber((int64_t)res);
    }
    CATCH_AND_THROW("Fail in getAffectedRows!");
}

Local<Value> DBStmtClass::getInsertId()
{
    try
    {
        auto res = stmt->getInsertId();
        if (res == (uint64_t)-1)
            return Number::newNumber(-1);
        if (res > LLONG_MAX)
            return Number::newNumber((double)res);
        return Number::newNumber((int64_t)res);
    }
    CATCH_AND_THROW("Fail in getInsertId!");
}

Local<Value> DBStmtClass::bind(const Arguments& args)
{
    try
    {
        switch (args.size())
        {
            case 1:
            {
                switch (args[0].getKind())
                {
                    case ValueKind::kArray:
                    {
                        auto arr = args[0].asArray();
                        for (size_t i = 0; i < arr.size(); ++i)
                            stmt->bind(LocalValueToAny(arr.get(i)));
                        break;
                    }
                    case ValueKind::kObject:
                    {
                        auto obj = args[0].asObject();
                        for (auto& key : obj.getKeys())
                            stmt->bind(LocalValueToAny(obj.get(key)), key.toString());
                        break;
                    }
                    default:
                        stmt->bind(LocalValueToAny(args[0]));
                }
                break;
            }
            case 2:
            {
                if (args[1].isNumber())
                {
                    stmt->bind(LocalValueToAny(args[0]), (int)args[1].asNumber().toInt64());
                }
                else if (args[1].isString())
                {
                    stmt->bind(LocalValueToAny(args[0]), args[1].asString().toString());
                }
                else
                {
                    LOG_WRONG_ARG_TYPE();
                }
            }
        }
        return this->getScriptObject();
    }
    CATCH_AND_THROW("Fail in bind!");
}

Local<Value> DBStmtClass::execute(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 0);

    try
    {
        stmt->execute();
        return this->getScriptObject();
    }
    CATCH_AND_THROW("Fail in reset!");
}

Local<Value> DBStmtClass::step(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 0);

    try
    {
        return Boolean::newBoolean(stmt->step());
    }
    CATCH_WITHOUT_RETURN("Fail in step!");
    return Boolean::newBoolean(false);
}

Local<Value> DBStmtClass::fetch(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 0);

    try
    {
        return RowToLocalValue(stmt->fetch());
    }
    CATCH_AND_THROW("Fail in fetch!");
}

Local<Value> DBStmtClass::fetchAll(const Arguments& args)
{
    try
    {
        switch (args.size())
        {
            case 0:
                return RowSetToLocalValue(stmt->fetchAll());
            case 1:
            {
                CHECK_ARG_TYPE(args[0], ValueKind::kFunction);
                auto func = args[0].asFunction();
                stmt->fetchAll([&](const Row& row) {
                    auto res = func.call({}, RowToLocalValue(row));
                    if (res.isBoolean())
                    {
                        return res.asBoolean().value();
                    }
                    return true;
                });
            }
        }
        return this->getScriptObject();
    }
    CATCH_AND_THROW("Fail in fetchAll!");
}

Local<Value> DBStmtClass::reset(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 0);

    try
    {
        stmt->reset();
        return this->getScriptObject();
    }
    CATCH_AND_THROW("Fail in reset!");
}

Local<Value> DBStmtClass::reexec(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 0);

    try
    {
        stmt->reexec();
        return this->getScriptObject();
    }
    CATCH_AND_THROW("Fail in reexec!");
}

Local<Value> DBStmtClass::clear(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 0);

    try
    {
        stmt->clear();
        return this->getScriptObject();
    }
    CATCH_AND_THROW("Fail in clear!");
}
