#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// Zenject.ConcreteIdBinderGeneric`1<Uku.Redux.IStore>
struct ConcreteIdBinderGeneric_1_tA117502D2F27B4ED5888A2D1DC55451694971712;
// Zenject.ConcreteIdBinderGeneric`1<System.Object>
struct ConcreteIdBinderGeneric_1_t554183CC8D49C38AF181B0D81B325AD95C0E1C3D;
// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>>
struct Dictionary_2_tE1E7B03BA3A829D21BE9A51E3FDD69A7E9DE2CDB;
// System.Collections.Generic.Dictionary`2<System.Type,Zenject.Internal.IDecoratorProvider>
struct Dictionary_2_tF2F41112522CE5A57537E0CBE39D292E419AAAAF;
// Zenject.FromBinderGeneric`1<Uku.Redux.IStore>
struct FromBinderGeneric_1_t42A078CCBD0D89BD4538B0E5D13A3024D191D8E9;
// Zenject.FromBinderGeneric`1<System.Object>
struct FromBinderGeneric_1_t3A7D6B5824D10333BC2160BF9C081FEE9049EBF9;
// System.Func`2<Uku.Redux.Dispatcher,Uku.Redux.Dispatcher>
struct Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99;
// System.Func`2<Uku.Redux.IReducer,Uku.Redux.IState>
struct Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<Uku.Redux.ScriptableState,Uku.Redux.IReducer>
struct Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D;
// System.Collections.Generic.HashSet`1<Zenject.Internal.LookupId>
struct HashSet_1_t2A94EE3578F0CEAF25D43A0CDC9AD05C8D29F45C;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
// System.Collections.Generic.IEnumerable`1<Uku.Redux.IReducer>
struct IEnumerable_1_tDBBA8CC5ABC759FBBF0B4387329FC47B0FF35C93;
// System.Collections.Generic.IEnumerable`1<Uku.Redux.IState>
struct IEnumerable_1_tD90DDA52A1BF500629336D1CE7CF13225D0041DF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Uku.Redux.ScriptableState>
struct IEnumerable_1_t894248679CB05CF916FB7B399FC6F52A599992B3;
// System.Collections.Generic.List`1<Zenject.BindInfo>
struct List_1_t17683DD3180C7DD880E34E71EA17CE44FE8201DE;
// System.Collections.Generic.List`1<Zenject.BindStatement>
struct List_1_t1DF267117DA969233BD90D3269D954E36CB0766A;
// System.Collections.Generic.List`1<Zenject.IValidatable>
struct List_1_t758D810E91F87AF6AF211875263F8E39E9597B16;
// System.Collections.Generic.List`1<Uku.Redux.ScriptableState>
struct List_1_t4BF4A3D1F7CEA29EF16F63C99FA75217AD1D3614;
// System.Collections.Generic.Queue`1<Zenject.BindStatement>
struct Queue_1_t7BBB9B5373202E4B52AAD47B4A9C0EBD4A75F990;
// Zenject.ScriptableObjectInstaller`1<System.Object>
struct ScriptableObjectInstaller_1_t95186882388FC7E38CF1740EB8E36BE3BBEAE896;
// Zenject.ScriptableObjectInstaller`1<Uku.Redux.ReduxZenjectInstaller>
struct ScriptableObjectInstaller_1_tBBB663B7E1B4A49C7F5EDE4FF8379F63F7DC0E38;
// Zenject.DiContainer[][]
struct DiContainerU5BU5DU5BU5D_t5E95526E0D7CC628F7C59565465CC3BC796A1FE8;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Uku.Redux.Middleware[]
struct MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676;
// Uku.Redux.ScriptableState[]
struct ScriptableStateU5BU5D_tAF742D208DE37F2FCBC97D06BD86ADAE7F205A7B;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Uku.Redux.BaseDispatcher
struct BaseDispatcher_t24F5C9F538D1D63BC434AB5FE392C97E7C6B9F45;
// Zenject.BindInfo
struct BindInfo_t0799128A181D817F225511F62C23A96620EAE096;
// Zenject.BindStatement
struct BindStatement_t99650D1624D87D8D27CC11332311BBAF41A119CE;
// Zenject.ConcreteIdArgConditionCopyNonLazyBinder
struct ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Zenject.DiContainer
struct DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF;
// Uku.Redux.Dispatcher
struct Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9;
// Uku.Redux.IAction
struct IAction_tEE68F1D8C24039F9AA9D62166E48E1BB598E5347;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Uku.Redux.IReducer
struct IReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12;
// Uku.Redux.IState
struct IState_t7F99B82F10EAE5D6C913957512A38A89BD6C3917;
// Uku.Redux.IStore
struct IStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C;
// Zenject.IfNotBoundBinder
struct IfNotBoundBinder_t79E8198CFD9343FBF7C7C2CCA52C408EAEE74FEF;
// Zenject.LazyInstanceInjector
struct LazyInstanceInjector_tAAE8E448BE307EBE6949943C0B99C6E1C5B70E31;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Uku.Redux.Middleware
struct Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Zenject.NonLazyBinder
struct NonLazyBinder_t001E27F707B939C734274507B77AF18980D5796A;
// Uku.Redux.ReduxZenjectInstaller
struct ReduxZenjectInstaller_tFA1EE16EAF2BBC912A87F2174EB8EA19A488E694;
// Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
struct ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Zenject.ScriptableObjectInstallerBase
struct ScriptableObjectInstallerBase_t598CEA441DB0D37D65067942C9B81E4C9D961BF3;
// Uku.Redux.ScriptableState
struct ScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB;
// Zenject.Internal.SingletonMarkRegistry
struct SingletonMarkRegistry_t1D412307FF53D76D077F9552496190F305427443;
// Uku.Redux.Store
struct Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162;
// Uku.Redux.StoreBehaviour
struct StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599;
// Uku.Redux.StoreObserver
struct StoreObserver_tA6E285BD00F2BB9BA4621BAB052F47BABBEB96DD;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Zenject.ZenjectSettings
struct ZenjectSettings_t94D3C549B1AF1BD9042AE75E05F8951A55B124FF;
// Uku.Redux.ReduxZenjectInstaller/<>c
struct U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2;
// Uku.Redux.Store/<>c
struct U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDBBA8CC5ABC759FBBF0B4387329FC47B0FF35C93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t13374724BEC23E89F3EB562E5376F718BD665491_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_Bind_TisIStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_m4A5BAB652D1C83E71EF1E114CFD7F26DAA1E952B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_TisIState_t7F99B82F10EAE5D6C913957512A38A89BD6C3917_m9E7BD55762F376618E36DB483A9466A8F8B1B8F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_mD47ED5016202F9DD849C9D75DBEF0156F48352E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromBinderGeneric_1_FromInstance_m13540D4A1E1FA9B7EC602022D37B44DE2A9E07E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObjectInstaller_1__ctor_mEF64300D2C11230A90CBB09F03B85C52DBC7BC35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Store_CallReducers_mC301FF0AFF50ED4157DFD3F2FFE60DBAFAE6E0C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInstallBindingsU3Eb__1_0_m1DC7472C93827FFB14299E4E59B16FF9D16D3EAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_statesU3Eb__3_0_mB2439BB90F4401957E34D229DFC94A366BA456FD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DB9B89A5EC46B7F5643814417EB455F4FF68CB 
{
};

