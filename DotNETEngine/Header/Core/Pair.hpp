#pragma once
namespace LLNET::Core
{
generic<typename TKey, typename TValue> 
public value class Pair
{
public:
    property TKey Key;
    property TValue Value;

public:
    Pair(TKey key, TValue value)
    {
        Key = key;
        Value = value;
    }

private:
};

} // namespace LLNET::Core
