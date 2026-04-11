#pragma once

#include "coverage/CoverageBackend.h"
#include "coverage/CoverageCatalog.h"

#include "windows.h"

namespace ll::test::coverage::win {

class ModuleEnumerator final : public IModuleEnumerator {
public:
    std::vector<DiscoveredModule> enumerateModules(std::string_view fallbackModuleName) override;
};

class SymbolProvider final : public ISymbolProvider {
public:
    bool                          prepareModule(DiscoveredModule& module) override;
    std::vector<SymbolRecord>     enumerateFunctions(DiscoveredModule const& module) override;
    std::vector<SourceLineRecord> enumerateLines(DiscoveredModule const& module) override;
};

class ExportEnumerator final : public IExportEnumerator {
public:
    std::unordered_set<uintptr_t> collectExportedAddresses(DiscoveredModule const& module) override;
};

class AddressSampler final : public IAddressSampler {
public:
    AddressSampler() = default;
    ~AddressSampler() override;

    bool start() override;
    void stop() override;

    bool addModule(uintptr_t baseAddress, size_t imageSize, std::span<uintptr_t const> instrumentedAddresses) override;

    [[nodiscard]] size_t                   moduleCount() const override;
    [[nodiscard]] std::span<uint8_t const> addressHits(size_t moduleIndex) const override;
    [[nodiscard]] bool                     isRunning() const override;

private:
    struct ModuleRuntime {
        uintptr_t base{};
        size_t    size{};

        std::vector<uintptr_t> addrs;
        std::vector<uint8_t>   origBytes;
        std::vector<uint8_t>   addressHits;

        struct PageInfo {
            uintptr_t base{};
            size_t    size{};
            DWORD     oldProtect{};
        };
        std::vector<PageInfo> modifiedPages;
    };

    std::vector<ModuleRuntime> mRuntimes;
    void*                      mVehHandle{};
    bool                       mRunning{};

    static LONG NTAPI      vehHandler(EXCEPTION_POINTERS* ep);
    static AddressSampler* sInstance;

    void installBreakpoints();
    void removeBreakpoints();
};

} // namespace ll::test::coverage::win