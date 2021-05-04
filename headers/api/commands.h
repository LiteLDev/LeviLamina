#pragma once
#include <tuple>
#include <mc/Command/CommandReg.h>
#include <stl/optional.h>

inline CommandRegistry* CmdRegGlobal = nullptr;
namespace CMDREG {
	inline void SetCommandRegistry(CommandRegistry* reg) {
		CmdRegGlobal = reg;
	}
	template <typename T>
	inline typeid_t<CommandRegistry> getTPID();
	inline typeid_t<CommandRegistry>& GETID(const char* name) {
		return *(typeid_t<CommandRegistry>*)(dlsym_real(name));
	}
	inline typeid_t<CommandRegistry> ALLOCID() {
		auto& id = *((unsigned short*)SYM("?count@?$typeid_t@VCommandRegistry@@@@2GA"));
		return { id++ };
	}
	template <>
	inline typeid_t<CommandRegistry> getTPID<CommandMessage>() {
		return GETID("?id@?1???$type_id@VCommandRegistry@@VCommandMessage@@@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
	}
	template <>
	inline typeid_t<CommandRegistry> getTPID<bool>() {
		return GETID("?id@?1???$type_id@VCommandRegistry@@_N@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
	}
	template <>
	inline typeid_t<CommandRegistry> getTPID<int>() {
		return GETID("?id@?1???$type_id@VCommandRegistry@@H@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
	}
	template <>
	inline typeid_t<CommandRegistry> getTPID<float>() {
		return GETID("?id@?1???$type_id@VCommandRegistry@@M@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
	}
	template <>
	inline typeid_t<CommandRegistry> getTPID<std::string>() {
		return GETID(
			"?id@?1???$type_id@VCommandRegistry@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@YA?AV?$"
			"typeid_t@VCommandRegistry@@@@XZ@4V1@A");
	}
	template <>
	inline typeid_t<CommandRegistry> getTPID<CommandSelector<Actor>>() {
		return GETID(
			"?id@?1???$type_id@VCommandRegistry@@V?$CommandSelector@VActor@@@@@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@"
			"A");
	}
	template <>
	inline typeid_t<CommandRegistry> getTPID<CommandSelector<Player>>() {
		return GETID(
			"?id@?1???$type_id@VCommandRegistry@@V?$CommandSelector@VPlayer@@@@@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@"
			"A");
	}
	template <typename T>
	class CEnum {
	public:
		static typeid_t<CommandRegistry> myid;
		static string name;
		CEnum(string const& nam, std::initializer_list<std::string> const& values) {
			name = nam;
			if (myid.value == 65535) {
				myid = ALLOCID();
				if (CmdRegGlobal == nullptr) {
					std::cout << "CmdRegGlobal Not Set" << std::endl;
					std::this_thread::sleep_for(std::chrono::seconds(10));
					exit(1);
				}
				CmdRegGlobal->addEnumValues(name, myid, values);
			}
		}
	};
	template <typename T>
	typeid_t<CommandRegistry> CEnum<T>::myid(65535);
	template <typename T>
	string CEnum<T>::name;

	struct IMyEnum {};


	template <typename E>
	struct MyEnum : IMyEnum {
		E val;
		operator E() {
			return val;
		}
	};

	static inline void MakeCommand(string const& name, const char* desc, int lvl) {
		std::cout << "RegisteringCommand > " << name << std::endl;
		if (CmdRegGlobal == nullptr) {
			std::cout << "CmdRegGlobal Not Set" << std::endl;
			exit(1);
		}
		SymCall("?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z",
			void, void*, std::string const&, char const*, char, char, char)
			(CmdRegGlobal, name, desc, lvl, 0, 0x40);
	}

	template <typename T>
	typeid_t<CommandRegistry> typeid_getter() {
		if constexpr (std::is_base_of_v<IMyEnum, T>) {
			return CEnum<decltype(T::val)>::myid;
		}
		else {
			if constexpr (std::is_base_of_v<Ioptional, T>) {
				return typeid_getter<typename T::val>();
			}
			else {
				return getTPID<T>();
			}
		}
	}
	template <typename Dummy, typename... TP>
	struct MakeOverload {
		using container = std::tuple<std::remove_cv_t<std::remove_reference_t <TP>>...>;
		class sub : public Command {
		public:
			container data;
			static uintptr_t cb;
			template <std::size_t... Index>
			inline bool invoke_impl(CommandOrigin const& a, CommandOutput& b, std::index_sequence<Index...>) {
				return ((bool (*)(CommandOrigin const&, CommandOutput&, TP...))cb)(a, b, std::get<Index>(data)...);
			}
			void execute(CommandOrigin const& a, CommandOutput& b) {
				constexpr auto size = std::tuple_size<container>::value;
				try {
					if (invoke_impl(a, b, std::make_index_sequence<size>{})) {
						//b.success(string("Success"));
					}

				}
				catch (std::exception e) {
					//b.error(I18N::CMD_EXCEPTION+e.what());
				}
				catch (string e) {
					//b.error(I18N::CMD_EXCEPTION+e);
				}
				catch (...) {
					//b.error(I18N::CMD_EXCEPTION);
				}
			}
			sub() {}
		};
		static void(*new_cb)(container&);
		template <typename TX>
		inline void reg_impl_sub(uintptr_t off, string const& desc, std::vector<CommandParameterData>& vc) {
			off += offsetof(sub, data);
			if constexpr (std::is_base_of_v<Ioptional, TX>) {
				using TXX = typename TX::Tval;
				if constexpr (std::is_base_of_v<IMyEnum, TXX>) {
					vc.emplace_back(typeid_getter<TXX>(), &CommandRegistry::parseEnumInt, desc, CommandParameterDataType::ENUM, CEnum<decltype(TXX::val)>::name.c_str(), int(off + offsetof(TX, filler) + offsetof(TXX, val)), true, int(off + offsetof(TX, set)));
				}
				else {
					vc.emplace_back(typeid_getter<TXX>(), CommandRegistry::getParseFn<TXX>(), desc, CommandParameterDataType::NORMAL, nullptr, int(off + offsetof(TX, filler)), true, int(off + offsetof(TX, set)));
				}
			}
			else {
				if constexpr (std::is_base_of_v<IMyEnum, TX>) {
					vc.emplace_back(typeid_getter<TX>(), &CommandRegistry::parseEnumInt, desc, CommandParameterDataType::ENUM, CEnum<decltype(TX::val)>::name.c_str(), int(off + offsetof(TX, val)), false, -1);
				}
				else {
					vc.emplace_back(typeid_getter<TX>(), CommandRegistry::getParseFn<TX>(), desc, CommandParameterDataType::NORMAL, nullptr, int(off), false, -1);
				}
			}
		}
		template <std::size_t... Index>
		inline void reg_helper(std::vector<CommandParameterData>& vc,
			std::vector<string>& argn, std::index_sequence<Index...>) {
			container& cter = *(container*)0;
			(reg_impl_sub<std::remove_cv_t<std::remove_reference_t <decltype(std::get<Index>(cter))>>>((uintptr_t)std::addressof(std::get<Index>(cter)) - (uintptr_t)std::addressof(cter), argn[Index], vc), ...);
		}
		inline void regMe(string const& cname, std::vector<CommandParameterData>&& vc) {
			if (CmdRegGlobal == nullptr) {
				std::cout << "CmdRegGlobal Not Set" << endl;
				exit(1);
			}
			CmdRegGlobal->registerOverload(cname, &factory, std::forward< std::vector<CommandParameterData>>(vc));
		}
		template <typename... TP2>
		MakeOverload(Dummy*, void(*_new_cb)(container&), string const& cname, bool (*__cb)(CommandOrigin const&, CommandOutput&, TP...), TP2... argns) {
			static_assert(sizeof...(TP2) == sizeof...(TP), "every command arg should have a description");
			new_cb = _new_cb;
			sub::cb = (decltype(sub::cb))__cb;
			std::vector<CommandParameterData> vc;
			std::vector<string> argn;
			(argn.emplace_back(argns), ...);
			constexpr auto size = std::tuple_size<container>::value;
			reg_helper(vc, argn, std::make_index_sequence<size>{});
			regMe(cname, std::move(vc));
		}
		template <typename... TP2>
		inline MakeOverload(Dummy*, string const& cname, bool (*__cb)(CommandOrigin const&, CommandOutput&, TP...), TP2... argns) {
			static_assert(sizeof...(TP2) == sizeof...(TP), "every command arg should have a description");
			sub::cb = (decltype(sub::cb))__cb;
			std::vector<CommandParameterData> vc;
			std::vector<string> argn;
			(argn.emplace_back(argns), ...);
			constexpr auto size = std::tuple_size<container>::value;
			reg_helper(vc, argn, std::make_index_sequence<size>{});
			regMe(cname, std::move(vc));
		}
		static std::unique_ptr<Command> factory() {
			auto rv = std::make_unique<sub>();
			if (new_cb)
				new_cb(rv->data);
			return rv;
		}
	};
	template <typename Dummy, typename... TP>
	uintptr_t MakeOverload<Dummy, TP...>::sub::cb;
	template < typename Dummy, typename... TP>
	void(*MakeOverload<Dummy, TP...>::new_cb)(std::tuple<std::remove_cv_t<std::remove_reference_t <TP>>...>&) = nullptr;
};
using CMDREG::CEnum, CMDREG::MakeCommand, CMDREG::MakeOverload, CMDREG::MyEnum;
static_assert(sizeof(MakeOverload<void, int>) == 1);
#define CmdOverload( name2, cb, ...) \
	{ MakeOverload __ov1((struct name2*)0, string(#name2), cb, __VA_ARGS__); }
#define CmdOverload2(name2, cb, cb2, ...) \
	{ MakeOverload __ov2((struct name2*)0, cb2, #name2, cb, __VA_ARGS__); }
#include<api/types/types.h>
inline static optional<WPlayer> MakeWP(CommandOrigin const& ori) {
	if (ori.getOriginType() == OriginType::Player) {
		return { { *(ServerPlayer*)ori.getEntity() } };
	}
	return {};
}
inline static ServerPlayer* MakeSP(CommandOrigin const& ori) {
	if (ori.getOriginType() == OriginType::Player) {
		return { (ServerPlayer*)ori.getEntity() };
	}
	return nullptr;
}
inline static ServerPlayer* MakeSP(void* x) {
	if (!x) return nullptr;
	if (dAccess<void*, 0>(x) == SYM("??_7ServerPlayer@@6B@")) {
		return (ServerPlayer*)x;
	}
	return nullptr;
}