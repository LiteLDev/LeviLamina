#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CommandPropertyBag {
public:
    // prevent constructor by default
    CommandPropertyBag& operator=(CommandPropertyBag const&);
    CommandPropertyBag(CommandPropertyBag const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandPropertyBag() = default;

    MCAPI CommandPropertyBag();

    MCAPI explicit CommandPropertyBag(class Json::Value const& jsonValue);

    MCAPI void addToResultList(std::string const& key, std::string const& element);

    MCAPI std::unique_ptr<class CommandPropertyBag> clone() const;

    MCAPI void set(std::string const& key, class BlockPos const& pos);

    MCAPI void set(std::string const& key, class Json::Value const& val);

    MCAPI void set(std::string const& key, class Vec3 size);

    // NOLINTEND
};
