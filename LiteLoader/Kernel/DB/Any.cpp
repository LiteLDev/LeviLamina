#include <DB/Any.h>

namespace DB
{

Any::Any()
{
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
}

} // namespace DB