#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/PackStats.h"
#include "mc/resources/ResourcePack.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class PackInstance {
public:
    PackReport                                      mPackReport;   // this+0x0
    class PackSettings*                             mPackSettings; // this+0x1B0
    Bedrock::NotNullNonOwnerPtr<class ResourcePack> mPack;         // this+0x1B8
    PackStats                                       mStats;        // this+0x1C8
    int                                             mSubpackIndex; // this+0x1D8

public:
    // NOLINTBEGIN
    MCAPI PackInstance(class PackInstance const&);

    MCAPI PackInstance(
        Bedrock::NotNullNonOwnerPtr<class ResourcePack> pack,
        std::string const&                              subpackName,
        bool                                            isDependent,
        class PackSettings*                             packSettings
    );

    MCAPI PackInstance(
        Bedrock::NotNullNonOwnerPtr<class ResourcePack> pack,
        int                                             subpackIndex,
        bool                                            isDependent,
        class PackSettings*                             packSettings
    );

    MCAPI void
    forEachIn(class Core::Path const& path, std::function<void(class Core::Path const&)> callback, bool recurseAnyways)
        const;

    MCAPI double getLoadTime() const;

    MCAPI class PackManifest& getManifest();

    MCAPI class PackManifest const& getManifest() const;

    MCAPI ::PackCategory getPackCategory() const;

    MCAPI class mce::UUID const getPackId() const;

    MCAPI ::PackOrigin getPackOrigin() const;

    MCAPI class PackStats& getPackStats();

    MCAPI class PackStats const& getPackStats() const;

    MCAPI bool getResource(class Core::Path const& resourceName, std::string& resourceStream) const;

    MCAPI class ResourceLocation const& getResourceLocation() const;

    MCAPI std::string const& getSubpackFolderName() const;

    MCAPI int getSubpackIndex() const;

    MCAPI class ContentTierInfo getTierInfo() const;

    MCAPI class SemVersion const& getVersion() const;

    MCAPI bool hasResource(class Core::Path const& resourceName) const;

    MCAPI bool isBaseGamePack() const;

    MCAPI bool isSlicePack() const;

    MCAPI bool isZipped() const;

    MCAPI class PackInstance& operator=(class PackInstance const&);

    MCAPI bool operator==(class PackInstance const& rhs) const;

    MCAPI void setLocale(std::string const& locale);

    MCAPI ~PackInstance();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isPackPointerValid() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
