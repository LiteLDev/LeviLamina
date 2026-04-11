#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <span>
#include <string>
#include <string_view>
#include <unordered_set>
#include <vector>

namespace ll::test::coverage {

struct DiscoveredModule {
    std::string moduleName;
    std::string modulePath;
    uintptr_t   baseAddress{};
    size_t      imageSize{};
    bool        hasDebugSymbols{};
};

struct SymbolRecord {
    std::string name;
    std::string demangledName;
    uintptr_t   start{};
    uintptr_t   end{};
    std::string sourceFile;
    uint32_t    startLine{};
    uint32_t    endLine{};
    bool        hasLineInfo{};
};

struct SourceLineRecord {
    std::string file;
    uint32_t    line{};
    uintptr_t   address{};
};

struct InstrumentationEvent {
    uintptr_t address{};
    uint32_t  lineIndex{UINT32_MAX};
    uint32_t  functionIndex{UINT32_MAX};
};

class IModuleEnumerator {
public:
    virtual ~IModuleEnumerator()                                                                = default;
    virtual std::vector<DiscoveredModule> enumerateModules(std::string_view fallbackModuleName) = 0;

    static std::unique_ptr<IModuleEnumerator> createDefault();
};

class ISymbolProvider {
public:
    virtual ~ISymbolProvider()                                                               = default;
    virtual bool                          prepareModule(DiscoveredModule& module)            = 0;
    virtual std::vector<SymbolRecord>     enumerateFunctions(DiscoveredModule const& module) = 0;
    virtual std::vector<SourceLineRecord> enumerateLines(DiscoveredModule const& module)     = 0;

    static std::unique_ptr<ISymbolProvider> createDefault();
};

class IExportEnumerator {
public:
    virtual ~IExportEnumerator()                                                                   = default;
    virtual std::unordered_set<uintptr_t> collectExportedAddresses(DiscoveredModule const& module) = 0;

    static std::unique_ptr<IExportEnumerator> createDefault();
};

class IAddressSampler {
public:
    virtual ~IAddressSampler() = default;

    virtual bool start() = 0;
    virtual void stop()  = 0;

    virtual bool
    addModule(uintptr_t baseAddress, size_t imageSize, std::span<uintptr_t const> instrumentedAddresses) = 0;

    [[nodiscard]] virtual size_t                   moduleCount() const                   = 0;
    [[nodiscard]] virtual std::span<uint8_t const> addressHits(size_t moduleIndex) const = 0;
    [[nodiscard]] virtual bool                     isRunning() const                     = 0;

    static std::unique_ptr<IAddressSampler> createDefault();
};

} // namespace ll::test::coverage