// System.Collections.Generic.List`1<Uku.Redux.ScriptableState>
struct List_1_t4BF4A3D1F7CEA29EF16F63C99FA75217AD1D3614  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ScriptableStateU5BU5D_tAF742D208DE37F2FCBC97D06BD86ADAE7F205A7B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4BF4A3D1F7CEA29EF16F63C99FA75217AD1D3614_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ScriptableStateU5BU5D_tAF742D208DE37F2FCBC97D06BD86ADAE7F205A7B* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Zenject.DiContainer
struct DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Zenject.Internal.IDecoratorProvider> Zenject.DiContainer::_decorators
	Dictionary_2_tF2F41112522CE5A57537E0CBE39D292E419AAAAF* ____decorators_0;
	// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>> Zenject.DiContainer::_providers
	Dictionary_2_tE1E7B03BA3A829D21BE9A51E3FDD69A7E9DE2CDB* ____providers_1;
	// Zenject.DiContainer[][] Zenject.DiContainer::_containerLookups
	DiContainerU5BU5DU5BU5D_t5E95526E0D7CC628F7C59565465CC3BC796A1FE8* ____containerLookups_2;
	// System.Collections.Generic.HashSet`1<Zenject.Internal.LookupId> Zenject.DiContainer::_resolvesInProgress
	HashSet_1_t2A94EE3578F0CEAF25D43A0CDC9AD05C8D29F45C* ____resolvesInProgress_3;
	// System.Collections.Generic.HashSet`1<Zenject.Internal.LookupId> Zenject.DiContainer::_resolvesTwiceInProgress
	HashSet_1_t2A94EE3578F0CEAF25D43A0CDC9AD05C8D29F45C* ____resolvesTwiceInProgress_4;
	// Zenject.LazyInstanceInjector Zenject.DiContainer::_lazyInjector
	LazyInstanceInjector_tAAE8E448BE307EBE6949943C0B99C6E1C5B70E31* ____lazyInjector_5;
	// Zenject.Internal.SingletonMarkRegistry Zenject.DiContainer::_singletonMarkRegistry
	SingletonMarkRegistry_t1D412307FF53D76D077F9552496190F305427443* ____singletonMarkRegistry_6;
	// System.Collections.Generic.Queue`1<Zenject.BindStatement> Zenject.DiContainer::_currentBindings
	Queue_1_t7BBB9B5373202E4B52AAD47B4A9C0EBD4A75F990* ____currentBindings_7;
	// System.Collections.Generic.List`1<Zenject.BindStatement> Zenject.DiContainer::_childBindings
	List_1_t1DF267117DA969233BD90D3269D954E36CB0766A* ____childBindings_8;
	// System.Collections.Generic.HashSet`1<System.Type> Zenject.DiContainer::_validatedTypes
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ____validatedTypes_9;
	// System.Collections.Generic.List`1<Zenject.IValidatable> Zenject.DiContainer::_validationQueue
	List_1_t758D810E91F87AF6AF211875263F8E39E9597B16* ____validationQueue_10;
	// UnityEngine.Transform Zenject.DiContainer::_contextTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____contextTransform_11;
	// System.Boolean Zenject.DiContainer::_hasLookedUpContextTransform
	bool ____hasLookedUpContextTransform_12;
	// UnityEngine.Transform Zenject.DiContainer::_inheritedDefaultParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____inheritedDefaultParent_13;
	// UnityEngine.Transform Zenject.DiContainer::_explicitDefaultParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____explicitDefaultParent_14;
	// System.Boolean Zenject.DiContainer::_hasExplicitDefaultParent
	bool ____hasExplicitDefaultParent_15;
	// Zenject.ZenjectSettings Zenject.DiContainer::_settings
	ZenjectSettings_t94D3C549B1AF1BD9042AE75E05F8951A55B124FF* ____settings_16;
	// System.Boolean Zenject.DiContainer::_hasResolvedRoots
	bool ____hasResolvedRoots_17;
	// System.Boolean Zenject.DiContainer::_isFinalizingBinding
	bool ____isFinalizingBinding_18;
	// System.Boolean Zenject.DiContainer::_isValidating
	bool ____isValidating_19;
	// System.Boolean Zenject.DiContainer::_isInstalling
	bool ____isInstalling_20;
	// System.Boolean Zenject.DiContainer::<AssertOnNewGameObjects>k__BackingField
	bool ___U3CAssertOnNewGameObjectsU3Ek__BackingField_21;
};

// Zenject.IfNotBoundBinder
struct IfNotBoundBinder_t79E8198CFD9343FBF7C7C2CCA52C408EAEE74FEF  : public RuntimeObject
{
	// Zenject.BindInfo Zenject.IfNotBoundBinder::<BindInfo>k__BackingField
	BindInfo_t0799128A181D817F225511F62C23A96620EAE096* ___U3CBindInfoU3Ek__BackingField_0;
};

