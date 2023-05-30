#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Photon.Realtime.Demo.ConnectInterestManagement
struct ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// ExitGames.Client.Photon.EventData
struct EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Photon.Realtime.MonoBehaviourEmpty
struct MonoBehaviourEmpty_t8BBCD2C733FF1AA5B134D7290654C2869AA7C2E9;
// NetworkedItem
struct NetworkedItem_t3EE7A0E8BFA80E85D814A5B6AE3CFD61FC062060;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// RaiseEvent
struct RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C;
// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// RaiseEvent/<EventSenderCoroutine>d__14
struct U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8;
// RaiseEvent/<StartCoroutine>d__5
struct U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF;
// RaiseEvent/InRoomOptions
struct InRoomOptions_t4A2975DAA6A565ACAAE164FF0E1A39118A01E4CA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F;
IL2CPP_EXTERN_C String_t* _stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895;
IL2CPP_EXTERN_C String_t* _stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75;
IL2CPP_EXTERN_C String_t* _stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB67B2206523C3365CA052F7E78FA74F11C8FBE7C;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
IL2CPP_EXTERN_C String_t* _stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E_m6608A06DEF9E88C0BC0CB19D4AAFFC77A2E2D49F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectInterestManagement_OnRegionPingCompleted_mA6CEB1ABABBF9988CC6CD20749160026F817B8BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEventSenderCoroutineU3Ed__14_System_Collections_IEnumerator_Reset_m9F61D6425592DC1F9AF94276F3D2204F06883BDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m3548B96C1BC56997DA0B23DFA5531B0E9C9BFF1F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t770D9EF298A75E8D02FCC395001A0AFA71290CA3 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7  : public RuntimeObject
{
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdFusion
	String_t* ___AppIdFusion_1;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_2;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_3;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_4;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_5;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_6;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_7;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_8;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_9;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_10;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_11;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_12;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_13;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_14;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9  : public RuntimeObject
{
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// Photon.Realtime.JoinMode Photon.Realtime.EnterRoomParams::JoinMode
	uint8_t ___JoinMode_5;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_6;
};

// ExitGames.Client.Photon.EventData
struct EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681  : public RuntimeObject
{
	// System.Byte ExitGames.Client.Photon.EventData::Code
	uint8_t ___Code_0;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.EventData::Parameters
	ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* ___Parameters_1;
	// System.Byte ExitGames.Client.Photon.EventData::SenderKey
	uint8_t ___SenderKey_2;
	// System.Int32 ExitGames.Client.Photon.EventData::sender
	int32_t ___sender_3;
	// System.Byte ExitGames.Client.Photon.EventData::CustomDataKey
	uint8_t ___CustomDataKey_4;
	// System.Object ExitGames.Client.Photon.EventData::customData
	RuntimeObject* ___customData_5;
};

// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA  : public RuntimeObject
{
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___ExpectedCustomRoomProperties_0;
	// System.Byte Photon.Realtime.OpJoinRandomRoomParams::ExpectedMaxPlayers
	uint8_t ___ExpectedMaxPlayers_1;
	// Photon.Realtime.MatchmakingMode Photon.Realtime.OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// Photon.Realtime.TypedLobby Photon.Realtime.OpJoinRandomRoomParams::TypedLobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___TypedLobby_3;
	// System.String Photon.Realtime.OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
	// System.String[] Photon.Realtime.OpJoinRandomRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_5;
};

// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E  : public RuntimeObject
{
	// Photon.Realtime.EventCaching Photon.Realtime.RaiseEventOptions::CachingOption
	uint8_t ___CachingOption_1;
	// System.Byte Photon.Realtime.RaiseEventOptions::InterestGroup
	uint8_t ___InterestGroup_2;
	// System.Int32[] Photon.Realtime.RaiseEventOptions::TargetActors
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___TargetActors_3;
	// Photon.Realtime.ReceiverGroup Photon.Realtime.RaiseEventOptions::Receivers
	uint8_t ___Receivers_4;
	// System.Byte Photon.Realtime.RaiseEventOptions::SequenceChannel
	uint8_t ___SequenceChannel_5;
	// Photon.Realtime.WebFlags Photon.Realtime.RaiseEventOptions::Flags
	WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___Flags_6;
};

// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A  : public RuntimeObject
{
	// System.String Photon.Realtime.Region::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_0;
	// System.String Photon.Realtime.Region::<Cluster>k__BackingField
	String_t* ___U3CClusterU3Ek__BackingField_1;
	// System.String Photon.Realtime.Region::<HostAndPort>k__BackingField
	String_t* ___U3CHostAndPortU3Ek__BackingField_2;
	// System.Int32 Photon.Realtime.Region::<Ping>k__BackingField
	int32_t ___U3CPingU3Ek__BackingField_3;
};

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_7;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RegionHandler::<Aborted>k__BackingField
	bool ___U3CAbortedU3Ek__BackingField_10;
	// Photon.Realtime.MonoBehaviourEmpty Photon.Realtime.RegionHandler::emptyMonoBehavior
	MonoBehaviourEmpty_t8BBCD2C733FF1AA5B134D7290654C2869AA7C2E9* ___emptyMonoBehavior_11;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// RaiseEvent/<EventSenderCoroutine>d__14
struct U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8  : public RuntimeObject
{
	// System.Int32 RaiseEvent/<EventSenderCoroutine>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RaiseEvent/<EventSenderCoroutine>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RaiseEvent RaiseEvent/<EventSenderCoroutine>d__14::<>4__this
	RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* ___U3CU3E4__this_2;
	// System.Object RaiseEvent/<EventSenderCoroutine>d__14::<eventContent>5__2
	RuntimeObject* ___U3CeventContentU3E5__2_3;
};

// RaiseEvent/<StartCoroutine>d__5
struct U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF  : public RuntimeObject
{
	// System.Int32 RaiseEvent/<StartCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RaiseEvent/<StartCoroutine>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RaiseEvent RaiseEvent/<StartCoroutine>d__5::<>4__this
	RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* ___U3CU3E4__this_2;
};

// RaiseEvent/InRoomOptions
struct InRoomOptions_t4A2975DAA6A565ACAAE164FF0E1A39118A01E4CA  : public RuntimeObject
{
	// System.Boolean RaiseEvent/InRoomOptions::ReuseEvent
	bool ___ReuseEvent_0;
	// System.Boolean RaiseEvent/InRoomOptions::UseByteArraySlice
	bool ___UseByteArraySlice_1;
	// System.Single RaiseEvent/InRoomOptions::EventInterval
	float ___EventInterval_2;
	// System.Int32 RaiseEvent/InRoomOptions::EventBytes
	int32_t ___EventBytes_3;
	// System.Boolean RaiseEvent/InRoomOptions::SendToSelf
	bool ___SendToSelf_4;
	// System.Boolean RaiseEvent/InRoomOptions::SendEvent
	bool ___SendEvent_5;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A 
{
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;
};

// ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 
{
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;
};
// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject* ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7* ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02* ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Photon.Realtime.Demo.ConnectInterestManagement
struct ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.AppSettings Photon.Realtime.Demo.ConnectInterestManagement::appSettings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___appSettings_4;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Demo.ConnectInterestManagement::lbc
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___lbc_5;
	// Photon.Realtime.ConnectionHandler Photon.Realtime.Demo.ConnectInterestManagement::ch
	ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* ___ch_6;
	// UnityEngine.UI.Text Photon.Realtime.Demo.ConnectInterestManagement::StateUiText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StateUiText_7;
};

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CClientU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.ConnectionHandler::DisconnectAfterKeepAlive
	bool ___DisconnectAfterKeepAlive_5;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_7;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_8;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_11;
	// System.Diagnostics.Stopwatch Photon.Realtime.ConnectionHandler::backgroundStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___backgroundStopwatch_12;
};

