#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class Pack : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    Pack& operator=(Pack const&);
    Pack(Pack const&);
    Pack();

    std::unique_ptr<class PackManifest>          mManifest;             // this+0x18
    std::unique_ptr<class PackAccessStrategy>    mAccessStrategy;       // this+0x20
    std::unique_ptr<class SubpackInfoCollection> mSubpackInfoStack;     // this+0x28
    std::unique_ptr<class PackMetadata>          mMetadata;             // this+0x30
    std::map<void*, std::function<void(Pack&)>>  mPackUpdatedCallbacks; // this+0x38
    std::map<void*, std::function<void(Pack&)>>  mPackDeletedCallbacks; // this+0x48

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~Pack() = default;

    // symbol:
    // ??0Pack@@QEAA@V?$unique_ptr@VPackManifest@@U?$default_delete@VPackManifest@@@std@@@std@@V?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@2@V?$unique_ptr@VSubpackInfoCollection@@U?$default_delete@VSubpackInfoCollection@@@std@@@2@V?$unique_ptr@VPackMetadata@@U?$default_delete@VPackMetadata@@@std@@@2@@Z
    MCAPI
    Pack(std::unique_ptr<class PackManifest>, std::unique_ptr<class PackAccessStrategy>, std::unique_ptr<class SubpackInfoCollection>, std::unique_ptr<class PackMetadata>);

    // symbol: ?getAccessStrategy@Pack@@QEAAPEAVPackAccessStrategy@@XZ
    MCAPI class PackAccessStrategy* getAccessStrategy();

    // symbol: ?getManifest@Pack@@QEAAAEAVPackManifest@@XZ
    MCAPI class PackManifest& getManifest();

    // symbol: ?getManifest@Pack@@QEBAAEBVPackManifest@@XZ
    MCAPI class PackManifest const& getManifest() const;

    // symbol: ?getManifestPtr@Pack@@QEAAPEAVPackManifest@@XZ
    MCAPI class PackManifest* getManifestPtr();

    // symbol: ?getSubpackInfoStack@Pack@@QEAAPEAVSubpackInfoCollection@@XZ
    MCAPI class SubpackInfoCollection* getSubpackInfoStack();

    // symbol: ?move@Pack@@QEAAX$$QEAV1@@Z
    MCAPI void move(class Pack&&);

    // symbol: ?notifyDeleted@Pack@@QEAAXXZ
    MCAPI void notifyDeleted();

    // symbol: ?notifyUpdated@Pack@@QEAAXXZ
    MCAPI void notifyUpdated();

    // symbol: ?registerPackDeletedCallback@Pack@@QEAAXPEAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    MCAPI void registerPackDeletedCallback(void*, std::function<void(class Pack&)>);

    // symbol: ?registerPackUpdatedCallback@Pack@@QEAAXPEAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    MCAPI void registerPackUpdatedCallback(void*, std::function<void(class Pack&)>);

    // symbol: ?unregisterPackDeletedCallback@Pack@@QEAAXPEAX@Z
    MCAPI void unregisterPackDeletedCallback(void*);

    // symbol: ?unregisterPackUpdatedCallback@Pack@@QEAAXPEAX@Z
    MCAPI void unregisterPackUpdatedCallback(void*);

    // symbol:
    // ?createPack@Pack@@SA?AV?$unique_ptr@VPack@@U?$default_delete@VPack@@@std@@@std@@AEBVResourceLocation@@W4PackType@@W4PackOrigin@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@PEAVPackSourceReport@@@Z
    MCAPI static std::unique_ptr<class Pack>
    createPack(class ResourceLocation const&, ::PackType, ::PackOrigin, class IPackManifestFactory&, Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const&, class PackSourceReport*);

    // symbol:
    // ?createPackMetadata@Pack@@SA?AV?$unique_ptr@VPackMetadata@@U?$default_delete@VPackMetadata@@@std@@@std@@W4PackType@@AEAVPackManifest@@AEBVPackAccessStrategy@@AEAVPackReport@@@Z
    MCAPI static std::unique_ptr<class PackMetadata>
    createPackMetadata(::PackType, class PackManifest&, class PackAccessStrategy const&, class PackReport&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?EDUCATION_METADATA_FILE@Pack@@0V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
    MCAPI static class Core::PathBuffer<std::string> const EDUCATION_METADATA_FILE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $EDUCATION_METADATA_FILE() { return EDUCATION_METADATA_FILE; }

    // NOLINTEND
};
