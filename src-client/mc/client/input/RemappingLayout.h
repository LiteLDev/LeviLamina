#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/IconSize.h"
#include "mc/client/input/RemappingLayoutRawIndex.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
struct DuplicateKey;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class RemappingLayout {
public:
    // RemappingLayout inner types define
    using RefreshKeymappingPublisher =
        ::Bedrock::PubSub::Publisher<void(::std::optional<uint64>), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Keymapping>> mKeymappings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Keymapping>> mDefaultMappings;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::std::optional<uint64>), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                         mRefreshKeymappingsPublisher;
    ::ll::TypedStorage<8, 32, ::RemappingLayoutRawIndex> mLayoutRawIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemappingLayout();

    virtual void setMappingWithRawInput(::std::string const& action, int key, ::RawInputType type);

    virtual int getAdjustedKey(int key) const;

    virtual ::std::string getSaveString(::std::string const& action) const;

    virtual ::std::string getMappedKeyName(int key) const;

    virtual ::std::string getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    virtual ::std::string getMappedKeyName(::Keymapping const& keyMapping) const;

    virtual ::std::string getKeySpriteLocation(int key, ::IconSize iconSize) const;

    virtual ::std::string getKeySpriteLocation(::Keymapping const& keyMapping) const;

    virtual int _rawKeyToKey(int rawInputKey, ::RawInputType rawInputType) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RemappingLayout();

    MCAPI void assignDefaultMapping(::std::vector<::Keymapping>&& newDefaultMapping);

    MCAPI ::std::vector<::DuplicateKey> generateIndicesOfDuplicates() const;

    MCAPI ::Keymapping const& getKeymappingByAction(::std::string const& action) const;

    MCAPI ::Bedrock::PubSub::Subscription
    registerRefreshKeymappingsListener(::std::function<void(::std::optional<uint64>)> callback);

    MCAPI void setMapping(::std::string const& action, ::std::vector<int> const& keys);

    MCAPI void unassignDuplicateKeys(uint64 index);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setMappingWithRawInput(::std::string const& action, int key, ::RawInputType type);

    MCFOLD int $getAdjustedKey(int key) const;

    MCFOLD ::std::string $getSaveString(::std::string const& action) const;

    MCFOLD ::std::string $getMappedKeyName(int key) const;

    MCFOLD ::std::string $getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    MCAPI ::std::string $getMappedKeyName(::Keymapping const& keyMapping) const;

    MCFOLD ::std::string $getKeySpriteLocation(int key, ::IconSize iconSize) const;

    MCAPI ::std::string $getKeySpriteLocation(::Keymapping const& keyMapping) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
