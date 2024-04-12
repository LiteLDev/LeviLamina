#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ResourceLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ResourceLoader& operator=(ResourceLoader const&);
    ResourceLoader(ResourceLoader const&);
    ResourceLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ResourceLoader@@UEAA@XZ
    virtual ~ResourceLoader();

    // vIndex: 1, symbol:
    // ?load@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool load(class ResourceLocation const& resourceLocation, std::string& resourceStream) const = 0;

    // vIndex: 2, symbol:
    // ?load@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    virtual bool load(
        class ResourceLocation const&   resourceLocation,
        std::string&                    resourceStream,
        std::vector<std::string> const& extensionList
    ) const = 0;

    // vIndex: 3, symbol:
    // ?load@ResourceLoader@@UEBA_NAEBVResourceLocationPair@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    virtual bool load(
        class ResourceLocationPair const& resourceLocation,
        std::string&                      resourceStream,
        std::vector<std::string> const&   extensions
    ) const;

    // vIndex: 4, symbol:
    // ?loadAllVersionsOf@ResourcePackManager@@UEBA?AV?$vector@VLoadedResourceData@@V?$allocator@VLoadedResourceData@@@std@@@std@@AEBVResourceLocation@@@Z
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const& resourceLocation
    ) const = 0;

    // vIndex: 5, symbol: ?isInStreamableLocation@ResourceLoader@@UEBA_NAEBVResourceLocation@@@Z
    virtual bool isInStreamableLocation(class ResourceLocation const& resourceLocation) const;

    // vIndex: 6, symbol:
    // ?isInStreamableLocation@ResourceLoader@@UEBA_NAEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual bool isInStreamableLocation(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensions
    ) const;

    // vIndex: 7, symbol:
    // ?getPath@ResourceLoader@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const&) const;

    // vIndex: 8, symbol:
    // ?getPath@ResourceLoader@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual class Core::PathBuffer<std::string>
    getPath(class ResourceLocation const& resourceLocation, std::vector<std::string> const& extensions) const;

    // vIndex: 9, symbol:
    // ?getPathContainingResource@ResourceLoader@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const&) const;

    // vIndex: 10, symbol:
    // ?getPathContainingResource@ResourceLoader@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual class Core::PathBuffer<std::string> getPathContainingResource(
        class ResourceLocation const& resourceLocation,
        std::vector<std::string>      extensions
    ) const;

    // vIndex: 11, symbol:
    // ?getPackStackIndexOfResource@ResourceLoader@@UEBA?AU?$pair@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    virtual std::pair<int, std::string const&> getPackStackIndexOfResource(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensions
    ) const;

    // NOLINTEND
};
