#pragma once
#include <HookAPI.h>
#include "../Main/.NETGlobal.hpp"
#include "../Header/Core/SecondaryRankPtr.h"
#include "../Header/Core/Exceptions.h"

namespace LLNET {
	namespace Hook {
		using LLNET::Core::SecondaryRankPtr;

		public ref class HookAPI abstract
		{
		public:
			inline static int HookFunction(void* oldfunc, void** poutold, void* newfunc);
			inline static int HookFunction(System::IntPtr oldfunc, SecondaryRankPtr poutold, System::IntPtr newfunc);
			inline static void* dlsym_real(char const* name);
			inline static System::IntPtr dlsym_real(System::String^ name);

			generic<typename RTN>
			where RTN : System::ValueType
				inline static RTN VirtualCall(void const* _this, uintptr_t off) {
				return (*((RTN(**)(void const*))((uintptr_t*)_this + off)))(_this);
			}

			generic<typename RTN, typename T0>
			where RTN : System::ValueType
				inline static RTN VirtualCall(void const* _this, uintptr_t off, T0 a0) {
				return (*((RTN(**)(void const*, T0))((uintptr_t*)_this + off)))(_this, a0);
			}
			generic<typename RTN, typename T0, typename T1>
			where RTN : System::ValueType
				inline static RTN VirtualCall(void const* _this, uintptr_t off, T0 a0, T1 a1) {
				return (*((RTN(**)(void const*, T0, T1))((uintptr_t*)_this + off)))(_this, a0, a1);
			}
			generic<typename RTN, typename T0, typename T1, typename T2>
			where RTN : System::ValueType
				inline static RTN VirtualCall(void const* _this, uintptr_t off, T0 a0, T1 a1, T2 a2) {
				return (*((RTN(**)(void const*, T0, T1, T2))((uintptr_t*)_this + off)))(_this, a0, a1, a2);
			}
			generic<typename RTN, typename T0, typename T1, typename T2, typename T3>
			where RTN : System::ValueType
				inline static RTN VirtualCall(void const* _this, uintptr_t off, T0 a0, T1 a1, T2 a2, T3 a3) {
				return (*((RTN(**)(void const*, T0, T1, T2, T3))((uintptr_t*)_this + off)))(_this, a0, a1, a2, a3);
			}
			generic<typename RTN, typename T0, typename T1, typename T2, typename T3, typename T4>
			where RTN : System::ValueType
				inline static RTN VirtualCall(void const* _this, uintptr_t off, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4) {
				return (*((RTN(**)(void const*, T0, T1, T2, T3, T4))((uintptr_t*)_this + off)))(_this, a0, a1, a2, a3, a4);
			}
			generic<typename RTN, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
			where RTN : System::ValueType
				inline static RTN VirtualCall(void const* _this, uintptr_t off, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5) {
				return (*((RTN(**)(void const*, T0, T1, T2, T3, T4, T5))((uintptr_t*)_this + off)))(_this, a0, a1, a2, a3, a4, a5);
			}



			generic<typename RTN>
			where RTN : System::ValueType
				inline static RTN VirtualCall(System::IntPtr _this, uintptr_t off) {
				return (*((RTN(**)(void const*))((uintptr_t*)((void*)_this) + off)))((void*)_this);
			}

			generic<typename RTN, typename T0>
			where RTN : System::ValueType
				inline static RTN VirtualCall(System::IntPtr _this, uintptr_t off, T0 a0) {
				return (*((RTN(**)(void const*, T0))((uintptr_t*)((void*)_this) + off)))((void*)_this, a0);
			}
			generic<typename RTN, typename T0, typename T1>
			where RTN : System::ValueType
				inline static RTN VirtualCall(System::IntPtr _this, uintptr_t off, T0 a0, T1 a1) {
				return (*((RTN(**)(void const*, T0, T1))(((uintptr_t*)(void*)_this) + off)))((void*)_this, a0, a1);
			}
			generic<typename RTN, typename T0, typename T1, typename T2>
			where RTN : System::ValueType
				inline static RTN VirtualCall(System::IntPtr _this, uintptr_t off, T0 a0, T1 a1, T2 a2) {
				return (*((RTN(**)(void const*, T0, T1, T2))(((uintptr_t*)(void*)_this) + off)))((void*)_this, a0, a1, a2);
			}
			generic<typename RTN, typename T0, typename T1, typename T2, typename T3>
			where RTN : System::ValueType
				inline static RTN VirtualCall(System::IntPtr _this, uintptr_t off, T0 a0, T1 a1, T2 a2, T3 a3) {
				return (*((RTN(**)(void const*, T0, T1, T2, T3))(((uintptr_t*)(void*)_this) + off)))((void*)_this, a0, a1, a2, a3);
			}
			generic<typename RTN, typename T0, typename T1, typename T2, typename T3, typename T4>
			where RTN : System::ValueType
				inline static RTN VirtualCall(System::IntPtr _this, uintptr_t off, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4) {
				return (*((RTN(**)(void const*, T0, T1, T2, T3, T4))(((uintptr_t*)(void*)_this) + off)))((void*)_this, a0, a1, a2, a3, a4);
			}
			generic<typename RTN, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
			where RTN : System::ValueType
				inline static RTN VirtualCall(System::IntPtr _this, uintptr_t off, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5) {
				return (*((RTN(**)(void const*, T0, T1, T2, T3, T4, T5))(((uintptr_t*)(void*)_this) + off)))((void*)_this, a0, a1, a2, a3, a4, a5);
			}

			inline static System::IntPtr const dAccess(System::IntPtr% ptr, uintptr_t off) {
				return System::IntPtr((void*)(((uintptr_t)(void*)ptr) + off));
			}

			inline static void const* dAccess(void const* ptr, uintptr_t off) {
				return (void const*)((void*)(((uintptr_t)ptr) + off));
			}

			/// <summary>
			/// VirtualProtorype = Virtual Function Protorype Delegate
			/// </summary>
			generic<typename VirtualProtorype>
			inline static VirtualProtorype VirtualFuction(System::IntPtr _this, uintptr_t off) {
				return VirtualProtorype(Marshal::GetDelegateForFunctionPointer(System::IntPtr((void*)((((uintptr_t*)_this.ToPointer()) + off))), VirtualProtorype::typeid));
			}


#undef SYM
			/// <summary>
			/// FunctionProtorype = Function Protorype Delegate
			/// </summary>
			generic<typename FunctionProtorype>
			inline static FunctionProtorype SYM(System::String^ sym) {
				return FunctionProtorype(Marshal::GetDelegateForFunctionPointer<FunctionProtorype>(System::IntPtr(::dlsym_real(marshalString<Encoding::E_UTF8>(sym).c_str()))));
			}

			inline static System::IntPtr SYM(System::String^ sym) {
				return System::IntPtr(::dlsym_real(marshalString<Encoding::E_UTF8>(sym).c_str()));
			}

#undef SymCall
			generic<typename RTN>
			inline static RTN SymCall(System::String^ sym) {
				return ((RTN(*)())(::dlsym_real(marshalString<Encoding::E_UTF8>(sym).c_str())))();
			}

			generic<typename RTN, typename T0>
			inline static RTN SymCall(System::String^ sym, T0 a0) {
				return ((RTN(*)(T0))(::dlsym_real(marshalString<Encoding::E_UTF8>(sym).c_str())))(a0);
			}

			generic<typename RTN, typename T0, typename T1>
			inline static RTN SymCall(System::String^ sym, T0 a0, T1 a1) {
				return ((RTN(*)(T0, T1))(::dlsym_real(marshalString<Encoding::E_UTF8>(sym).c_str())))(a0, a1);
			}

			generic<typename RTN, typename T0, typename T1, typename T2>
			inline static RTN SymCall(System::String^ sym, T0 a0, T1 a1, T2 a2) {
				return ((RTN(*)(T0, T1, T2))(::dlsym_real(marshalString<Encoding::E_UTF8>(sym).c_str())))(a0, a1, a2);
			}

			generic<typename RTN, typename T0, typename T1, typename T2, typename T3>
			inline static RTN SymCall(System::String^ sym, T0 a0, T1 a1, T2 a2, T3 a3) {
				return ((RTN(*)(T0, T1, T2, T3))(::dlsym_real(marshalString<Encoding::E_UTF8>(sym).c_str())))(a0, a1, a2, a3);
			}

			generic<typename RTN, typename T0, typename T1, typename T2, typename T3, typename T4>
			inline static RTN SymCall(System::String^ sym, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4) {
				return ((RTN(*)(T0, T1, T2, T3, T4))(::dlsym_real(marshalString<Encoding::E_UTF8>(sym).c_str())))(a0, a1, a2, a3, a4);
			}

			generic<typename RTN, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
			inline static RTN SymCall(System::String^ sym, T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5) {
				return ((RTN(*)(T0, T1, T2, T3, T4, T5))(::dlsym_real(marshalString<Encoding::E_UTF8>(sym).c_str())))(a0, a1, a2, a3, a4, a5);
			}
		};
		public ref class THookRegister {
			THookRegister(System::IntPtr address, System::IntPtr hook, SecondaryRankPtr org) {
				::THookRegister((void*)address, (void*)hook, (void**)org);
			}
			THookRegister(void* address, void* hook, void** org) {
				::THookRegister(address, hook, org);
			}
			THookRegister(System::String^ sym, System::IntPtr hook, SecondaryRankPtr org) {
				::THookRegister(marshalString<Encoding::E_UTF8>(sym).c_str(), (void*)hook, (void**)org);
			}
			THookRegister(char const* sym, void* hook, void** org) {
				::THookRegister(sym, hook, org);
			}
		};
#undef Thook
#undef TInstanceHook
#undef TInstanceHook2

