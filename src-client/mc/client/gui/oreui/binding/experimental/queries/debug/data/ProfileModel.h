#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace OreUI::Experimental::Debug { class Profile; }
// clang-format on

namespace OreUI::Experimental::Debug {

class ProfileModel {
public:
    // ProfileModel inner types define
    using size_type = uint64;

    using ListenerSignature = void(uint64, ::OreUI::Experimental::Debug::Profile const&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Experimental::Debug::Profile>> mProfiles;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<
            void(uint64, ::OreUI::Experimental::Debug::Profile const&),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>
        mOnChangePublisher;
    // NOLINTEND
};

} // namespace OreUI::Experimental::Debug