// NetworkedItem
struct NetworkedItem_t3EE7A0E8BFA80E85D814A5B6AE3CFD61FC062060  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RaiseEvent
struct RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RaiseEvent/InRoomOptions RaiseEvent::InRoomSettings
	InRoomOptions_t4A2975DAA6A565ACAAE164FF0E1A39118A01E4CA* ___InRoomSettings_4;
	// Photon.Realtime.LoadBalancingClient RaiseEvent::lbc
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___lbc_5;
	// System.Int32 RaiseEvent::SentEvents
	int32_t ___SentEvents_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>

// Photon.Realtime.AppSettings

// Photon.Realtime.AppSettings

// Photon.Realtime.EnterRoomParams

// Photon.Realtime.EnterRoomParams

// ExitGames.Client.Photon.EventData

// ExitGames.Client.Photon.EventData

// Photon.Realtime.OpJoinRandomRoomParams

// Photon.Realtime.OpJoinRandomRoomParams

// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_StaticFields
{
	// Photon.Realtime.RaiseEventOptions Photon.Realtime.RaiseEventOptions::Default
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___Default_0;
};

// Photon.Realtime.RaiseEventOptions

// Photon.Realtime.Region

// Photon.Realtime.Region

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields
{
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t* ___PingImplementation_0;
	// System.UInt16 Photon.Realtime.RegionHandler::PortToPingOverride
	uint16_t ___PortToPingOverride_8;
};