		[System::AttributeUsageAttribute(System::AttributeTargets::Class)]
		public ref class HookSymbolAttribute :public System::Attribute {
		public:
			property String^ Sym;
			HookSymbolAttribute(String^ sym) {
				Sym = sym;
			}
		};
		generic<typename TDelegate> where TDelegate : System::Delegate
			public ref class THookBase abstract
		{
		public:
			virtual property TDelegate Hook;
			virtual property TDelegate Original;
			virtual void Setup() = 0;
		};

		using namespace System::Reflection;
		public ref class Thook {
		public:
			generic<typename T, typename TDelegate>
			where TDelegate :
				System::Delegate
			where T :
				THookBase<TDelegate>, gcnew()
				static void RegisterHook()
			{
				auto instance = gcnew T();
				auto hookType = T::typeid;
				auto hookAttributes = hookType->GetCustomAttributes(HookSymbolAttribute::typeid, false);

				if (hookAttributes == nullptr || hookAttributes->Length == 0)
					throw gcnew System::NullReferenceException;

				auto sym = static_cast<HookSymbolAttribute^>(hookAttributes[0])->Sym;
				if (sym == nullptr)
					throw gcnew System::NullReferenceException;

				instance->Setup();

				if (instance->Hook == nullptr)
					throw gcnew System::NullReferenceException;

				GCHandle::Alloc(instance->Hook);
				auto pHook = (void*)Marshal::GetFunctionPointerForDelegate(instance->Hook);

				void* pOriginal = nullptr;

				::THookRegister(marshalString<Encoding::E_UTF8>(sym).c_str(), pHook, (void**)&pOriginal);
				if (pOriginal == nullptr)
					throw gcnew LLNET::Core::HookFailedException;

				instance->Original = (TDelegate)Marshal::GetDelegateForFunctionPointer(IntPtr(pOriginal), TDelegate::typeid);
			}
		};
	}
}