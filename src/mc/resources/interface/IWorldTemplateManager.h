#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class IWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    IWorldTemplateManager& operator=(IWorldTemplateManager const&) = delete;
    IWorldTemplateManager(IWorldTemplateManager const&)            = delete;
    IWorldTemplateManager()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?findInstalledWorldTemplateByUUID\@WorldTemplateManager\@\@UEBAPEBUWorldTemplateInfo\@\@AEBV?$vector\@VUUID\@mce\@\@V?$allocator\@VUUID\@mce\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const&) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IWORLDTEMPLATEMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IWorldTemplateManager();
#endif
    // NOLINTEND
};
