#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
struct PackSettingValueAndDefault;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class PackSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID const> mPackId;
    ::ll::TypedStorage<
        8,
        16,
        ::std::weak_ptr<::Bedrock::PubSub::Publisher<
            void(::mce::UUID const&, ::std::string const&, ::std::variant<float, bool, ::std::string> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>>
                                                                                                 mOnChangePublisher;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::PackSettingValueAndDefault>> mNameValueMap;
    ::ll::TypedStorage<8, 8, uint64>                                                             mLastUsed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void setValue(::std::string const& name, ::std::variant<float, bool, ::std::string> const& value);
#endif
    // NOLINTEND
};