// Uku.Redux.Store
struct Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162  : public RuntimeObject
{
	// Uku.Redux.Dispatcher Uku.Redux.Store::_dispatcher
	Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* ____dispatcher_0;
	// System.Collections.Generic.IEnumerable`1<Uku.Redux.IReducer> Uku.Redux.Store::_reducers
	RuntimeObject* ____reducers_1;
	// System.Action Uku.Redux.Store::onStoreChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onStoreChanged_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Uku.Redux.ReduxZenjectInstaller/<>c
struct U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2  : public RuntimeObject
{
};

struct U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_StaticFields
{
	// Uku.Redux.ReduxZenjectInstaller/<>c Uku.Redux.ReduxZenjectInstaller/<>c::<>9
	U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2* ___U3CU3E9_0;
	// System.Func`2<Uku.Redux.ScriptableState,Uku.Redux.IReducer> Uku.Redux.ReduxZenjectInstaller/<>c::<>9__1_0
	Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D* ___U3CU3E9__1_0_1;
};

// Uku.Redux.Store/<>c
struct U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC  : public RuntimeObject
{
};

struct U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_StaticFields
{
	// Uku.Redux.Store/<>c Uku.Redux.Store/<>c::<>9
	U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC* ___U3CU3E9_0;
	// System.Func`2<Uku.Redux.IReducer,Uku.Redux.IState> Uku.Redux.Store/<>c::<>9__3_0
	Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52* ___U3CU3E9__3_0_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Zenject.NonLazyBinder
struct NonLazyBinder_t001E27F707B939C734274507B77AF18980D5796A  : public IfNotBoundBinder_t79E8198CFD9343FBF7C7C2CCA52C408EAEE74FEF
{
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Zenject.CopyNonLazyBinder
struct CopyNonLazyBinder_t5D5D5CE5CF4CABE5AA88742ABACA8BDCCA94E1BF  : public NonLazyBinder_t001E27F707B939C734274507B77AF18980D5796A
{
	// System.Collections.Generic.List`1<Zenject.BindInfo> Zenject.CopyNonLazyBinder::_secondaryBindInfos
	List_1_t17683DD3180C7DD880E34E71EA17CE44FE8201DE* ____secondaryBindInfos_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Zenject.ConditionCopyNonLazyBinder
struct ConditionCopyNonLazyBinder_t6999D5EDCFCAF781F58C55E53F9953B0EEEB3581  : public CopyNonLazyBinder_t5D5D5CE5CF4CABE5AA88742ABACA8BDCCA94E1BF
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Func`2<Uku.Redux.Dispatcher,Uku.Redux.Dispatcher>
struct Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99  : public MulticastDelegate_t
{
};

// System.Func`2<Uku.Redux.IReducer,Uku.Redux.IState>
struct Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<Uku.Redux.ScriptableState,Uku.Redux.IReducer>
struct Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Uku.Redux.Dispatcher
struct Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9  : public MulticastDelegate_t
{
};

// Zenject.InstantiateCallbackConditionCopyNonLazyBinder
struct InstantiateCallbackConditionCopyNonLazyBinder_tE521FBBFBBECB8492844B056C3C2896C84FED7DE  : public ConditionCopyNonLazyBinder_t6999D5EDCFCAF781F58C55E53F9953B0EEEB3581
{
};

// Uku.Redux.Middleware
struct Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C  : public MulticastDelegate_t
{
};

// Zenject.ScriptableObjectInstallerBase
struct ScriptableObjectInstallerBase_t598CEA441DB0D37D65067942C9B81E4C9D961BF3  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Zenject.DiContainer Zenject.ScriptableObjectInstallerBase::_container
	DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ____container_4;
};

// Uku.Redux.ScriptableState
struct ScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Action Uku.Redux.ScriptableState::onStateChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onStateChanged_4;
};

// Zenject.ArgConditionCopyNonLazyBinder
struct ArgConditionCopyNonLazyBinder_t14950039EFF2F2D7578B272C2771652B9A135238  : public InstantiateCallbackConditionCopyNonLazyBinder_tE521FBBFBBECB8492844B056C3C2896C84FED7DE
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Zenject.ScriptableObjectInstaller
struct ScriptableObjectInstaller_tDBA5DAF6C66567E99621DA3F313B5E9C9FCA065C  : public ScriptableObjectInstallerBase_t598CEA441DB0D37D65067942C9B81E4C9D961BF3
{
};

// Zenject.ScriptableObjectInstaller`1<Uku.Redux.ReduxZenjectInstaller>
struct ScriptableObjectInstaller_1_tBBB663B7E1B4A49C7F5EDE4FF8379F63F7DC0E38  : public ScriptableObjectInstaller_tDBA5DAF6C66567E99621DA3F313B5E9C9FCA065C
{
};

// Uku.Redux.BaseDispatcher
struct BaseDispatcher_t24F5C9F538D1D63BC434AB5FE392C97E7C6B9F45  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Uku.Redux.IStore Uku.Redux.BaseDispatcher::_store
	RuntimeObject* ____store_4;
};

// Zenject.ConcreteIdArgConditionCopyNonLazyBinder
struct ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48  : public ArgConditionCopyNonLazyBinder_t14950039EFF2F2D7578B272C2771652B9A135238
{
};

// Uku.Redux.StoreBehaviour
struct StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Uku.Redux.IStore Uku.Redux.StoreBehaviour::<_store>k__BackingField
	RuntimeObject* ___U3C_storeU3Ek__BackingField_4;
};

// Uku.Redux.ReduxZenjectInstaller
struct ReduxZenjectInstaller_tFA1EE16EAF2BBC912A87F2174EB8EA19A488E694  : public ScriptableObjectInstaller_1_tBBB663B7E1B4A49C7F5EDE4FF8379F63F7DC0E38
{
	// System.Collections.Generic.List`1<Uku.Redux.ScriptableState> Uku.Redux.ReduxZenjectInstaller::_initialStateData
	List_1_t4BF4A3D1F7CEA29EF16F63C99FA75217AD1D3614* ____initialStateData_5;
};

// Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
struct ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15  : public ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48
{
};

// Uku.Redux.StoreObserver
struct StoreObserver_tA6E285BD00F2BB9BA4621BAB052F47BABBEB96DD  : public StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599
{
};

// Zenject.FromBinder
struct FromBinder_t16D122B6FB967F84975845C1180421E2D2EF6B49  : public ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15
{
	// Zenject.DiContainer Zenject.FromBinder::<BindContainer>k__BackingField
	DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ___U3CBindContainerU3Ek__BackingField_2;
	// Zenject.BindStatement Zenject.FromBinder::<BindStatement>k__BackingField
	BindStatement_t99650D1624D87D8D27CC11332311BBAF41A119CE* ___U3CBindStatementU3Ek__BackingField_3;
};

// Zenject.FromBinderGeneric`1<Uku.Redux.IStore>
struct FromBinderGeneric_1_t42A078CCBD0D89BD4538B0E5D13A3024D191D8E9  : public FromBinder_t16D122B6FB967F84975845C1180421E2D2EF6B49
{
};

// Zenject.ConcreteBinderGeneric`1<Uku.Redux.IStore>
struct ConcreteBinderGeneric_1_tEE62ADC7BF42F89099D55A34F94576220C75E24B  : public FromBinderGeneric_1_t42A078CCBD0D89BD4538B0E5D13A3024D191D8E9
{
};

