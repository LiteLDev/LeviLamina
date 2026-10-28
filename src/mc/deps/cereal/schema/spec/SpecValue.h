#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/spec/SpecValueStorage.h"

namespace cereal {

struct SpecValue {
public:
    // SpecValue inner types define
    using Array = ::std::vector<::cereal::SpecValue>;

    using Bool = bool;

    using IdType = uint;

    using Int = int64;

    using IntValueMap = ::std::unordered_map<int64, ::cereal::SpecValue>;

    using Number = double;

    using Object = ::std::unordered_map<uint, ::cereal::SpecValue>;

    using SpecValueTag = void;

    using String = ::std::string;

    using StringValueMap = ::std::unordered_map<::std::string, ::cereal::SpecValue>;

    using ValueType = ::std::variant<
        ::std::monostate,
        ::std::unordered_map<uint, ::cereal::SpecValue>,
        bool,
        int64,
        double,
        ::std::string,
        ::std::vector<::cereal::SpecValue>,
        ::std::unordered_map<int64, ::cereal::SpecValue>,
        ::std::unordered_map<::std::string, ::cereal::SpecValue>,
        ::cereal::SpecValueStorage>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        72,
        ::std::variant<
            ::std::monostate,
            ::std::unordered_map<uint, ::cereal::SpecValue>,
            bool,
            int64,
            double,
            ::std::string,
            ::std::vector<::cereal::SpecValue>,
            ::std::unordered_map<int64, ::cereal::SpecValue>,
            ::std::unordered_map<::std::string, ::cereal::SpecValue>,
            ::cereal::SpecValueStorage>>
        mValue;
    // NOLINTEND
};

} // namespace cereal
