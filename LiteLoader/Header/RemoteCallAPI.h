#pragma once
#include "Global.h"
#include "Utils/WinHelper.h"
#include "third-party/Nlohmann/json.hpp"
#include "MC/CompoundTag.hpp"
#include "MC/Container.hpp"
#include "MC/ItemStack.hpp"
#include "MC/BlockInstance.hpp"
#define TEST_NEW_VALUE_TYPE

///////////////////////////////////////////////////////
// Remote Call API
// Mainly designed for scripting engines
// Please call it in MC_SERVER thread or in ScheduleAPI
// make sure the callback parameter type can be converted to json
//
// [Usage]
// RemoteCall::exportAs("TestNameSpace", "strSize", [](std::string const& arg) -> int { return arg.size(); });
//
// // in other plugin
// auto strSize = RemoteCall::importAs<int(std::string const& arg)>("TestNameSpace", "strSize");
// logger.info("Size of str: {}", strSize("12345678"));
//
/////////////////////////////////////////////////////
namespace RemoteCall
{
#ifdef TEST_NEW_VALUE_TYPE
// .....
struct NbtType
{
    CompoundTag const* ptr = nullptr;
    bool own = false;
    NbtType(std::unique_ptr<CompoundTag> tag)
        : ptr(tag.release())
        , own(true){};
    NbtType(CompoundTag const* ptr)
        : ptr(ptr)
        , own(false){};
    inline std::unique_ptr<CompoundTag> tryGetUniquePtr()
    {
        if (!own)
            return {};
        own = false;
        auto uptr = std::unique_ptr<CompoundTag>(const_cast<CompoundTag*>(ptr));
        ptr = nullptr;
        return std::move(uptr);
    }
    template <typename RTN>
    inline RTN get() = delete;
    template <>
    inline CompoundTag const* get()
    {
        return ptr;
    };
    template <>
    inline CompoundTag* get()
    {
        return const_cast<CompoundTag*>(ptr);
    };
    template <>
    inline std::unique_ptr<CompoundTag> get()
    {
        return tryGetUniquePtr();
    };
};

struct ItemType
{
    ItemStack const* ptr = nullptr;
    bool own = false;
    ItemType(std::unique_ptr<ItemStack> tag)
        : ptr(tag.release())
        , own(true){};
    ItemType(ItemStack const* ptr)
        : ptr(ptr)
        , own(false){};
    inline std::unique_ptr<ItemStack> tryGetUniquePtr()
    {
        if (!own)
            return {};
        own = false;
        auto uptr = std::unique_ptr<ItemStack>(const_cast<ItemStack*>(ptr));
        ptr = nullptr;
        return std::move(uptr);
    }
    template <typename RTN>
    inline RTN get() = delete;
    template <>
    inline ItemStack const* get()
    {
        return ptr;
    };
    template <>
    inline ItemStack* get()
    {
        return const_cast<ItemStack*>(ptr);
    };
    template <>
    inline std::unique_ptr<ItemStack> get()
    {
        return tryGetUniquePtr();
    };
};

struct BlockType
{
    BlockInstance instance;
    BlockType(BlockInstance instance)
        : instance(instance){};
    BlockType(Block const* ptr)
        : instance(BlockInstance::createBlockInstance(const_cast<Block*>(ptr), BlockPos::ZERO, -1)){};
    template <typename RTN>
    inline RTN get() = delete;
    template <>
    inline Block const* get()
    {
        return instance.getBlock();
    };
    template <>
    inline BlockInstance get()
    {
        return instance;
    };
};
struct NumberType
{
    __int64 i = 0;
    double f = 0;
    NumberType(__int64 i, double f)
        : i(i)
        , f(f){};
    template <typename T>
    std::enable_if_t<std::is_integral_v<T> || std::is_floating_point_v<T>, NumberType&> operator=(T v)
    {
        i = static_cast<__int64>(v);
        f = static_cast<double>(v);
    }
    NumberType(double v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    NumberType(float v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    NumberType(__int64 v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    NumberType(int v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    NumberType(short v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    NumberType(char v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    NumberType(unsigned __int64 v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    NumberType(unsigned int v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    NumberType(unsigned short v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    NumberType(unsigned char v)
        : i(static_cast<__int64>(v))
        , f(static_cast<double>(v)){};
    template <typename RTN>
    inline std::enable_if_t<std::is_integral_v<RTN>, RTN> get()
    {
        return static_cast<RTN>(i);
    };
    template <typename RTN>
    inline std::enable_if_t<std::is_floating_point_v<RTN>, RTN> get()
    {
        return static_cast<RTN>(f);
    };
};


// std::string  -> json
// std::string* -> bytes
#define ExtraType std::nullptr_t, NumberType, Player*, Actor*, BlockActor*, Container*, Vec3, BlockPos, ItemType, BlockType, NbtType
#define ElementType bool, std::string, ExtraType
template <typename _Ty, class... _Types>
static constexpr bool is_one_of_v = std::_Meta_find_unique_index<std::variant<_Types...>, _Ty>::value < sizeof...(_Types);
template <typename _Ty>
static constexpr bool is_extra_type_v = std::_Is_any_of_v<_Ty, ExtraType>;

static_assert(sizeof(std::variant<ElementType>) == sizeof(std::string) + 8);

template <typename>
constexpr bool is_vector_v = false;
template <class _Ty, class _Alloc>
constexpr bool is_vector_v<std::vector<_Ty, _Alloc>> = true;
template <typename>
constexpr bool is_map_v = false;
template <class _Kty, class _Ty, class _Pr, class _Alloc>
constexpr bool is_map_v<std::map<_Kty, _Ty, _Pr, _Alloc>> = true;
template <class _Kty, class _Ty, class _Hasher, class _Keyeq, class _Alloc>
constexpr bool is_map_v<std::unordered_map<_Kty, _Ty, _Hasher, _Keyeq, _Alloc>> = true;
using Value = std::variant<ElementType>;
// struct Value
//{
//     std::variant<ElementType> value;
//     Value(bool v)
//         : value(v){};
//     Value(__int64 v)
//         : value(v){};
//     Value(double v)
//         : value(v){};
//     Value(std::string const& v)
//         : value(v){};
//     Value(std::string* v)
//         : value(v){};
//     Value(Player* v)
//         : value(v){};
//     Value(Actor* v)
//         : value(v){};
//     Value(ItemStack* v)
//         : value(v){};
//     Value(Block* v)
//         : value(v){};
//     Value(BlockActor* v)
//         : value(v){};
//     Value(Container* v)
//         : value(v){};
//     Value(Vec3* v)
//         : value(v){};
//     Value(BlockPos* v)
//         : value(v){};
//     Value(CompoundTag* v)
//         : value(v){};
//     operator std::variant<ElementType>()
//     {
//         return value;
//     }
// };
struct ValueType
{
    using ArrayType = std::vector<ValueType>;
    using ObjectType = std::unordered_map<std::string, ValueType>;
    using Type = std::variant<Value, ArrayType, ObjectType>;
    Type value;
    ValueType()
        : value({}){};
    // ValueType(ValueType const& v) = delete;
    // ValueType(Value const& v) = delete;
    ValueType(Value&& v)
        : value(std::move(v)){};
    ValueType(Value v)
        : value(std::move(v)){};
    // ValueType(ValueType&& v) noexcept
    //     : value(std::move(v.value)){};
    ValueType(std::vector<ValueType>&& v)
        : value(std::move(v)){};
    ValueType(std::unordered_map<std::string, ValueType>&& v)
        : value(std::move(v)){};
    template <typename T>
    ValueType(T const& v)
        : value(Value(v)){};
};

template <typename RTN>
RTN extract(ValueType&& val);
template <typename T>
ValueType pack(T val);

template <typename RTN>
RTN extractValue(Value&& value)
{
    using Type = std::remove_const_t<std::remove_reference_t<RTN>>;
    static_assert(is_one_of_v<Type, ElementType> || std::is_assignable_v<NumberType, RTN> || std::is_assignable_v<NbtType, RTN> || std::is_assignable_v<BlockType, RTN> || std::is_assignable_v<ItemType, RTN> || std::is_base_of_v<Player, std::remove_pointer_t<RTN>> || std::is_base_of_v<Actor, std::remove_pointer_t<RTN>>);
    if constexpr (is_one_of_v<Type, ElementType>)
        return std::get<Type>(value);
    else if constexpr (std::is_assignable_v<NumberType, RTN>)
        return std::get<NumberType>(value).get<Type>();
    else if constexpr (std::is_assignable_v<NbtType, RTN>)
        return std::get<NbtType>(value).get<Type>();
    else if constexpr (std::is_assignable_v<ItemType, RTN>)
        return std::get<ItemType>(value).get<Type>();
    else if constexpr (std::is_assignable_v<BlockType, RTN>)
        return std::get<BlockType>(value).get<Type>();
    else if constexpr (std::is_base_of_v<Player, std::remove_pointer_t<RTN>>)
        return static_cast<RTN>(std::get<Player*>(value));
    else if constexpr (std::is_base_of_v<Actor, std::remove_pointer_t<RTN>>)
        return static_cast<RTN>(std::get<Actor*>(value));
    else
        throw std::exception(fmt::format(__FUNCTION__ " - Unsupported Type: {}", typeid(RTN).name()).c_str());
}

template <typename RTN>
bool extractValue(std::vector<ValueType>& value, std::vector<RTN>& rtn)
{
    for (ValueType& val : value)
    {
        rtn.emplace_back(std::move(extract<RTN>(std::move(val))));
    }
    return true;
}

template <typename RTN>
bool extractValue(std::unordered_map<std::string, ValueType>& value, std::unordered_map<std::string, RTN>& rtn)
{
    for (auto& [key, val] : value)
    {
        rtn.emplace(key, std::move(extract<RTN>(std::move(val))));
    }
    return true;
}


template <typename RTN>
RTN extract(ValueType&& val)
{
    if constexpr (is_vector_v<RTN>)
    {
        RTN rtn{};
        extractValue(std::get<std::vector<ValueType>>(val.value), rtn);
        return std::move(rtn);
    }
    else if constexpr (is_map_v<RTN>)
    {
        RTN rtn{};
        extractValue(std::get<std::unordered_map<std::string, ValueType>>(val.value), rtn);
        return std::move(rtn);
    }
    else
        return extractValue<RTN>(std::move(std::get<Value>(val.value)));
}


template <typename T>
ValueType packValue(T val)
{
    using RawType = std::remove_reference_t<std::remove_const_t<T>>;
    static_assert(is_one_of_v<RawType, ElementType> || std::is_assignable_v<NumberType, T> || std::is_assignable_v<NbtType, T> || std::is_assignable_v<BlockType, T> || std::is_assignable_v<ItemType, T> || std::is_base_of_v<Player, std::remove_pointer_t<T>> || std::is_base_of_v<Actor, std::remove_pointer_t<T>>);
    if constexpr (is_one_of_v<RawType, ElementType>)
        return ValueType(std::forward<T>(val));
    else if constexpr (std::is_assignable_v<NumberType, T>)
        return ValueType(NumberType{std::forward<T>(val)});
    else if constexpr (std::is_assignable_v<NbtType, T>)
        return ValueType(NbtType(std::forward<T>(val)));
    else if constexpr (std::is_assignable_v<ItemType, T>)
        return ValueType(ItemType(std::forward<T>(val)));
    else if constexpr (std::is_assignable_v<BlockType, T>)
        return ValueType(BlockType(std::forward<T>(val)));
    else if constexpr (std::is_base_of_v<Player, std::remove_pointer_t<T>>)
        return ValueType(static_cast<Player*>(std::forward<T>(val)));
    else if constexpr (std::is_base_of_v<Actor, std::remove_pointer_t<T>>)
        return ValueType(static_cast<Actor*>(std::forward<T>(val)));
    throw std::exception(fmt::format(__FUNCTION__ " - Unsupported Type: {}", typeid(T).name()).c_str());
    return ValueType();
}
template <typename T>
std::vector<ValueType> packArray(std::vector<T> const& val)
{
    std::vector<ValueType> result;
    for (auto& v : val)
    {
        result.emplace_back(pack(v));
    }
    return result;
}
template <typename T>
std::unordered_map<std::string, ValueType> packObject(std::unordered_map<std::string, T> const& val)
{
    std::unordered_map<std::string, ValueType> result;
    for (auto& [k, v] : val)
    {
        result.emplace(k, pack(v));
    }
    return result;
}

template <typename T>
ValueType pack(T val)
{
    using RawType = std::remove_reference_t<std::remove_const_t<T>>;
    if constexpr (is_vector_v<RawType>)
    {
        return packArray(std::forward<T>(val));
    }
    else if constexpr (is_map_v<RawType>)
    {
        return packObject(std::forward<T>(val));
    }
    else
        return packValue(std::forward<T>(val));
}


inline bool testExtra = ([]() {
    std::vector<std::string> input{"aa", "abcd", "test"};
    auto output = extract<decltype(input)>(pack(input));
    assert(output == input);
    std::unordered_map<std::string, std::string> input2{
        {"aa", "bb"},
        {"ab", "ba"},
        {"abc", "cba"},
    };
    auto output2 = extract<decltype(input2)>(pack(input2));
    assert(output2 == input2);
    std::vector<decltype(input2)> input3{input2, input2};
    auto output3 = extract<decltype(input3)>(pack(input3));
    assert(output3 == input3);
    std::unordered_map<std::string, decltype(input3)> input4{
        {"aa", input3},
        {"ab", input3},
        {"abc", input3},
    };
    auto output4 = extract<decltype(input4)>(pack(input4));
    assert(output4 == input4);

    std::vector<decltype(input4)> input5{input4, input4, input4};
    auto output5 = extract<decltype(input5)>(pack(input5));
    assert(output5 == input5);
#if false
    __debugbreak();
    output5.erase(output5.begin());
    assert(output5 == input5);
    __debugbreak();
#endif // false
    return true;
})();

#else

// Use string as value type because it is easy to convert between script types and native types
using ValueType = std::string; // Json string

template <typename T>
std::remove_reference_t<T> extract(ValueType const& val)
{
    return nlohmann::json::parse(val).get<std::remove_reference_t<T>>();
}

template <typename T>
ValueType pack(T const& val)
{
    return nlohmann::json(val).dump();
}

#endif // TEST_NEW_VALUE_TYPE

using CallbackFn = std::function<ValueType(std::vector<ValueType>)>;

struct ExportedFuncData
{
    HMODULE handler;
    CallbackFn callback;
};

LIAPI extern CallbackFn const EMPTY_FUNC;
LIAPI bool exportFunc(std::string const& nameSpace, std::string const& funcName, CallbackFn&& callback, HMODULE handler = GetCurrentModule());
LIAPI CallbackFn const& importFunc(std::string const& nameSpace, std::string const& funcName);


inline ValueType _expandArg(std::vector<ValueType>& args, int& index)
{
    return std::move(args[--index]);
}

template <typename RTN, typename... Args>
inline bool _exportAs(std::string const& nameSpace, std::string const& funcName, std::function<RTN(Args...)>&& callback)
{
    CallbackFn cb = [callback = std::move(callback)](std::vector<ValueType> args) -> ValueType {
        if (sizeof...(Args) != args.size())
            return std::move(ValueType());
        int index = sizeof...(Args);
        auto res = callback(extract<Args>(_expandArg(args, index))...);
        return std::move(pack(std::move(res)));
    };
    return exportFunc(nameSpace, funcName, std::move(cb), GetCurrentModule());
}

LIAPI bool hasFunc(std::string const& nameSpace, std::string const& funcName);
LIAPI bool removeFunc(std::string const& nameSpace, std::string const& funcName);
LIAPI int removeNameSpace(std::string const& nameSpace);
LIAPI int removeFuncs(std::vector<std::pair<std::string, std::string>> funcs);
LIAPI void _onCallError(std::string const& msg, HMODULE handler = GetCurrentModule());

template <typename RTN, typename... Args>
inline bool _importAs(std::string const& nameSpace, std::string const& funcName, std::function<RTN(Args...)>& func)
{
    func = [nameSpace, funcName](Args... args) -> RTN {
        auto& rawFunc = importFunc(nameSpace, funcName);
        if (!rawFunc)
        {
            _onCallError(fmt::format("Fail to import! Function [{}::{}] has not been exported", nameSpace, funcName));
            return RTN();
        }
        std::vector<ValueType> params = {pack(std::forward<Args>(args))...};
        ValueType&& res = rawFunc(std::move(params));
        return extract<RTN>(std::move(res));
    };
    return true;
}

template <typename CB, typename Func = std::conditional_t<std::is_function_v<CB>, std::function<CB>, CB>>
inline Func importAs(std::string const& nameSpace, std::string const& funcName)
{
    Func callback{};
    bool res = _importAs(nameSpace, funcName, callback);
    return std::move(callback);
}

template <typename CB>
inline bool exportAs(std::string const& nameSpace, std::string const& funcName, CB&& callback)
{
    return _exportAs(nameSpace, funcName, std::function(std::move(callback)));
}

}; // namespace RemoteCall
