#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class Pack;
class PackAccessStrategy;
class PackManifest;
class PackReport;
class PackSource;
class ResourceLocation;
class ResourcePack;
namespace Core { class Path; }
// clang-format on

namespace ImportCompleteStep {

class IImporters {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IImporters() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::PackAccessStrategy> createAccessStrategy(::ResourceLocation&, ::PackReport&) = 0;

    // vIndex: 2
    virtual ::PackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) = 0;

    // vIndex: 3
    virtual ::PackSource* getTreatmentPackSource(::Core::Path const&, ::PackType) = 0;

    // vIndex: 4
    virtual ::std::unique_ptr<::PackManifest>
    createPackManifest(::PackAccessStrategy&, ::ResourceLocation const&, ::PackReport&) = 0;

    // vIndex: 5
    virtual ::std::shared_ptr<::Pack> createPack(::ResourceLocation const&, ::PackType const, ::PackSource&) = 0;

    // vIndex: 6
    virtual ::Bedrock::Threading::Async<::std::shared_ptr<::ResourcePack>>
    importResourceOrBehaviorPack(::Pack&, ::Core::Path const&) = 0;

    // vIndex: 7
    virtual bool importSkinPack(::Pack&, bool) = 0;

    // vIndex: 8
    virtual void importWorldTemplate(::Pack&) = 0;

    // vIndex: 9
    virtual void importPersonaPiece(::Pack&) = 0;

    // vIndex: 10
    virtual void fireEventBug1341395(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ImportCompleteStep
