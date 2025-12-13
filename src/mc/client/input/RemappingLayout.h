#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/IconSize.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
struct DuplicateKey;
// clang-format on

class RemappingLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkec8525;
    ::ll::UntypedStorage<8, 24> mUnkfb6044;
    // NOLINTEND

public:
    // prevent constructor by default
    RemappingLayout& operator=(RemappingLayout const&);
    RemappingLayout(RemappingLayout const&);
    RemappingLayout();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RemappingLayout() = default;
#else // LL_PLAT_C
    virtual ~RemappingLayout();
#endif

    virtual void setMappingWithRawInput(::std::string const&, int, ::RawInputType);

    virtual int getAdjustedKey(int key) const;

    virtual ::std::string getSaveString(::std::string const& action) const;

    virtual ::std::string getMappedKeyName(int key) const;

    virtual ::std::string getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    virtual ::std::string getMappedKeyName(::Keymapping const& keyMapping) const;

    virtual ::std::string getKeySpriteLocation(int key, ::IconSize iconSize) const;

    virtual ::std::string getKeySpriteLocation(::Keymapping const& keyMapping) const;

    virtual int _rawKeyToKey(int, ::RawInputType) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void assignDefaultMapping(::std::vector<::Keymapping>&& newDefaultMapping);

    MCNAPI_C ::Keymapping const& getKeymappingByAction(::std::string const& action) const;

    MCNAPI_C void setMapping(::std::string const& action, ::std::vector<int> const& keys);

    MCNAPI_C void unassignDuplicateKeys(int index);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::vector<::DuplicateKey>
    _generateIndicesOfDuplicatesForMappings(::std::vector<::Keymapping> const& mappings);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI int $getAdjustedKey(int key) const;

    MCNAPI ::std::string $getSaveString(::std::string const& action) const;

    MCNAPI ::std::string $getMappedKeyName(int key) const;

    MCNAPI ::std::string $getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    MCNAPI ::std::string $getMappedKeyName(::Keymapping const& keyMapping) const;

    MCNAPI ::std::string $getKeySpriteLocation(int key, ::IconSize iconSize) const;

    MCNAPI ::std::string $getKeySpriteLocation(::Keymapping const& keyMapping) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
