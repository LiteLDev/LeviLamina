#include <DB/Any.h>

namespace DB
{

Any::Any()
{
    type = Type::Null;
    value.boolean = false;
}
Any::Any(bool v)
{
    type = Type::Boolean;
    value.boolean = v;
}
Any::Any(int64_t v)
{
    type = Type::Integer;
    value.integer = v;
}
Any::Any(uint64_t v)
{
    type = Type::UInteger;
    value.uinteger = v;
}
Any::Any(double v)
{
    type = Type::Floating;
    value.floating = v;
}
Any::Any(const std::string& v)
{
    type = Type::String;
    value.string = new std::string(v);
}
Any::Any(const char* v)
{
    type = Type::String;
    value.string = new std::string(v);
}
Any::Any(char* v, size_t len)
{
    type = Type::String;
    value.string = new std::string(v, len);
}
Any::Any(const Date& v)
{
    type = Type::Date;
    value.date = new Date(v);
}
Any::Any(const Time& v)
{
    type = Type::Time;
    value.time = new Time(v);
}
Any::Any(const DateTime& v)
{
    type = Type::DateTime;
    value.datetime = new DateTime(v);
}
Any::Any(char v)
{
    type = Type::Integer;
    value.integer = v;
}
Any::Any(unsigned char v)
{
    type = Type::UInteger;
    value.uinteger = v;
}
Any::Any(short v)
{
    type = Type::Integer;
    value.integer = v;
}
Any::Any(unsigned short v)
{
    type = Type::UInteger;
    value.uinteger = v;
}
Any::Any(int v)
{
    type = Type::Integer;
    value.integer = v;
}
Any::Any(unsigned int v)
{
    type = Type::UInteger;
    value.uinteger = v;
}
Any::Any(long v)
{
    type = Type::Integer;
    value.integer = v;
}
Any::Any(unsigned long v)
{
    type = Type::UInteger;
    value.uinteger = v;
}
Any::Any(float v)
{
    type = Type::Floating;
    value.floating = v;
}
Any::Any(const ByteArray& v)
{
    type = Type::Blob;
    value.blob = new ByteArray(v);
}

Any::~Any()
{
    if (type == Type::String)
    {
        delete value.string;
    }
    else if (type == Type::Date)
    {
        delete value.date;
    }
    else if (type == Type::Time)
    {
        delete value.time;
    }
    else if (type == Type::DateTime)
    {
        delete value.datetime;
    }
    else if (type == Type::Blob)
    {
        delete value.blob;
    }
}

bool Any::is_null() const
{
    return type == Type::Null;
}
bool Any::is_boolean() const
{
    return type == Type::Boolean;
}
bool Any::is_integer() const
{
    return type == Type::Integer || type == Type::UInteger;
}
bool Any::is_uinteger() const
{
    return type == Type::UInteger;
}
bool Any::is_floating() const
{
    return type == Type::Floating;
}
bool Any::is_string() const
{
    return type == Type::String;
}
bool Any::is_date() const
{
    return type == Type::Date;
}
bool Any::is_time() const
{
    return type == Type::Time;
}
bool Any::is_datetime() const
{
    return type == Type::DateTime;
}
bool Any::is_number() const
{
    return type == Type::Integer || type == Type::UInteger || type == Type::Floating;
}
bool Any::is_blob() const
{
    return type == Type::Blob;
}

std::string Any::type2str(Any::Type type)
{
    switch (type)
    {
        case Type::Null:
            return "null";
        case Type::Boolean:
            return "boolean";
        case Type::Integer:
            return "integer";
        case Type::UInteger:
            return "uinteger";
        case Type::Floating:
            return "floating";
        case Type::String:
            return "string";
        case Type::Date:
            return "date";
        case Type::Time:
            return "time";
        case Type::DateTime:
            return "datetime";
        case Type::Blob:
            return "blob";
        default:
            return "unknown";
    }
}

} // namespace DB