// Photon.Realtime.RegionHandler

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// RaiseEvent/<EventSenderCoroutine>d__14

// RaiseEvent/<EventSenderCoroutine>d__14

// RaiseEvent/<StartCoroutine>d__5

// RaiseEvent/<StartCoroutine>d__5

// RaiseEvent/InRoomOptions

// RaiseEvent/InRoomOptions

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_StaticFields
{
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 ___SendUnreliable_1;
};

// ExitGames.Client.Photon.SendOptions

// System.Single

// System.Single

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSecondsRealtime

// UnityEngine.WaitForSecondsRealtime

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_11;
};

// Photon.Realtime.LoadBalancingClient

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Action`1<Photon.Realtime.RegionHandler>

// System.Action`1<Photon.Realtime.RegionHandler>

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Photon.Realtime.Demo.ConnectInterestManagement

// Photon.Realtime.Demo.ConnectInterestManagement

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_StaticFields
{
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_9;
};

// Photon.Realtime.ConnectionHandler

// NetworkedItem

// NetworkedItem

// RaiseEvent

// RaiseEvent

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator RaiseEvent::StartCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RaiseEvent_StartCoroutine_mEA692B1ACB18B5A596E774C8AD9EFE44FB1052D0 (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void RaiseEvent/<StartCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoroutineU3Ed__5__ctor_m55E9A5C719491D0981B643C97ABE2D021C3380B9 (U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator RaiseEvent::EventSenderCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RaiseEvent_EventSenderCoroutine_m783D559294F6984210D90FC05F7BD240FD3DD450 (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void RaiseEvent/<EventSenderCoroutine>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventSenderCoroutineU3Ed__14__ctor_m7A52B68B7C5A38594D21EBF6BCE7CA165FFA2662 (U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Photon.Realtime.Demo.ConnectInterestManagement>()
inline ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* Component_GetComponent_TisConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E_m6608A06DEF9E88C0BC0CB19D4AAFFC77A2E2D49F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Photon.Realtime.LoadBalancingClient Photon.Realtime.Demo.ConnectInterestManagement::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ConnectInterestManagement_get_Client_m2195DCD434A16659C98CA193809840F0D4180AFC_inline (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RaiseEventOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEventOptions__ctor_m5AD5093C00DD3EE18EB5033E49C61934E978A94F (RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient__ctor_mC3FD7885A9F9E80E8949ACDE2590016410F1186C (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, uint8_t ___0_protocol, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::set_SerializationProtocol(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_set_SerializationProtocol_m1DF8CED4E6C037D95C5DB7B2562AA934057FDC12 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Photon.Realtime.ConnectionHandler>()
inline ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.ConnectionHandler::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.ConnectionHandler::StartFallbackSendAckThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler_StartFallbackSendAckThread_mBA4B3FC1BABFBB2085F1D30D176B50D54F33AA69 (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Service_m0208D4872E63ABA1E7367E1D8FB89421E3050920 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinRandomRoom(Photon.Realtime.OpJoinRandomRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinRandomRoom_mCB018C45C5BAC6CB7F10FA13BA9EBAC3BD0F45A1 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA* ___0_opJoinRandomRoomParams, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Photon.Realtime.RegionHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m215F7D57B46C05B7411E4B5B4C7DDB91EEA86681 (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean Photon.Realtime.RegionHandler::PingMinimumOfRegions(System.Action`1<Photon.Realtime.RegionHandler>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_PingMinimumOfRegions_mBDA481EF544E14116455B0352A160D07B6AF5762 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___0_onCompleteCallback, String_t* ___1_previousSummary, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8 (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpCreateRoom_mD4FC6543597FB872E8EE027EE49E723D83437310 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___0_enterRoomParams, const RuntimeMethod* method) ;
// Photon.Realtime.Region Photon.Realtime.RegionHandler::get_BestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.RegionHandler::get_SummaryToCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionHandler_get_SummaryToCache_m313FB26DCB72FB6D25EC366E51AF4118F8CD3722 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::ConnectToRegionMaster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_ConnectToRegionMaster_m170672C2A5C0B12DB89090B0EE8ECF6028FA365B (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, String_t* ___0_region, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
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
// System.Void NetworkedItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkedItem_Start_m801B4E960E3268AAADA64BABE2C1516ACA9FD1B0 (NetworkedItem_t3EE7A0E8BFA80E85D814A5B6AE3CFD61FC062060* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NetworkedItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkedItem_Update_m043A7B79073CB8BE54FB04D0E04E93C624C32712 (NetworkedItem_t3EE7A0E8BFA80E85D814A5B6AE3CFD61FC062060* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NetworkedItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkedItem__ctor_m16C666661FC4F0CD40934CC901AB7A93C2AB9E8F (NetworkedItem_t3EE7A0E8BFA80E85D814A5B6AE3CFD61FC062060* __this, const RuntimeMethod* method) 
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
// System.Void RaiseEvent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_Start_mD3CBE91D6A8ACB26C17FAC4A1393D4D8B6D7B0DA (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) 
{
	{
		// this.StartCoroutine(this.StartCoroutine());
		RuntimeObject* L_0;
		L_0 = RaiseEvent_StartCoroutine_mEA692B1ACB18B5A596E774C8AD9EFE44FB1052D0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RaiseEvent::StartCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RaiseEvent_StartCoroutine_mEA692B1ACB18B5A596E774C8AD9EFE44FB1052D0 (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF* L_0 = (U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF*)il2cpp_codegen_object_new(U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF_il2cpp_TypeInfo_var);
		U3CStartCoroutineU3Ed__5__ctor_m55E9A5C719491D0981B643C97ABE2D021C3380B9(L_0, 0, NULL);
		U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RaiseEvent::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_OnDisable_mE9BF34479250EA9B09A9EDB9871912301451F86E (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) 
{
	{
		// this.StopCoroutine(this.EventSenderCoroutine());
		RuntimeObject* L_0;
		L_0 = RaiseEvent_EventSenderCoroutine_m783D559294F6984210D90FC05F7BD240FD3DD450(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// if (this.lbc != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___lbc_5;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// this.lbc.RemoveCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___lbc_5;
		LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A(L_2, __this, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void RaiseEvent::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_OnFriendListUpdate_m92EED2195CB22BA4423E98E87D7536888C314CA6 (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___0_friendList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RaiseEvent::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_OnCreatedRoom_mC272E29817D0DA4A26B891354F988A6607C3E33C (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RaiseEvent::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_OnCreateRoomFailed_mE7C5F9EDF711A8F5995D686A92F1BAF822C900C7 (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RaiseEvent::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_OnJoinedRoom_m131CDAA1E0AAB80FC8AE30138F03ED85974F5D6E (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(this.EventSenderCoroutine());
		RuntimeObject* L_0;
		L_0 = RaiseEvent_EventSenderCoroutine_m783D559294F6984210D90FC05F7BD240FD3DD450(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void RaiseEvent::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_OnJoinRoomFailed_mDE67A081987E7E158E21EC0969938609656B8698 (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RaiseEvent::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_OnJoinRandomFailed_mFB7E0694588F19CEEE21B9D14CC8597911CE7D95 (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RaiseEvent::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_OnLeftRoom_mDE0CB42F1AF2A24FADC192B46A13AEB6C16EEB90 (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) 
{
	{
		// this.StopCoroutine(this.EventSenderCoroutine());
		RuntimeObject* L_0;
		L_0 = RaiseEvent_EventSenderCoroutine_m783D559294F6984210D90FC05F7BD240FD3DD450(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RaiseEvent::EventSenderCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RaiseEvent_EventSenderCoroutine_m783D559294F6984210D90FC05F7BD240FD3DD450 (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8* L_0 = (U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8*)il2cpp_codegen_object_new(U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8_il2cpp_TypeInfo_var);
		U3CEventSenderCoroutineU3Ed__14__ctor_m7A52B68B7C5A38594D21EBF6BCE7CA165FFA2662(L_0, 0, NULL);
		U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RaiseEvent::OnEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent_OnEvent_m8F510071230979EB7433E08CB23FE1D2E2B99F8F (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* ___0_photonEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B2206523C3365CA052F7E78FA74F11C8FBE7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("event!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB67B2206523C3365CA052F7E78FA74F11C8FBE7C, NULL);
		// }
		return;
	}
}
// System.Void RaiseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEvent__ctor_m1D2696756E2FC8DA54539AB2C1197028A6C664FE (RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* __this, const RuntimeMethod* method) 
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
// System.Void RaiseEvent/InRoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InRoomOptions__ctor_m62D2381BB108B7F4512D39EF1C0B6C63DF59FFDD (InRoomOptions_t4A2975DAA6A565ACAAE164FF0E1A39118A01E4CA* __this, const RuntimeMethod* method) 
{
	{
		// public float EventInterval = 0.1f;
		__this->___EventInterval_2 = (0.100000001f);
		// public int EventBytes = 100;
		__this->___EventBytes_3 = ((int32_t)100);
		// public bool SendToSelf = true;
		__this->___SendToSelf_4 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RaiseEvent/<StartCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoroutineU3Ed__5__ctor_m55E9A5C719491D0981B643C97ABE2D021C3380B9 (U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RaiseEvent/<StartCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoroutineU3Ed__5_System_IDisposable_Dispose_m93AE35BFFBB281A8E0B7949E82F015E59B85B554 (U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RaiseEvent/<StartCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartCoroutineU3Ed__5_MoveNext_m990DE604616B8DD949D7EE5915792655E7E60D5C (U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E_m6608A06DEF9E88C0BC0CB19D4AAFFC77A2E2D49F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_006c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// this.lbc = this.GetComponent<ConnectInterestManagement>().Client;
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_3 = V_1;
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_4 = V_1;
		ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* L_5;
		L_5 = Component_GetComponent_TisConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E_m6608A06DEF9E88C0BC0CB19D4AAFFC77A2E2D49F(L_4, Component_GetComponent_TisConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E_m6608A06DEF9E88C0BC0CB19D4AAFFC77A2E2D49F_RuntimeMethod_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_6;
		L_6 = ConnectInterestManagement_get_Client_m2195DCD434A16659C98CA193809840F0D4180AFC_inline(L_5, NULL);
		L_3->___lbc_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___lbc_5), (void*)L_6);
		goto IL_0084;
	}

IL_0053:
	{
		// yield return new WaitForSecondsRealtime(0.1f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_7 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_7, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_006c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// this.lbc = this.GetComponent<ConnectInterestManagement>().Client;
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_8 = V_1;
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_9 = V_1;
		ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* L_10;
		L_10 = Component_GetComponent_TisConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E_m6608A06DEF9E88C0BC0CB19D4AAFFC77A2E2D49F(L_9, Component_GetComponent_TisConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E_m6608A06DEF9E88C0BC0CB19D4AAFFC77A2E2D49F_RuntimeMethod_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_11;
		L_11 = ConnectInterestManagement_get_Client_m2195DCD434A16659C98CA193809840F0D4180AFC_inline(L_10, NULL);
		L_8->___lbc_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___lbc_5), (void*)L_11);
	}

IL_0084:
	{
		// while (this.lbc == null)
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_12 = V_1;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_13 = L_12->___lbc_5;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		// this.lbc.AddCallbackTarget(this);
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_14 = V_1;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_15 = L_14->___lbc_5;
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_16 = V_1;
		LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8(L_15, L_16, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RaiseEvent/<StartCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE2FB82E85B3C51BB78390A76CC18F1A8E4CD336E (U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RaiseEvent/<StartCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m3548B96C1BC56997DA0B23DFA5531B0E9C9BFF1F (U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m3548B96C1BC56997DA0B23DFA5531B0E9C9BFF1F_RuntimeMethod_var)));
	}
}
// System.Object RaiseEvent/<StartCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_mCB093C4A767CABA7DBBC6790DFC540B1C60057E7 (U3CStartCoroutineU3Ed__5_t97495B7B168B6B30CB7C2F737D105C09492D48CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void RaiseEvent/<EventSenderCoroutine>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventSenderCoroutineU3Ed__14__ctor_m7A52B68B7C5A38594D21EBF6BCE7CA165FFA2662 (U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RaiseEvent/<EventSenderCoroutine>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventSenderCoroutineU3Ed__14_System_IDisposable_Dispose_m6E357F5FC3B12971F240666A44929A0D664D97D6 (U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RaiseEvent/<EventSenderCoroutine>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEventSenderCoroutineU3Ed__14_MoveNext_m948060997E9BEAC694C974D3E074364A023122AC (U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* V_1 = NULL;
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_00db;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// object eventContent = null;
		__this->___U3CeventContentU3E5__2_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeventContentU3E5__2_3), (void*)NULL);
	}

IL_0030:
	{
		// if (this.InRoomSettings.EventInterval < 0.001f)
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_3 = V_1;
		InRoomOptions_t4A2975DAA6A565ACAAE164FF0E1A39118A01E4CA* L_4 = L_3->___InRoomSettings_4;
		float L_5 = L_4->___EventInterval_2;
		if ((!(((float)L_5) < ((float)(0.00100000005f)))))
		{
			goto IL_0064;
		}
	}
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_0030;
	}

IL_0064:
	{
		// if (this.InRoomSettings.SendEvent)
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_7 = V_1;
		InRoomOptions_t4A2975DAA6A565ACAAE164FF0E1A39118A01E4CA* L_8 = L_7->___InRoomSettings_4;
		bool L_9 = L_8->___SendEvent_5;
		if (!L_9)
		{
			goto IL_00bc;
		}
	}
	{
		// RaiseEventOptions options = RaiseEventOptions.Default;
		il2cpp_codegen_runtime_class_init_inline(RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var);
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_10 = ((RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_StaticFields*)il2cpp_codegen_static_fields_for(RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var))->___Default_0;
		V_2 = L_10;
		// if (this.InRoomSettings.SendToSelf)
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_11 = V_1;
		InRoomOptions_t4A2975DAA6A565ACAAE164FF0E1A39118A01E4CA* L_12 = L_11->___InRoomSettings_4;
		bool L_13 = L_12->___SendToSelf_4;
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		// options = new RaiseEventOptions() { Receivers = ReceiverGroup.All };
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_14 = (RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E*)il2cpp_codegen_object_new(RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var);
		RaiseEventOptions__ctor_m5AD5093C00DD3EE18EB5033E49C61934E978A94F(L_14, NULL);
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_15 = L_14;
		L_15->___Receivers_4 = 1;
		V_2 = L_15;
	}

IL_0091:
	{
		// this.lbc.OpRaiseEvent(199, eventContent, options, SendOptions.SendUnreliable);
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_16 = V_1;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_17 = L_16->___lbc_5;
		RuntimeObject* L_18 = __this->___U3CeventContentU3E5__2_3;
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var);
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_20 = ((SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var))->___SendUnreliable_1;
		bool L_21;
		L_21 = VirtualFuncInvoker4< bool, uint8_t, RuntimeObject*, RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E*, SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 >::Invoke(10 /* System.Boolean Photon.Realtime.LoadBalancingClient::OpRaiseEvent(System.Byte,System.Object,Photon.Realtime.RaiseEventOptions,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)((int32_t)199), L_18, L_19, L_20);
		// this.SentEvents++;
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_22 = V_1;
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_23 = V_1;
		int32_t L_24 = L_23->___SentEvents_6;
		L_22->___SentEvents_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00bc:
	{
		// yield return new WaitForSeconds(this.InRoomSettings.EventInterval);
		RaiseEvent_t567DDCA768CD73B6742C64CF2B504040FA12855C* L_25 = V_1;
		InRoomOptions_t4A2975DAA6A565ACAAE164FF0E1A39118A01E4CA* L_26 = L_25->___InRoomSettings_4;
		float L_27 = L_26->___EventInterval_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_28 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_28, L_27, NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00db:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0030;
	}
}
// System.Object RaiseEvent/<EventSenderCoroutine>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEventSenderCoroutineU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEB0D4F6480483AA7D969832C9114F9EB859FC57B (U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RaiseEvent/<EventSenderCoroutine>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventSenderCoroutineU3Ed__14_System_Collections_IEnumerator_Reset_m9F61D6425592DC1F9AF94276F3D2204F06883BDA (U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEventSenderCoroutineU3Ed__14_System_Collections_IEnumerator_Reset_m9F61D6425592DC1F9AF94276F3D2204F06883BDA_RuntimeMethod_var)));
	}
}
// System.Object RaiseEvent/<EventSenderCoroutine>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEventSenderCoroutineU3Ed__14_System_Collections_IEnumerator_get_Current_m0BF96263100FC3751AB09DEAFE73FA6A8D53DCBD (U3CEventSenderCoroutineU3Ed__14_tE3860EEAC3280FECF535B1C64AB7D13DF40252F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// Photon.Realtime.LoadBalancingClient Photon.Realtime.Demo.ConnectInterestManagement::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ConnectInterestManagement_get_Client_m2195DCD434A16659C98CA193809840F0D4180AFC (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.lbc; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		return L_0;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_Start_m36D34FBA289B863AA36620771609D1851ECD8CF5 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.lbc = new LoadBalancingClient();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)il2cpp_codegen_object_new(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		LoadBalancingClient__ctor_mC3FD7885A9F9E80E8949ACDE2590016410F1186C(L_0, 0, NULL);
		__this->___lbc_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lbc_5), (void*)L_0);
		// this.lbc.AddCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___lbc_5;
		LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8(L_1, __this, NULL);
		// this.lbc.SerializationProtocol = SerializationProtocol.GpBinaryV16;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___lbc_5;
		LoadBalancingClient_set_SerializationProtocol_m1DF8CED4E6C037D95C5DB7B2562AA934057FDC12(L_2, 0, NULL);
		// if (!this.lbc.ConnectUsingSettings(appSettings))
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_3 = __this->___lbc_5;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_4 = __this->___appSettings_4;
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* >::Invoke(8 /* System.Boolean Photon.Realtime.LoadBalancingClient::ConnectUsingSettings(Photon.Realtime.AppSettings) */, L_3, L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		// Debug.LogError("Error while connecting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75, NULL);
	}

IL_0041:
	{
		// this.ch = this.gameObject.GetComponent<ConnectionHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_7;
		L_7 = GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1(L_6, GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var);
		__this->___ch_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ch_6), (void*)L_7);
		// if (this.ch != null)
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_8 = __this->___ch_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		// this.ch.Client = this.lbc;
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_10 = __this->___ch_6;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_11 = __this->___lbc_5;
		ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline(L_10, L_11, NULL);
		// this.ch.StartFallbackSendAckThread();
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_12 = __this->___ch_6;
		ConnectionHandler_StartFallbackSendAckThread_mBA4B3FC1BABFBB2085F1D30D176B50D54F33AA69(L_12, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_Update_m85A02BCA9BB859A570B5EA3AE122CD3748B50228 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F);
		s_Il2CppMethodInitialized = true;
	}
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* V_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// LoadBalancingClient client = this.lbc;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		V_0 = L_0;
		// if (client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// client.Service();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = V_0;
		LoadBalancingClient_Service_m0208D4872E63ABA1E7367E1D8FB89421E3050920(L_2, NULL);
		// Text uiText = this.StateUiText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StateUiText_7;
		V_1 = L_3;
		// string state = client.State.ToString();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_4 = V_0;
		int32_t L_5;
		L_5 = LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline(L_4, NULL);
		V_3 = L_5;
		Il2CppFakeBox<int32_t> L_6(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		V_2 = L_7;
		// if (uiText != null && !uiText.text.Equals(state))
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = V_1;
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		String_t* L_12 = V_2;
		bool L_13;
		L_13 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_11, L_12, NULL);
		if (L_13)
		{
			goto IL_0054;
		}
	}
	{
		// uiText.text = "State: " + state;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = V_1;
		String_t* L_15 = V_2;
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F, L_15, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnConnected_m72590A474F570585767EBD7BB498D6E6217D3472 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnConnectedToMaster_mB6DDB67DE0C0EEA12DD822FC2D32BE172B40797B (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnConnectedToMaster");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E, NULL);
		// this.lbc.OpJoinRandomRoom();    // joins any open room (no filter)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		bool L_1;
		L_1 = LoadBalancingClient_OpJoinRandomRoom_mCB018C45C5BAC6CB7F10FA13BA9EBAC3BD0F45A1(L_0, (OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnDisconnected_m5961DBA4D17DB2592AC827D06BACB31D2F0E8360 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, int32_t ___0_cause, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnDisconnected(" + cause + ")");
		Il2CppFakeBox<int32_t> L_0(DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var, (&___0_cause));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E, L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnCustomAuthenticationResponse_m70160D5C6712F2ED55CE02D510E870A9B22CFDF1 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_data, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnCustomAuthenticationFailed_mD7ADD812A6A19C55A7A189941E5471DCEC5A0FA1 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, String_t* ___0_debugMessage, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnRegionListReceived_m3B5D139785FF06D952BFA62EFDBD113C3B15A52F (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___0_regionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectInterestManagement_OnRegionPingCompleted_mA6CEB1ABABBF9988CC6CD20749160026F817B8BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRegionListReceived");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F, NULL);
		// regionHandler.PingMinimumOfRegions(this.OnRegionPingCompleted, null);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_0 = ___0_regionHandler;
		Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* L_1 = (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74*)il2cpp_codegen_object_new(Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var);
		Action_1__ctor_m215F7D57B46C05B7411E4B5B4C7DDB91EEA86681(L_1, __this, (intptr_t)((void*)ConnectInterestManagement_OnRegionPingCompleted_mA6CEB1ABABBF9988CC6CD20749160026F817B8BB_RuntimeMethod_var), NULL);
		bool L_2;
		L_2 = RegionHandler_PingMinimumOfRegions_mBDA481EF544E14116455B0352A160D07B6AF5762(L_0, L_1, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnRoomListUpdate_m8795D354D16B60C1118856B269C9BA8BAA9FB055 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* ___0_roomList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnLobbyStatisticsUpdate_mD9046F50E777B7C6CF2A5D5BED434C042F45E6BD (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___0_lobbyStatistics, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnJoinedLobby_m102391FDE6069B81569804250633CD9A6082183F (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnLeftLobby_m02E25A13321DF9D48727E3D4BD1A0641948FD7F0 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnFriendListUpdate_mE658A25F73B3BCA5A77F90A40A62BEFA38862FA0 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___0_friendList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnCreatedRoom_mC09E5628CD0F3474A6E8FB4145D59FC193115575 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnCreateRoomFailed_m59430BF577EE747CAF4975FE209F48221B718124 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnJoinedRoom_m1B41C5A451FFA34AF9302ED98D1FCF23501FD541 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinedRoom");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnJoinRoomFailed_mEEBC161F7449CD292E632DE7F0454019EEE14CE6 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnJoinRandomFailed_m8B44F62957AF587BFFEAE0469B3B30C93DA56D5D (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinRandomFailed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895, NULL);
		// this.lbc.OpCreateRoom(new EnterRoomParams());
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_1 = (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9*)il2cpp_codegen_object_new(EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8(L_1, NULL);
		bool L_2;
		L_2 = LoadBalancingClient_OpCreateRoom_mD4FC6543597FB872E8EE027EE49E723D83437310(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnLeftRoom_m18570DDBA2CBB46EDA18CB88D56E5C465951A0A9 (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::OnRegionPingCompleted(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement_OnRegionPingCompleted_mA6CEB1ABABBF9988CC6CD20749160026F817B8BB (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___0_regionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C);
		s_Il2CppMethodInitialized = true;
	}
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log("OnRegionPingCompleted " + regionHandler.BestRegion);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_0 = ___0_regionHandler;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_1;
		L_1 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(L_0, NULL);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0017;
	}

IL_0012:
	{
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0017:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// Debug.Log("RegionPingSummary: " + regionHandler.SummaryToCache);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_5 = ___0_regionHandler;
		String_t* L_6;
		L_6 = RegionHandler_get_SummaryToCache_m313FB26DCB72FB6D25EC366E51AF4118F8CD3722(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4, L_6, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// this.lbc.ConnectToRegionMaster(regionHandler.BestRegion.Code);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_8 = __this->___lbc_5;
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_9 = ___0_regionHandler;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_10;
		L_10 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(L_9, NULL);
		String_t* L_11;
		L_11 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(L_10, NULL);
		bool L_12;
		L_12 = LoadBalancingClient_ConnectToRegionMaster_m170672C2A5C0B12DB89090B0EE8ECF6028FA365B(L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectInterestManagement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectInterestManagement__ctor_m4CE1CFB101F0FDCBEE8A9A86CB14B485D618097A (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AppSettings appSettings = new AppSettings();
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_0 = (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7*)il2cpp_codegen_object_new(AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43(L_0, NULL);
		__this->___appSettings_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appSettings_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ConnectInterestManagement_get_Client_m2195DCD434A16659C98CA193809840F0D4180AFC_inline (ConnectInterestManagement_t400520FE47865C6EC8E6BDD83FBB27FF3EDD142E* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.lbc; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingClient Client { get; set; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = ___0_value;
		__this->___U3CClientU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// return this.state;
		int32_t L_0 = __this->___state_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
