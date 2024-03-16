#include "ll/api/command/runtime/RuntimeCommand.h"
#include "ll/api/command/Command.h"
#include "ll/api/command/runtime/ParamKind.h"

namespace ll::command {

RuntimeCommand::RuntimeCommand(
    UnorderedStringMap<uint64> const&                         map,
    std::vector<std::pair<std::string, ParamKindType>> const& params,
    Executor const&                                           executor
)
: paramCount(params.size()),
  executor(executor),
  paramIndexMap(map) {
    size_t idx{0};
    for (auto&& [name, kind] : params) {
        meta::visitIndex<ParamKind::Count>(
            [&]<size_t K> {
                std::
                    construct_at(reinterpret_cast<ParamStorageType*>(reinterpret_cast<uintptr_t>(this) + sizeof(RuntimeCommand)) + idx, std::in_place_index<K>);
            },
            kind
        );
        idx++;
    }
}
RuntimeCommand::~RuntimeCommand() {
    std::destroy_n(
        reinterpret_cast<ParamStorageType*>(reinterpret_cast<uintptr_t>(this) + sizeof(RuntimeCommand)),
        paramCount
    );
}
void* RuntimeCommand::operator new(size_t count, uint paramCount) {
    return ::operator new(count + paramCount * sizeof(ParamStorageType));
}
void RuntimeCommand::operator delete(void* ptr, uint) { ::operator delete(ptr); }
void RuntimeCommand::operator delete(void* ptr) { ::operator delete(ptr); }

void RuntimeCommand::execute(class CommandOrigin const& origin, class CommandOutput& output) const {
    try {
        executor(origin, output, *this);
    } catch (...) {
        ::ll::command::detail::printCommandError(*this);
    }
}
ParamStorageType const& RuntimeCommand::operator[](std::string_view name) const {
    auto iter = paramIndexMap.find(name);
    if (iter == paramIndexMap.end()) {
        throw std::invalid_argument("invalid param " + std::string(name));
    }
    return reinterpret_cast<ParamStorageType*>(
        reinterpret_cast<uintptr_t>(this) + sizeof(RuntimeCommand)
    )[iter->second];
}
ParamStorageType const& RuntimeCommand::operator[](size_t idx) const {
    if (idx >= paramCount) {
        throw std::out_of_range{"idx out of range"};
    }
    return reinterpret_cast<ParamStorageType*>(reinterpret_cast<uintptr_t>(this) + sizeof(RuntimeCommand))[idx];
}
} // namespace ll::command