// Zenject.ConcreteIdBinderGeneric`1<Uku.Redux.IStore>
struct ConcreteIdBinderGeneric_1_tA117502D2F27B4ED5888A2D1DC55451694971712  : public ConcreteBinderGeneric_1_tEE62ADC7BF42F89099D55A34F94576220C75E24B
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Uku.Redux.Middleware[]
struct MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676  : public RuntimeArray
{
	ALIGN_FIELD (8) Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* m_Items[1];

	inline Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Zenject.ConcreteIdBinderGeneric`1<TContract> Zenject.DiContainer::Bind<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConcreteIdBinderGeneric_1_t554183CC8D49C38AF181B0D81B325AD95C0E1C3D* DiContainer_Bind_TisRuntimeObject_mB9EC9A3972D1EB058FFE497F1B5C957662C16EE1_gshared (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.FromBinderGeneric`1<System.Object>::FromInstance(TContract)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15* FromBinderGeneric_1_FromInstance_mAF9469C04ACC6C354DBFE590E6D703532F043171_gshared (FromBinderGeneric_1_t3A7D6B5824D10333BC2160BF9C081FEE9049EBF9* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Void Zenject.ScriptableObjectInstaller`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObjectInstaller_1__ctor_m4449DED3F9913E91B95E727F418F36BE4BD69E36_gshared (ScriptableObjectInstaller_1_t95186882388FC7E38CF1740EB8E36BE3BBEAE896* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;

// Zenject.DiContainer Zenject.ScriptableObjectInstallerBase::get_Container()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ScriptableObjectInstallerBase_get_Container_m98B8B8F0DB8C34DFAAB91D17FDC4CCAF66906C0B_inline (ScriptableObjectInstallerBase_t598CEA441DB0D37D65067942C9B81E4C9D961BF3* __this, const RuntimeMethod* method) ;
// Zenject.ConcreteIdBinderGeneric`1<TContract> Zenject.DiContainer::Bind<Uku.Redux.IStore>()
inline ConcreteIdBinderGeneric_1_tA117502D2F27B4ED5888A2D1DC55451694971712* DiContainer_Bind_TisIStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_m4A5BAB652D1C83E71EF1E114CFD7F26DAA1E952B (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* __this, const RuntimeMethod* method)
{
	return ((  ConcreteIdBinderGeneric_1_tA117502D2F27B4ED5888A2D1DC55451694971712* (*) (DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF*, const RuntimeMethod*))DiContainer_Bind_TisRuntimeObject_mB9EC9A3972D1EB058FFE497F1B5C957662C16EE1_gshared)(__this, method);
}
// System.Void System.Func`2<Uku.Redux.ScriptableState,Uku.Redux.IReducer>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE4AB79C76A14B418929F1FBC025691B14B050AB1 (Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Uku.Redux.ScriptableState,Uku.Redux.IReducer>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_mD47ED5016202F9DD849C9D75DBEF0156F48352E4 (RuntimeObject* ___source0, Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void Uku.Redux.Store::.ctor(System.Collections.Generic.IEnumerable`1<Uku.Redux.IReducer>,Uku.Redux.Middleware[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store__ctor_m70DCDEA21C517A4C86386832748A538466E30ACA (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* __this, RuntimeObject* ___reducers0, MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* ___middlewares1, const RuntimeMethod* method) ;
// Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject.FromBinderGeneric`1<Uku.Redux.IStore>::FromInstance(TContract)
inline ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15* FromBinderGeneric_1_FromInstance_m13540D4A1E1FA9B7EC602022D37B44DE2A9E07E2 (FromBinderGeneric_1_t42A078CCBD0D89BD4538B0E5D13A3024D191D8E9* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	return ((  ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15* (*) (FromBinderGeneric_1_t42A078CCBD0D89BD4538B0E5D13A3024D191D8E9*, RuntimeObject*, const RuntimeMethod*))FromBinderGeneric_1_FromInstance_mAF9469C04ACC6C354DBFE590E6D703532F043171_gshared)(__this, ___instance0, method);
}
// Zenject.ConcreteIdArgConditionCopyNonLazyBinder Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder::AsSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48* ScopeConcreteIdArgConditionCopyNonLazyBinder_AsSingle_mB57F46824A4D941E55551207E05B4B7319818254 (ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15* __this, const RuntimeMethod* method) ;
// Zenject.IfNotBoundBinder Zenject.NonLazyBinder::NonLazy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IfNotBoundBinder_t79E8198CFD9343FBF7C7C2CCA52C408EAEE74FEF* NonLazyBinder_NonLazy_mC6CA85601F63A547C4FC7C78A47B14883FBEB95F (NonLazyBinder_t001E27F707B939C734274507B77AF18980D5796A* __this, const RuntimeMethod* method) ;
// System.Void Zenject.ScriptableObjectInstaller`1<Uku.Redux.ReduxZenjectInstaller>::.ctor()
inline void ScriptableObjectInstaller_1__ctor_mEF64300D2C11230A90CBB09F03B85C52DBC7BC35 (ScriptableObjectInstaller_1_tBBB663B7E1B4A49C7F5EDE4FF8379F63F7DC0E38* __this, const RuntimeMethod* method)
{
	((  void (*) (ScriptableObjectInstaller_1_tBBB663B7E1B4A49C7F5EDE4FF8379F63F7DC0E38*, const RuntimeMethod*))ScriptableObjectInstaller_1__ctor_m4449DED3F9913E91B95E727F418F36BE4BD69E36_gshared)(__this, method);
}
// System.Void Uku.Redux.ReduxZenjectInstaller/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31714B1FC7AF75EDD4106AE1533F567BEDA4675D (U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Uku.Redux.IReducer,Uku.Redux.IState>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB69FA12644CF03D79773764C9992482E8757BE79 (Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Uku.Redux.IReducer,Uku.Redux.IState>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_TisIState_t7F99B82F10EAE5D6C913957512A38A89BD6C3917_m9E7BD55762F376618E36DB483A9466A8F8B1B8F2 (RuntimeObject* ___source0, Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// Uku.Redux.Dispatcher Uku.Redux.Store::ApplyMiddlewares(Uku.Redux.Middleware[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* Store_ApplyMiddlewares_mC3D1780B65F31501A812C9EDB753A526BC35A46F (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* __this, MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* ___middlewares0, const RuntimeMethod* method) ;
// System.Void Uku.Redux.Dispatcher::Invoke(Uku.Redux.IAction)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_inline (Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method) ;
// System.Void Uku.Redux.Dispatcher::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_mC1AE613EA2CF9C4B30FFF36CBC71B60051D39A71 (Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Func`2<Uku.Redux.Dispatcher,Uku.Redux.Dispatcher> Uku.Redux.Middleware::Invoke(Uku.Redux.IStore)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_inline (Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method) ;
// TResult System.Func`2<Uku.Redux.Dispatcher,Uku.Redux.Dispatcher>::Invoke(T)
inline Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* Func_2_Invoke_m7DB1ECCFB154F1B86D999C243F78E72D349ED0E5_inline (Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* __this, Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* ___arg0, const RuntimeMethod* method)
{
	return ((  Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* (*) (Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99*, Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void Uku.Redux.Store/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6293AF37A0AEA03490619B0B08A7FDDE4B573AB3 (U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC* __this, const RuntimeMethod* method) ;
// System.Void Uku.Redux.StoreBehaviour::set__store(Uku.Redux.IStore)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StoreBehaviour_set__store_mBF01250436B129258836E20C2D338D8C8AD15B6D_inline (StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Uku.Redux.IStore Uku.Redux.StoreBehaviour::get__store()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StoreBehaviour_get__store_m756F9782339F7D1CA40577DAFE433E9C6B80F122_inline (StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Uku.Redux.StoreBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreBehaviour__ctor_m1556D9E99A734E7A870EF660C92CAA2B1A5F37D8 (StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Uku.Redux.ReduxZenjectInstaller::InstallBindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReduxZenjectInstaller_InstallBindings_mC30281739CDCE560733BA031669E138DB8156A1F (ReduxZenjectInstaller_tFA1EE16EAF2BBC912A87F2174EB8EA19A488E694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_Bind_TisIStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_m4A5BAB652D1C83E71EF1E114CFD7F26DAA1E952B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_mD47ED5016202F9DD849C9D75DBEF0156F48352E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromBinderGeneric_1_FromInstance_m13540D4A1E1FA9B7EC602022D37B44DE2A9E07E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInstallBindingsU3Eb__1_0_m1DC7472C93827FFB14299E4E59B16FF9D16D3EAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D* G_B2_0 = NULL;
	List_1_t4BF4A3D1F7CEA29EF16F63C99FA75217AD1D3614* G_B2_1 = NULL;
	ConcreteIdBinderGeneric_1_tA117502D2F27B4ED5888A2D1DC55451694971712* G_B2_2 = NULL;
	Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D* G_B1_0 = NULL;
	List_1_t4BF4A3D1F7CEA29EF16F63C99FA75217AD1D3614* G_B1_1 = NULL;
	ConcreteIdBinderGeneric_1_tA117502D2F27B4ED5888A2D1DC55451694971712* G_B1_2 = NULL;
	{
		// Container.Bind<IStore>().FromInstance(new Store(_initialStateData.Select(s => s.CreateReducer()), InstallMiddleware())).AsSingle().NonLazy();
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_0;
		L_0 = ScriptableObjectInstallerBase_get_Container_m98B8B8F0DB8C34DFAAB91D17FDC4CCAF66906C0B_inline(__this, NULL);
		NullCheck(L_0);
		ConcreteIdBinderGeneric_1_tA117502D2F27B4ED5888A2D1DC55451694971712* L_1;
		L_1 = DiContainer_Bind_TisIStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_m4A5BAB652D1C83E71EF1E114CFD7F26DAA1E952B(L_0, DiContainer_Bind_TisIStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_m4A5BAB652D1C83E71EF1E114CFD7F26DAA1E952B_RuntimeMethod_var);
		List_1_t4BF4A3D1F7CEA29EF16F63C99FA75217AD1D3614* L_2 = __this->____initialStateData_5;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var);
		Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D* L_3 = ((U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var);
		U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2* L_5 = ((U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D* L_6 = (Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D*)il2cpp_codegen_object_new(Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mE4AB79C76A14B418929F1FBC025691B14B050AB1(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CInstallBindingsU3Eb__1_0_m1DC7472C93827FFB14299E4E59B16FF9D16D3EAE_RuntimeMethod_var), NULL);
		Func_2_tA60037F66A9962FC7CC33F30037520EF1DAFB38D* L_7 = L_6;
		((U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0030:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_mD47ED5016202F9DD849C9D75DBEF0156F48352E4(G_B2_1, G_B2_0, Enumerable_Select_TisScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_mD47ED5016202F9DD849C9D75DBEF0156F48352E4_RuntimeMethod_var);
		MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* L_9;
		L_9 = VirtualFuncInvoker0< MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* >::Invoke(7 /* Uku.Redux.Middleware[] Uku.Redux.ReduxZenjectInstaller::InstallMiddleware() */, __this);
		Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* L_10 = (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162*)il2cpp_codegen_object_new(Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Store__ctor_m70DCDEA21C517A4C86386832748A538466E30ACA(L_10, L_8, L_9, NULL);
		NullCheck(G_B2_2);
		ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15* L_11;
		L_11 = FromBinderGeneric_1_FromInstance_m13540D4A1E1FA9B7EC602022D37B44DE2A9E07E2(G_B2_2, L_10, FromBinderGeneric_1_FromInstance_m13540D4A1E1FA9B7EC602022D37B44DE2A9E07E2_RuntimeMethod_var);
		NullCheck(L_11);
		ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48* L_12;
		L_12 = ScopeConcreteIdArgConditionCopyNonLazyBinder_AsSingle_mB57F46824A4D941E55551207E05B4B7319818254(L_11, NULL);
		NullCheck(L_12);
		IfNotBoundBinder_t79E8198CFD9343FBF7C7C2CCA52C408EAEE74FEF* L_13;
		L_13 = NonLazyBinder_NonLazy_mC6CA85601F63A547C4FC7C78A47B14883FBEB95F(L_12, NULL);
		// }
		return;
	}
}
// Uku.Redux.Middleware[] Uku.Redux.ReduxZenjectInstaller::InstallMiddleware()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* ReduxZenjectInstaller_InstallMiddleware_m6970D607316B39FE59405D99E9915051DF643D6C (ReduxZenjectInstaller_tFA1EE16EAF2BBC912A87F2174EB8EA19A488E694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Middleware[]
		// {
		// 
		// };
		MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* L_0 = (MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676*)(MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676*)SZArrayNew(MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_0;
	}
}
// System.Void Uku.Redux.ReduxZenjectInstaller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReduxZenjectInstaller__ctor_mD4A3135BD01E7B4E030D986CB9981DD71AAF4D9F (ReduxZenjectInstaller_tFA1EE16EAF2BBC912A87F2174EB8EA19A488E694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObjectInstaller_1__ctor_mEF64300D2C11230A90CBB09F03B85C52DBC7BC35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableObjectInstaller_1__ctor_mEF64300D2C11230A90CBB09F03B85C52DBC7BC35(__this, ScriptableObjectInstaller_1__ctor_mEF64300D2C11230A90CBB09F03B85C52DBC7BC35_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Uku.Redux.ReduxZenjectInstaller/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m906B11D680A1F2B22E194DD979282EB0E2330349 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2* L_0 = (U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2*)il2cpp_codegen_object_new(U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m31714B1FC7AF75EDD4106AE1533F567BEDA4675D(L_0, NULL);
		((U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Uku.Redux.ReduxZenjectInstaller/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31714B1FC7AF75EDD4106AE1533F567BEDA4675D (U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Uku.Redux.IReducer Uku.Redux.ReduxZenjectInstaller/<>c::<InstallBindings>b__1_0(Uku.Redux.ScriptableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CInstallBindingsU3Eb__1_0_m1DC7472C93827FFB14299E4E59B16FF9D16D3EAE (U3CU3Ec_t0D1E810B2FCCFA2731AF3982F3A8364215BAB2E2* __this, ScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB* ___s0, const RuntimeMethod* method) 
{
	{
		// Container.Bind<IStore>().FromInstance(new Store(_initialStateData.Select(s => s.CreateReducer()), InstallMiddleware())).AsSingle().NonLazy();
		ScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB* L_0 = ___s0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* Uku.Redux.IReducer Uku.Redux.ScriptableState::CreateReducer() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Uku.Redux.BaseDispatcher::Construct(Uku.Redux.IStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDispatcher_Construct_mD4B8F165BF21B71FF51D846AB796D2D54EC7A5D2 (BaseDispatcher_t24F5C9F538D1D63BC434AB5FE392C97E7C6B9F45* __this, RuntimeObject* ___store0, const RuntimeMethod* method) 
{
	{
		// [Inject] private void Construct(IStore store) => _store = store;
		RuntimeObject* L_0 = ___store0;
		__this->____store_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____store_4), (void*)L_0);
		return;
	}
}
// System.Void Uku.Redux.BaseDispatcher::Dispatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDispatcher_Dispatch_m8348BEDBFE8D255E9B68EA999BD7837BB20A342B (BaseDispatcher_t24F5C9F538D1D63BC434AB5FE392C97E7C6B9F45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispatch() => _store.Dispatch(action);
		RuntimeObject* L_0 = __this->____store_4;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Uku.Redux.IAction Uku.Redux.BaseDispatcher::get_action() */, __this);
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Uku.Redux.IStore::Dispatch(Uku.Redux.IAction) */, IStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void Uku.Redux.BaseDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDispatcher__ctor_mAA9908F368BCF1C7E1E3034F4EEF4C19015458FD (BaseDispatcher_t24F5C9F538D1D63BC434AB5FE392C97E7C6B9F45* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_Multicast(Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* currentDelegate = reinterpret_cast<Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_Open(Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___action0, method);
}
void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenStaticInvoker(Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___action0);
}
void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_ClosedStaticInvoker(Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___action0);
}
void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenVirtual(Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___action0);
}
void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenInterface(Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___action0);
}
void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenGenericVirtual(Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___action0);
}
void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenGenericInterface(Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___action0);
}
// System.Void Uku.Redux.Dispatcher::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_mC1AE613EA2CF9C4B30FFF36CBC71B60051D39A71 (Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_Multicast;
}
// System.Void Uku.Redux.Dispatcher::Invoke(Uku.Redux.IAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786 (Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Uku.Redux.Dispatcher::BeginInvoke(Uku.Redux.IAction,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dispatcher_BeginInvoke_m4F1A655E711A3E132D6FA9841881F7A61846986E (Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___action0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Uku.Redux.Dispatcher::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_EndInvoke_m1E588818C94C1731F5E56D436A743CB8421AF558 (Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_Multicast(Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* currentDelegate = reinterpret_cast<Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C*>(delegatesToInvoke[i]);
		typedef Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___store0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_Open(Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method)
{
	typedef Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___store0, method);
}
Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenStaticInvoker(Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___store0);
}
Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_ClosedStaticInvoker(Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___store0);
}
Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenVirtual(Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* >::Invoke(il2cpp_codegen_method_get_slot(method), ___store0);
}
Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenInterface(Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___store0);
}
Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenGenericVirtual(Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* >::Invoke(method, ___store0);
}
Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenGenericInterface(Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* >::Invoke(method, ___store0);
}
// System.Void Uku.Redux.Middleware::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Middleware__ctor_m215C4232F44E61415648CBF94AAC761FBFFF48FD (Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_Multicast;
}
// System.Func`2<Uku.Redux.Dispatcher,Uku.Redux.Dispatcher> Uku.Redux.Middleware::Invoke(Uku.Redux.IStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924 (Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method) 
{
	typedef Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___store0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Uku.Redux.Middleware::BeginInvoke(Uku.Redux.IStore,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Middleware_BeginInvoke_mABC9006311728C3AB449FD84F87242D6066F27F1 (Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___store0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Func`2<Uku.Redux.Dispatcher,Uku.Redux.Dispatcher> Uku.Redux.Middleware::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_EndInvoke_m8CA926F11F29A86BAFF672BFC72B20D4A6FA91B1 (Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Uku.Redux.ScriptableState::add_onStateChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableState_add_onStateChanged_m0F772A3EC15FC3724E80875633BA308FA6F34270 (ScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onStateChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___onStateChanged_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uku.Redux.ScriptableState::remove_onStateChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableState_remove_onStateChanged_m15C5102B51495DC93DBFC2BC541F6079328442A7 (ScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onStateChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___onStateChanged_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uku.Redux.ScriptableState::SetChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableState_SetChanged_m033F15D822EF6F690DDE2A7DDF1647DD81983CA7 (ScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// onStateChanged?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onStateChanged_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Uku.Redux.ScriptableState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableState__ctor_mEF5C93CB67EB7FA533B70E41C183B30A76B2D205 (ScriptableState_tF263723A1E1FDCA161AC2965182E4C8B23BEACCB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerable`1<Uku.Redux.IState> Uku.Redux.Store::get_states()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Store_get_states_mD6E39E30F10B97287C85A53581CA056E45AFBD7A (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_TisIState_t7F99B82F10EAE5D6C913957512A38A89BD6C3917_m9E7BD55762F376618E36DB483A9466A8F8B1B8F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_statesU3Eb__3_0_mB2439BB90F4401957E34D229DFC94A366BA456FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// public IEnumerable<IState> states => _reducers.Select(r => r.state);
		RuntimeObject* L_0 = __this->____reducers_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var);
		Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52* L_1 = ((U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var);
		U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC* L_3 = ((U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52* L_4 = (Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52*)il2cpp_codegen_object_new(Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mB69FA12644CF03D79773764C9992482E8757BE79(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3Cget_statesU3Eb__3_0_mB2439BB90F4401957E34D229DFC94A366BA456FD_RuntimeMethod_var), NULL);
		Func_2_t18B0AB6AF971DF0769CD995ED01D72BF4E025D52* L_5 = L_4;
		((U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_TisIState_t7F99B82F10EAE5D6C913957512A38A89BD6C3917_m9E7BD55762F376618E36DB483A9466A8F8B1B8F2(G_B2_1, G_B2_0, Enumerable_Select_TisIReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_TisIState_t7F99B82F10EAE5D6C913957512A38A89BD6C3917_m9E7BD55762F376618E36DB483A9466A8F8B1B8F2_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void Uku.Redux.Store::add_onStoreChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_add_onStoreChanged_m2ED90518038FFC95F8CF73048B968E0222B759E5 (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onStoreChanged_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___onStoreChanged_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uku.Redux.Store::remove_onStoreChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_remove_onStoreChanged_m2CF37C3157E275955A5D62E92B74D59E777C9605 (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onStoreChanged_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___onStoreChanged_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uku.Redux.Store::.ctor(System.Collections.Generic.IEnumerable`1<Uku.Redux.IReducer>,Uku.Redux.Middleware[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store__ctor_m70DCDEA21C517A4C86386832748A538466E30ACA (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* __this, RuntimeObject* ___reducers0, MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* ___middlewares1, const RuntimeMethod* method) 
{
	{
		// public Store(IEnumerable<IReducer> reducers, params Middleware[] middlewares)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _reducers = reducers;
		RuntimeObject* L_0 = ___reducers0;
		__this->____reducers_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reducers_1), (void*)L_0);
		// _dispatcher = ApplyMiddlewares(middlewares);
		MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* L_1 = ___middlewares1;
		Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* L_2;
		L_2 = Store_ApplyMiddlewares_mC3D1780B65F31501A812C9EDB753A526BC35A46F(__this, L_1, NULL);
		__this->____dispatcher_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dispatcher_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void Uku.Redux.Store::Dispatch(Uku.Redux.IAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_Dispatch_mA080EFEEA07E030F672ABCDECA6ADE6114561368 (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* __this, RuntimeObject* ___action0, const RuntimeMethod* method) 
{
	{
		// _dispatcher(action);
		Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* L_0 = __this->____dispatcher_0;
		RuntimeObject* L_1 = ___action0;
		NullCheck(L_0);
		Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// Uku.Redux.Dispatcher Uku.Redux.Store::ApplyMiddlewares(Uku.Redux.Middleware[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* Store_ApplyMiddlewares_mC3D1780B65F31501A812C9EDB753A526BC35A46F (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* __this, MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* ___middlewares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_CallReducers_mC301FF0AFF50ED4157DFD3F2FFE60DBAFAE6E0C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* V_0 = NULL;
	MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Dispatcher dispatcher = CallReducers;
		Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* L_0 = (Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9*)il2cpp_codegen_object_new(Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dispatcher__ctor_mC1AE613EA2CF9C4B30FFF36CBC71B60051D39A71(L_0, __this, (intptr_t)((void*)Store_CallReducers_mC301FF0AFF50ED4157DFD3F2FFE60DBAFAE6E0C9_RuntimeMethod_var), NULL);
		V_0 = L_0;
		// foreach (var middleware in middlewares)
		MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* L_1 = ___middlewares0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0027;
	}

IL_0013:
	{
		// foreach (var middleware in middlewares)
		MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// dispatcher = middleware(this)(dispatcher);
		NullCheck(L_5);
		Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* L_6;
		L_6 = Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_inline(L_5, __this, NULL);
		Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* L_7 = V_0;
		NullCheck(L_6);
		Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* L_8;
		L_8 = Func_2_Invoke_m7DB1ECCFB154F1B86D999C243F78E72D349ED0E5_inline(L_6, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0027:
	{
		// foreach (var middleware in middlewares)
		int32_t L_10 = V_2;
		MiddlewareU5BU5D_tB00D4EA6C68743395207F09ED4B185B719741676* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// return dispatcher;
		Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* L_12 = V_0;
		return L_12;
	}
}
// System.Void Uku.Redux.Store::CallReducers(Uku.Redux.IAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_CallReducers_mC301FF0AFF50ED4157DFD3F2FFE60DBAFAE6E0C9 (Store_tE93F65B8C0F2BE057060DB782EA8D2900D190162* __this, RuntimeObject* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDBBA8CC5ABC759FBBF0B4387329FC47B0FF35C93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t13374724BEC23E89F3EB562E5376F718BD665491_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B12_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B11_0 = NULL;
	{
		// var isReduced = false;
		V_0 = (bool)0;
		// foreach (var reducer in _reducers)
		RuntimeObject* L_0 = __this->____reducers_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Uku.Redux.IReducer>::GetEnumerator() */, IEnumerable_1_tDBBA8CC5ABC759FBBF0B4387329FC47B0FF35C93_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_0033;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0033:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_0010_1:
			{
				// foreach (var reducer in _reducers)
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Uku.Redux.IReducer>::get_Current() */, IEnumerator_1_t13374724BEC23E89F3EB562E5376F718BD665491_il2cpp_TypeInfo_var, L_4);
				// if (reducer.Reduce(action))
				RuntimeObject* L_6 = ___action0;
				NullCheck(L_5);
				bool L_7;
				L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(1 /* System.Boolean Uku.Redux.IReducer::Reduce(Uku.Redux.IAction) */, IReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_il2cpp_TypeInfo_var, L_5, L_6);
				if (!L_7)
				{
					goto IL_0020_1;
				}
			}
			{
				// isReduced = true;
				V_0 = (bool)1;
			}

IL_0020_1:
			{
				// foreach (var reducer in _reducers)
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// if (isReduced)
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		// onStoreChanged?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = __this->___onStoreChanged_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = L_11;
		G_B11_0 = L_12;
		if (L_12)
		{
			G_B12_0 = L_12;
			goto IL_0042;
		}
	}
	{
		return;
	}

IL_0042:
	{
		NullCheck(G_B12_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B12_0, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Uku.Redux.Store/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC6646D75ADFA77E4723E7C741E4B88D7805CEEB8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC* L_0 = (U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC*)il2cpp_codegen_object_new(U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6293AF37A0AEA03490619B0B08A7FDDE4B573AB3(L_0, NULL);
		((U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Uku.Redux.Store/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6293AF37A0AEA03490619B0B08A7FDDE4B573AB3 (U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Uku.Redux.IState Uku.Redux.Store/<>c::<get_states>b__3_0(Uku.Redux.IReducer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3Cget_statesU3Eb__3_0_mB2439BB90F4401957E34D229DFC94A366BA456FD (U3CU3Ec_t565B58682E3CE5106D32358E3A82267CE6D8A6AC* __this, RuntimeObject* ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerable<IState> states => _reducers.Select(r => r.state);
		RuntimeObject* L_0 = ___r0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Uku.Redux.IState Uku.Redux.IReducer::get_state() */, IReducer_t6F20C4BF74559E31CE73942329DDEB1EF2ED8F12_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Uku.Redux.IStore Uku.Redux.StoreBehaviour::get__store()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StoreBehaviour_get__store_m756F9782339F7D1CA40577DAFE433E9C6B80F122 (StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599* __this, const RuntimeMethod* method) 
{
	{
		// protected IStore _store { get; private set; }
		RuntimeObject* L_0 = __this->___U3C_storeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Uku.Redux.StoreBehaviour::set__store(Uku.Redux.IStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreBehaviour_set__store_mBF01250436B129258836E20C2D338D8C8AD15B6D (StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// protected IStore _store { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3C_storeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_storeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Uku.Redux.StoreBehaviour::Construct(Uku.Redux.IStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreBehaviour_Construct_m7E5F510B3005AF7C026E530F0CF8A53A1158E78B (StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599* __this, RuntimeObject* ___store0, const RuntimeMethod* method) 
{
	{
		// _store = store;
		RuntimeObject* L_0 = ___store0;
		StoreBehaviour_set__store_mBF01250436B129258836E20C2D338D8C8AD15B6D_inline(__this, L_0, NULL);
		// OnStoreAvailable();
		VirtualActionInvoker0::Invoke(4 /* System.Void Uku.Redux.StoreBehaviour::OnStoreAvailable() */, __this);
		// }
		return;
	}
}
// System.Void Uku.Redux.StoreBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreBehaviour__ctor_m1556D9E99A734E7A870EF660C92CAA2B1A5F37D8 (StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Uku.Redux.StoreObserver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreObserver_OnEnable_m7D8DC628173809C10536ACBFF095DF1B571C1619 (StoreObserver_tA6E285BD00F2BB9BA4621BAB052F47BABBEB96DD* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnEnable() => Subscribe();
		VirtualActionInvoker0::Invoke(7 /* System.Void Uku.Redux.StoreObserver::Subscribe() */, __this);
		return;
	}
}
// System.Void Uku.Redux.StoreObserver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreObserver_OnDisable_mD7BF6BCE6009F6E662B7BABEEDDC0EE59ECB25F1 (StoreObserver_tA6E285BD00F2BB9BA4621BAB052F47BABBEB96DD* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnDisable() => Unsubscribe();
		VirtualActionInvoker0::Invoke(8 /* System.Void Uku.Redux.StoreObserver::Unsubscribe() */, __this);
		return;
	}
}
// System.Void Uku.Redux.StoreObserver::OnStoreAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreObserver_OnStoreAvailable_mE320204AA81E4BFC8B672F0CFBFA7F5897CAD8E2 (StoreObserver_tA6E285BD00F2BB9BA4621BAB052F47BABBEB96DD* __this, const RuntimeMethod* method) 
{
	{
		// Subscribe();
		VirtualActionInvoker0::Invoke(7 /* System.Void Uku.Redux.StoreObserver::Subscribe() */, __this);
		// }
		return;
	}
}
// System.Void Uku.Redux.StoreObserver::Subscribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreObserver_Subscribe_m906E06B48635F193B8B34E84F3BF395FE926C6C4 (StoreObserver_tA6E285BD00F2BB9BA4621BAB052F47BABBEB96DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_store == null)
		RuntimeObject* L_0;
		L_0 = StoreBehaviour_get__store_m756F9782339F7D1CA40577DAFE433E9C6B80F122_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _store.onStoreChanged += OnStoreChanged;
		RuntimeObject* L_1;
		L_1 = StoreBehaviour_get__store_m756F9782339F7D1CA40577DAFE433E9C6B80F122_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(3 /* System.Void Uku.Redux.IStore::add_onStoreChanged(System.Action) */, IStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Uku.Redux.StoreObserver::Unsubscribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreObserver_Unsubscribe_m8A98DC260BA0530C0A3A7D925DCF3D6F6685A49E (StoreObserver_tA6E285BD00F2BB9BA4621BAB052F47BABBEB96DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _store.onStoreChanged -= OnStoreChanged;
		RuntimeObject* L_0;
		L_0 = StoreBehaviour_get__store_m756F9782339F7D1CA40577DAFE433E9C6B80F122_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(4 /* System.Void Uku.Redux.IStore::remove_onStoreChanged(System.Action) */, IStore_t9375301F06FCF0D1D07EB5F71691A698B4A3C50C_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Uku.Redux.StoreObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreObserver__ctor_mCC0EA342D317770A7574561382B0C373AF194A09 (StoreObserver_tA6E285BD00F2BB9BA4621BAB052F47BABBEB96DD* __this, const RuntimeMethod* method) 
{
	{
		StoreBehaviour__ctor_m1556D9E99A734E7A870EF660C92CAA2B1A5F37D8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ScriptableObjectInstallerBase_get_Container_m98B8B8F0DB8C34DFAAB91D17FDC4CCAF66906C0B_inline (ScriptableObjectInstallerBase_t598CEA441DB0D37D65067942C9B81E4C9D961BF3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _container; }
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_0 = __this->____container_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_Invoke_mB7BAC96FCF398C4CDD3F79E4CE40CB6420313786_inline (Dispatcher_t90782083AF0A81D896EA36921E91DA00B39FE5B9* __this, RuntimeObject* ___action0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* Middleware_Invoke_mDEFE8087C2E56F33C0DD7988BAC3D6CD0CA8C924_inline (Middleware_t23021EB7B08EA4585947E1C282296D96FAED703C* __this, RuntimeObject* ___store0, const RuntimeMethod* method) 
{
	typedef Func_2_tBD80C7F0967797121571FFC803349B9DDC257E99* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___store0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StoreBehaviour_set__store_mBF01250436B129258836E20C2D338D8C8AD15B6D_inline (StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// protected IStore _store { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3C_storeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_storeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StoreBehaviour_get__store_m756F9782339F7D1CA40577DAFE433E9C6B80F122_inline (StoreBehaviour_t93331D77FDFE9699D7D9F1B2DB5915A029170599* __this, const RuntimeMethod* method) 
{
	{
		// protected IStore _store { get; private set; }
		RuntimeObject* L_0 = __this->___U3C_storeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
