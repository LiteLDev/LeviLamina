#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
// clang-format on

class MolangPackSettingsCache {
public:
    // MolangPackSettingsCache inner types define
    using PackSettingValueMolang =
        ::std::variant<bool, float, uint64, ::brstd::flat_set<uint64, ::std::less<uint64>, ::std::vector<uint64>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint64,
            ::std::variant<bool, float, uint64, ::brstd::flat_set<uint64, ::std::less<uint64>, ::std::vector<uint64>>>>>
        mNameValueMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void _initFromPackStack(::std::vector<::PackInstance> const& stack);

    MCAPI void updatePackSetting(
        ::std::string const&                                                            name,
        ::std::variant<float, bool, ::std::string, ::std::vector<::std::string>> const& value
    );
#endif
    // NOLINTEND
};
