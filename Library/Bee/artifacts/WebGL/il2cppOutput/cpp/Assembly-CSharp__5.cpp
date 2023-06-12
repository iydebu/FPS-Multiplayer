#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>
struct Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2;
// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player>
struct Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t681C2D0152C2184DCA6AD773603D0FE709D338C9;
// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch>
struct Dictionary_2_t47C3B85708CBFB02F30AF23A5D4092EC2DAD8636;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68;
// System.Func`2<Photon.Voice.DeviceInfo,System.Object>
struct Func_2_t21A6BB7DFF9CA0A9949691055DE53B07F0B384D9;
// System.Func`2<Photon.Voice.DeviceInfo,System.String>
struct Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB;
// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t0B39EF96E81D9617D3E4536032F30E1AE7610153;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView>
struct HashSet_1_t5B6B46270D543F8EDB3F122B02D36E60196CB13B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// Photon.Voice.IAudioOut`1<System.Single>
struct IAudioOut_1_t52874464F649CB4D8674B0F14144AADE14995DF9;
// System.Collections.Generic.IEnumerable`1<Photon.Voice.DeviceInfo>
struct IEnumerable_1_tB42CC3172171D07B3D345D63F8622B98D8ED5E61;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<Photon.Voice.DeviceInfo>
struct List_1_t77900A23BF65F1E318159DF69366A9281EA47E72;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t7628C79979ECE33C758FA5C52526761CA20F2167;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Photon.Pun.PhotonView>
struct List_1_t4AAED60DF1950E8D05C3BFEB57C6A43FBFD440B5;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder>
struct List_1_tBFD6B7B62FB7763BC57224ED666A855ACCD05536;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_t823310AB4F398AE467887CC898545B689B70003F;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView>
struct NonAllocDictionary_2_tC9904455C122E50478272CC5522AD956A7BB5F12;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_t47635E10016E83A1E327B583977D1F043544FB48;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Photon.Voice.Unity.AudioInEnumerator
struct AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// ExitGames.Demos.DemoPunVoice.BaseController
struct BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// ExitGames.Demos.DemoPunVoice.BetterToggle
struct BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ExitGames.Demos.DemoPunVoice.ChangePOV
struct ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD;
// ExitGames.Demos.DemoPunVoice.CharacterInstantiation
struct CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Photon.Voice.DeviceFeatures
struct DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// ExitGames.Client.Photon.EventData
struct EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681;
// ExitGames.Demos.DemoPunVoice.FirstPersonController
struct FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// ExitGames.Demos.DemoPunVoice.Highlighter
struct Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t3DEEF61ECB638E82CFBFC6F26D590E2ECD3F99C2;
// Photon.Voice.IDeviceEnumerator
struct IDeviceEnumerator_tBAFA864015008142632BCAD7673D2ECF2FC396F7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Photon.Voice.ILogger
struct ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_tACE5277867F34445F8CAB737A6C60770A74FE635;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D;
// Photon.Pun.IPunPrefabPool
struct IPunPrefabPool_t0C53499E6C013A2913E220B8D6627AEE50272B36;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t62EB15B7BDBC1428F5BFAF50DA2086B74E2ACBDF;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// Photon.Voice.LocalVoice
struct LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5;
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
// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783;
// MouseLookHelper
struct MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Demos.DemoPunVoice.OrthographicController
struct OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Photon.Pun.PhotonStream
struct PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E;
// Photon.Voice.PhotonTransportProtocol
struct PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700;
// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B;
// Photon.Voice.PUN.PhotonVoiceView
struct PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// Photon.Voice.PUN.PunVoiceClient
struct PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1;
// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E;
// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152;
// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// Photon.Realtime.SupportLogger
struct SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ExitGames.Demos.DemoPunVoice.ThirdPersonController
struct ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Photon.Voice.VoiceClient
struct VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E;
// Photon.Voice.Unity.VoiceComponentImpl
struct VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3;
// ExitGames.Demos.DemoPunVoice.VoiceDemoUI
struct VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Photon.Voice.Unity.WebAudioAudioOut
struct WebAudioAudioOut_t9CD55A06AB61158214620FE930086BC8AC573694;
// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// ExitGames.Client.Photon.WebSocket
struct WebSocket_t186C04B8068D205593DB749543F9FC0670E60348;
// Photon.Voice.AudioUtil/ILevelMeter
struct ILevelMeter_tAA539E9A7B391A21DCBE1B6E49298B3C5F8B6B36;
// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle
struct OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged
struct OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222;
// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated
struct OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c
struct U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235;
// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle
struct OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILevelMeter_tAA539E9A7B391A21DCBE1B6E49298B3C5F8B6B36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033579EC8D0117A4537FD03D9BB53510D041EB23;
IL2CPP_EXTERN_C String_t* _stringLiteral047B3F3A5713C4B341DAC643DC51392B3E671766;
IL2CPP_EXTERN_C String_t* _stringLiteral126C27EBBA7FB9D77EB1A44E51BF06EBA9C3FC63;
IL2CPP_EXTERN_C String_t* _stringLiteral18AF92CE6D406341CFFA209C15FD6F4392F16457;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2E5AB6E37311930D6035C8D2CB8DFF55F56024E3;
IL2CPP_EXTERN_C String_t* _stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94;
IL2CPP_EXTERN_C String_t* _stringLiteral4BC891A569A5D584FE65FFCAA41791C3F92BD535;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D;
IL2CPP_EXTERN_C String_t* _stringLiteral5D774639089939D1DDB49955E154CC603511C5EB;
IL2CPP_EXTERN_C String_t* _stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35;
IL2CPP_EXTERN_C String_t* _stringLiteral61A855DC0F7460245BD0DC4ADF10AA9246C5D820;
IL2CPP_EXTERN_C String_t* _stringLiteral6895E595FC21425C2339794A94C0327D7BECE5A9;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral926A646AB5A68B4F9CE13C5B42BF00FE91E8C2D9;
IL2CPP_EXTERN_C String_t* _stringLiteral928D3973E1B0159DFBC5ABBB4358EC8A0EA8591A;
IL2CPP_EXTERN_C String_t* _stringLiteral9A10E765B103F3A508B5EAE688B10607DD41ADA5;
IL2CPP_EXTERN_C String_t* _stringLiteralADA259DF8AC99BEC96AC7B9F0DBEFA73EEE956D8;
IL2CPP_EXTERN_C String_t* _stringLiteralB1B959945E7E363C37693514A63BC4CF6D74EAB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29;
IL2CPP_EXTERN_C String_t* _stringLiteralD5834ACEC33AD574D2A7A320AEAB1D2F09D962F8;
IL2CPP_EXTERN_C String_t* _stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B;
IL2CPP_EXTERN_C String_t* _stringLiteralDF93CEA015670B8CF64DA924274547CFFAB1E66D;
IL2CPP_EXTERN_C String_t* _stringLiteralDF94361AE62C8E8418A75AE9F66772AC8DE7EB3E;
IL2CPP_EXTERN_C String_t* _stringLiteralF2CAD12A35C0A1C70CDE5F71CCEB310BA559DC3F;
IL2CPP_EXTERN_C const RuntimeMethod* BetterToggle_U3CStartU3Eb__5_0_m68E30E6EE41A30BCDFAE08BAE04AB75FFCB5B652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangePOV_OnCharacterInstantiated_m3135CA6446FC5A73DC1F7F6B7DE5D47322AA7874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangePOV_OrthographicMode_m0A51ED1928F3CB66168DBA1554B2D5BF7AE53EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangePOV_ThirdPersonMode_mC95B944CA1954608F11BF4E1A828CF5F96984DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m8CCF0CFEAB5126A8741117A6D761CB5AD7DFFFC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_m6AB2CC623876C2D75EE29850C65A2141EA9246F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_TisString_t_m8BC012759978357E003DF018FD59A66B363F24A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1_m1388841F064B0C0F0C52CE874D92EF4BD67F81AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisOrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC_m3B3CE47EA2EF1C1D9541DCCBD8C3F11B00868BE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m0E6283AF5901A2D881EFE3F8E321B502D2B2F950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m9A8A84F07D07717192CA584AAE1632CB821BD5A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667_m14D4EF7E28A6E21902C577A3D2352EF9B8903FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Highlighter_ChangePOV_CameraChanged_m2B127E1CE37492642D8DC6591E915205B44CFE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Highlighter_VoiceDemoUI_DebugToggled_m886E5875BD690EBA01F73A7688CAFA90D8A54F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__33_0_mA2AB26A951636ACF486510E28890A24DC6DB7BA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__33_1_m114761A206F4BA990286D1B439C9B1B17252672F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_BetterToggle_ToggleValueChanged_mA8CD4F779E575FD505483AFC33169BD0B77315BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_CalibrateButtonOnClick_m714D95BB81A1C7D6EB8E7FF89CB67310896E4F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_m4F46D60A48CBF2603CC1558BE2878AA95F607761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_OnCameraChanged_mFF6F5A4E010E24050112AA28C610E025C527562C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_PunClientStateChanged_m0B921FFA02E884DF2330EAB1028D02E70E1574E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_PunSwitchOnClick_mDC443A9416E72702EB26FDB51644CFC4AF2B6870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_VoiceClientStateChanged_m0C246B7B37739B1E50635EE3EC4501FD5996A174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDemoUI_VoiceSwitchOnClick_mF4168D2C0607E4D0696967B9FB15197BEAC874FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_mE4721C4DB1E53D894243B79FFCC090A6C904F70C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// Photon.Voice.DeviceEnumeratorBase
struct DeviceEnumeratorBase_t866AFFCD3150DE40F9B463B9A40DB2EDBE4B1302  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Voice.DeviceInfo> Photon.Voice.DeviceEnumeratorBase::devices
	List_1_t77900A23BF65F1E318159DF69366A9281EA47E72* ___devices_0;
	// Photon.Voice.ILogger Photon.Voice.DeviceEnumeratorBase::logger
	RuntimeObject* ___logger_1;
	// System.String Photon.Voice.DeviceEnumeratorBase::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
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

// Photon.Pun.PhotonNetwork
struct PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99  : public RuntimeObject
{
};

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_16;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989* ___SocketImplementationConfig_18;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t* ___U3CSocketImplementationU3Ek__BackingField_19;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_20;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_21;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD* ___OnDisconnectMessage_22;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitResends
	int32_t ___SequenceDeltaLimitResends_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitSends
	int32_t ___SequenceDeltaLimitSends_28;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_29;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_30;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_31;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_37;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_38;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_39;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_42;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_44;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RandomizedSequenceNumbers_45;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_46;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsIncomingU3Ek__BackingField_47;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsOutgoingU3Ek__BackingField_48;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* ___U3CTrafficStatsGameLevelU3Ek__BackingField_49;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___trafficStatsStopwatch_50;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_51;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject* ___SendOutgoingLockObject_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject* ___DispatchLockObject_54;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject* ___EnqueueLock_55;
	// System.Type ExitGames.Client.Photon.PhotonPeer::payloadEncryptorType
	Type_t* ___payloadEncryptorType_56;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PayloadEncryptionSecret_57;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t* ___encryptorType_58;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_59;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_60;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_61;
};

// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C  : public RuntimeObject
{
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject* ___TagObject_8;
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
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

// ExitGames.Client.Photon.WebSocket
struct WebSocket_t186C04B8068D205593DB749543F9FC0670E60348  : public RuntimeObject
{
	// System.Uri ExitGames.Client.Photon.WebSocket::mUrl
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___mUrl_0;
	// System.String ExitGames.Client.Photon.WebSocket::mProxyAddress
	String_t* ___mProxyAddress_1;
	// System.String ExitGames.Client.Photon.WebSocket::protocols
	String_t* ___protocols_2;
	// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String> ExitGames.Client.Photon.WebSocket::<DebugReturn>k__BackingField
	Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* ___U3CDebugReturnU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.WebSocket::m_NativeRef
	int32_t ___m_NativeRef_4;
};

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c
struct U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235  : public RuntimeObject
{
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// Photon.Voice.Unity.AndroidAudioInParameters
struct AndroidAudioInParameters_t7212C4A7649E84B331F6B2C50AB43A50F4B66D0A 
{
	// System.Boolean Photon.Voice.Unity.AndroidAudioInParameters::EnableAEC
	bool ___EnableAEC_0;
	// System.Boolean Photon.Voice.Unity.AndroidAudioInParameters::EnableAGC
	bool ___EnableAGC_1;
	// System.Boolean Photon.Voice.Unity.AndroidAudioInParameters::EnableNS
	bool ___EnableNS_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.Unity.AndroidAudioInParameters
struct AndroidAudioInParameters_t7212C4A7649E84B331F6B2C50AB43A50F4B66D0A_marshaled_pinvoke
{
	int32_t ___EnableAEC_0;
	int32_t ___EnableAGC_1;
	int32_t ___EnableNS_2;
};
// Native definition for COM marshalling of Photon.Voice.Unity.AndroidAudioInParameters
struct AndroidAudioInParameters_t7212C4A7649E84B331F6B2C50AB43A50F4B66D0A_marshaled_com
{
	int32_t ___EnableAEC_0;
	int32_t ___EnableAGC_1;
	int32_t ___EnableNS_2;
};

// Photon.Voice.Unity.AudioInEnumerator
struct AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8  : public DeviceEnumeratorBase_t866AFFCD3150DE40F9B463B9A40DB2EDBE4B1302
{
};

// Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 
{
	// Photon.Voice.IOS.AudioSessionCategory Photon.Voice.IOS.AudioSessionParameters::Category
	int32_t ___Category_0;
	// Photon.Voice.IOS.AudioSessionMode Photon.Voice.IOS.AudioSessionParameters::Mode
	int32_t ___Mode_1;
	// Photon.Voice.IOS.AudioSessionCategoryOption[] Photon.Voice.IOS.AudioSessionParameters::CategoryOptions
	AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* ___CategoryOptions_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};
// Native definition for COM marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 
{
	// System.Boolean Photon.Voice.DeviceInfo::<IsDefault>k__BackingField
	bool ___U3CIsDefaultU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.DeviceInfo::<IDInt>k__BackingField
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	// System.String Photon.Voice.DeviceInfo::<IDString>k__BackingField
	String_t* ___U3CIDStringU3Ek__BackingField_2;
	// System.String Photon.Voice.DeviceInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// Photon.Voice.DeviceFeatures Photon.Voice.DeviceInfo::features
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	// System.Boolean Photon.Voice.DeviceInfo::useStringID
	bool ___useStringID_5;
};
// Native definition for P/Invoke marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	char* ___U3CIDStringU3Ek__BackingField_2;
	char* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	int32_t ___useStringID_5;
};
// Native definition for COM marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	Il2CppChar* ___U3CIDStringU3Ek__BackingField_2;
	Il2CppChar* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	int32_t ___useStringID_5;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F  : public PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C
{
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_t47635E10016E83A1E327B583977D1F043544FB48* ___paramDictionaryPool_62;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 
{
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Low
	int32_t ___Low_1;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::High
	int32_t ___High_2;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Max
	int32_t ___Max_3;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::SpeedUpPerc
	int32_t ___SpeedUpPerc_4;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// MouseLookHelper
struct MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663  : public RuntimeObject
{
	// System.Single MouseLookHelper::XSensitivity
	float ___XSensitivity_0;
	// System.Single MouseLookHelper::YSensitivity
	float ___YSensitivity_1;
	// System.Boolean MouseLookHelper::clampVerticalRotation
	bool ___clampVerticalRotation_2;
	// System.Single MouseLookHelper::MinimumX
	float ___MinimumX_3;
	// System.Single MouseLookHelper::MaximumX
	float ___MaximumX_4;
	// System.Boolean MouseLookHelper::smooth
	bool ___smooth_5;
	// System.Single MouseLookHelper::smoothTime
	float ___smoothTime_6;
	// UnityEngine.Quaternion MouseLookHelper::m_CharacterTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CharacterTargetRot_7;
	// UnityEngine.Quaternion MouseLookHelper::m_CameraTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CameraTargetRot_8;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80  : public LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4
{
	// Photon.Voice.VoiceClient Photon.Voice.LoadBalancingTransport::voiceClient
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___voiceClient_53;
	// Photon.Voice.PhotonTransportProtocol Photon.Voice.LoadBalancingTransport::protocol
	PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700* ___protocol_54;
	// System.Boolean Photon.Voice.LoadBalancingTransport::cppCompatibilityMode
	bool ___cppCompatibilityMode_55;
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

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490  : public MulticastDelegate_t
{
};

// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>
struct Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B  : public MulticastDelegate_t
{
};

// System.Func`2<Photon.Voice.DeviceInfo,System.String>
struct Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle
struct OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0  : public MulticastDelegate_t
{
};

// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged
struct OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222  : public MulticastDelegate_t
{
};

// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated
struct OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC  : public MulticastDelegate_t
{
};

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle
struct OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ExitGames.Demos.DemoPunVoice.BaseController
struct BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera ExitGames.Demos.DemoPunVoice.BaseController::ControllerCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___ControllerCamera_4;
	// UnityEngine.Rigidbody ExitGames.Demos.DemoPunVoice.BaseController::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_5;
	// UnityEngine.Animator ExitGames.Demos.DemoPunVoice.BaseController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
	// UnityEngine.Transform ExitGames.Demos.DemoPunVoice.BaseController::camTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTrans_7;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::h
	float ___h_8;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::v
	float ___v_9;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::speed
	float ___speed_10;
	// System.Single ExitGames.Demos.DemoPunVoice.BaseController::cameraDistance
	float ___cameraDistance_11;
};

// ExitGames.Demos.DemoPunVoice.BetterToggle
struct BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle ExitGames.Demos.DemoPunVoice.BetterToggle::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_4;
};

// ExitGames.Demos.DemoPunVoice.ChangePOV
struct ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ExitGames.Demos.DemoPunVoice.FirstPersonController ExitGames.Demos.DemoPunVoice.ChangePOV::firstPersonController
	FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* ___firstPersonController_4;
	// ExitGames.Demos.DemoPunVoice.ThirdPersonController ExitGames.Demos.DemoPunVoice.ChangePOV::thirdPersonController
	ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* ___thirdPersonController_5;
	// ExitGames.Demos.DemoPunVoice.OrthographicController ExitGames.Demos.DemoPunVoice.ChangePOV::orthographicController
	OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* ___orthographicController_6;
	// UnityEngine.Vector3 ExitGames.Demos.DemoPunVoice.ChangePOV::initialCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialCameraPosition_7;
	// UnityEngine.Quaternion ExitGames.Demos.DemoPunVoice.ChangePOV::initialCameraRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initialCameraRotation_8;
	// UnityEngine.Camera ExitGames.Demos.DemoPunVoice.ChangePOV::defaultCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___defaultCamera_9;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.ChangePOV::ButtonsHolder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ButtonsHolder_10;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.ChangePOV::FirstPersonCamActivator
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___FirstPersonCamActivator_11;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.ChangePOV::ThirdPersonCamActivator
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ThirdPersonCamActivator_12;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.ChangePOV::OrthographicCamActivator
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___OrthographicCamActivator_13;
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

// ExitGames.Demos.DemoPunVoice.Highlighter
struct Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas ExitGames.Demos.DemoPunVoice.Highlighter::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_4;
	// Photon.Voice.PUN.PhotonVoiceView ExitGames.Demos.DemoPunVoice.Highlighter::photonVoiceView
	PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* ___photonVoiceView_5;
	// UnityEngine.UI.Image ExitGames.Demos.DemoPunVoice.Highlighter::recorderSprite
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___recorderSprite_6;
	// UnityEngine.UI.Image ExitGames.Demos.DemoPunVoice.Highlighter::speakerSprite
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___speakerSprite_7;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.Highlighter::bufferLagText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___bufferLagText_8;
	// System.Boolean ExitGames.Demos.DemoPunVoice.Highlighter::showSpeakerLag
	bool ___showSpeakerLag_9;
};

// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pvCache_4;
};

// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B* ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181* ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t7628C79979ECE33C758FA5C52526761CA20F2167* ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F* ___OnControllerChangeCallbacks_31;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceComponent::impl
	VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* ___impl_4;
};

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI
struct VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punState
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___punState_4;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceState
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___voiceState_5;
	// Photon.Voice.PUN.PunVoiceClient ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punVoiceClient
	PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* ___punVoiceClient_6;
	// UnityEngine.Canvas ExitGames.Demos.DemoPunVoice.VoiceDemoUI::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_7;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punSwitch
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___punSwitch_8;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::punSwitchText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___punSwitchText_9;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceSwitch
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___voiceSwitch_10;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceSwitchText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___voiceSwitchText_11;
	// UnityEngine.UI.Button ExitGames.Demos.DemoPunVoice.VoiceDemoUI::calibrateButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___calibrateButton_12;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::calibrateText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___calibrateText_13;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::voiceDebugText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___voiceDebugText_14;
	// Photon.Voice.PUN.PhotonVoiceView ExitGames.Demos.DemoPunVoice.VoiceDemoUI::recorder
	PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* ___recorder_15;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.VoiceDemoUI::inGameSettings
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inGameSettings_16;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.VoiceDemoUI::globalSettings
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___globalSettings_17;
	// UnityEngine.UI.Text ExitGames.Demos.DemoPunVoice.VoiceDemoUI::devicesInfoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___devicesInfoText_18;
	// UnityEngine.GameObject ExitGames.Demos.DemoPunVoice.VoiceDemoUI::debugGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugGO_19;
	// System.Boolean ExitGames.Demos.DemoPunVoice.VoiceDemoUI::debugMode
	bool ___debugMode_20;
	// System.Single ExitGames.Demos.DemoPunVoice.VoiceDemoUI::volumeBeforeMute
	float ___volumeBeforeMute_21;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Demos.DemoPunVoice.VoiceDemoUI::previousDebugLevel
	uint8_t ___previousDebugLevel_22;
	// System.Int32 ExitGames.Demos.DemoPunVoice.VoiceDemoUI::calibrationMilliSeconds
	int32_t ___calibrationMilliSeconds_24;
};

// ExitGames.Demos.DemoPunVoice.FirstPersonController
struct FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1  : public BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25
{
	// MouseLookHelper ExitGames.Demos.DemoPunVoice.FirstPersonController::mouseLook
	MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663* ___mouseLook_12;
	// System.Single ExitGames.Demos.DemoPunVoice.FirstPersonController::oldYRotation
	float ___oldYRotation_13;
	// UnityEngine.Quaternion ExitGames.Demos.DemoPunVoice.FirstPersonController::velRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___velRotation_14;
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

// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
};

// Photon.Voice.PUN.PhotonVoiceView
struct PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// Photon.Pun.PhotonView Photon.Voice.PUN.PhotonVoiceView::photonView
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___photonView_5;
	// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PhotonVoiceView::punVoiceClient
	PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* ___punVoiceClient_6;
	// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::<RecorderInUse>k__BackingField
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___U3CRecorderInUseU3Ek__BackingField_7;
	// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::<SpeakerInUse>k__BackingField
	Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___U3CSpeakerInUseU3Ek__BackingField_8;
};

// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_7;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_8;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_9;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject* ___userData_10;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* ___voice_11;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_12;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.Recorder::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_13;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_14;
	// System.Boolean Photon.Voice.Unity.Recorder::useTargetPlayers
	bool ___useTargetPlayers_15;
	// System.Int32[] Photon.Voice.Unity.Recorder::targetPlayers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___targetPlayers_16;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_17;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_18;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_19;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_20;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_21;
	// Photon.Voice.OpusCodec/FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_22;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_23;
	// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_24;
	// Photon.Voice.Unity.Recorder/MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_25;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_26;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_27;
	// System.Boolean Photon.Voice.Unity.Recorder::recordingEnabled
	bool ___recordingEnabled_28;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* ___inputFactory_29;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.Unity.Recorder::audioSessionParameters
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___audioSessionParameters_30;
	// Photon.Voice.Unity.AndroidAudioInParameters Photon.Voice.Unity.Recorder::androidMicrophoneSettings
	AndroidAudioInParameters_t7212C4A7649E84B331F6B2C50AB43A50F4B66D0A ___androidMicrophoneSettings_31;
	// System.Boolean Photon.Voice.Unity.Recorder::isPausedOrInBackground
	bool ___isPausedOrInBackground_32;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_33;
	// System.Boolean Photon.Voice.Unity.Recorder::useOnAudioFilterRead
	bool ___useOnAudioFilterRead_34;
	// System.Boolean Photon.Voice.Unity.Recorder::useMicrophoneTypeFallback
	bool ___useMicrophoneTypeFallback_35;
	// System.Boolean Photon.Voice.Unity.Recorder::recordWhenJoined
	bool ___recordWhenJoined_36;
	// Photon.Voice.DeviceInfo Photon.Voice.Unity.Recorder::microphoneDevice
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___microphoneDevice_37;
	// System.Int32 Photon.Voice.Unity.Recorder::microphoneDeviceChangePending
	int32_t ___microphoneDeviceChangePending_38;
	// System.Int32 Photon.Voice.Unity.Recorder::restartRecordingPending
	int32_t ___restartRecordingPending_39;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker::audioOutput
	RuntimeObject* ___audioOutput_5;
	// Photon.Voice.Unity.WebAudioAudioOut Photon.Voice.Unity.Speaker::webOut
	WebAudioAudioOut_t9CD55A06AB61158214620FE930086BC8AC573694* ___webOut_6;
	// UnityEngine.AudioSource Photon.Voice.Unity.Speaker::webOutAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___webOutAudioSource_7;
	// UnityEngine.Transform Photon.Voice.Unity.Speaker::webOutListenerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___webOutListenerTransform_8;
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.Unity.Speaker::playDelayConfig
	PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 ___playDelayConfig_9;
	// System.Boolean Photon.Voice.Unity.Speaker::restartOnDeviceChange
	bool ___restartOnDeviceChange_10;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.Speaker::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_11;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::<RemoteVoice>k__BackingField
	RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* ___U3CRemoteVoiceU3Ek__BackingField_12;
	// System.Int32 Photon.Voice.Unity.Speaker::restartPlaybackPending
	int32_t ___restartPlaybackPending_13;
};

// ExitGames.Demos.DemoPunVoice.ThirdPersonController
struct ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667  : public BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25
{
	// System.Single ExitGames.Demos.DemoPunVoice.ThirdPersonController::movingTurnSpeed
	float ___movingTurnSpeed_12;
};

// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3  : public ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4
{
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceConnection::voiceComponentImpl
	VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* ___voiceComponentImpl_15;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* ___client_17;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* ___supportLoggerComponent_18;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::runInBackground
	bool ___runInBackground_19;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_20;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_21;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_22;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_23;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_24;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___speakerPrefab_25;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_t823310AB4F398AE467887CC898545B689B70003F* ___cachedRemoteVoices_26;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___primaryRecorder_27;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::usePrimaryRecorder
	bool ___usePrimaryRecorder_28;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::cppCompatibilityMode
	bool ___cppCompatibilityMode_29;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::linkedSpeakers
	List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950* ___linkedSpeakers_30;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder> Photon.Voice.Unity.VoiceConnection::recorders
	List_1_tBFD6B7B62FB7763BC57224ED666A855ACCD05536* ___recorders_31;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___Settings_32;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___SpeakerLinked_33;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* ___RemoteVoiceAdded_34;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_35;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_36;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_37;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// ExitGames.Demos.DemoPunVoice.CharacterInstantiation
struct CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// UnityEngine.Transform ExitGames.Demos.DemoPunVoice.CharacterInstantiation::SpawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SpawnPosition_5;
	// System.Single ExitGames.Demos.DemoPunVoice.CharacterInstantiation::PositionOffset
	float ___PositionOffset_6;
	// UnityEngine.GameObject[] ExitGames.Demos.DemoPunVoice.CharacterInstantiation::PrefabsToInstantiate
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___PrefabsToInstantiate_7;
	// System.Collections.Generic.List`1<UnityEngine.Transform> ExitGames.Demos.DemoPunVoice.CharacterInstantiation::SpawnPoints
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___SpawnPoints_8;
	// System.Boolean ExitGames.Demos.DemoPunVoice.CharacterInstantiation::AutoSpawn
	bool ___AutoSpawn_9;
	// System.Boolean ExitGames.Demos.DemoPunVoice.CharacterInstantiation::UseRandomOffset
	bool ___UseRandomOffset_10;
	// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/SpawnSequence ExitGames.Demos.DemoPunVoice.CharacterInstantiation::Sequence
	int32_t ___Sequence_11;
	// System.Byte ExitGames.Demos.DemoPunVoice.CharacterInstantiation::manualInstantiationEventCode
	uint8_t ___manualInstantiationEventCode_13;
	// System.Int32 ExitGames.Demos.DemoPunVoice.CharacterInstantiation::lastUsedSpawnPointIndex
	int32_t ___lastUsedSpawnPointIndex_14;
	// System.Boolean ExitGames.Demos.DemoPunVoice.CharacterInstantiation::manualInstantiation
	bool ___manualInstantiation_15;
	// System.Boolean ExitGames.Demos.DemoPunVoice.CharacterInstantiation::differentPrefabs
	bool ___differentPrefabs_16;
	// System.String ExitGames.Demos.DemoPunVoice.CharacterInstantiation::localPrefabSuffix
	String_t* ___localPrefabSuffix_17;
	// System.String ExitGames.Demos.DemoPunVoice.CharacterInstantiation::remotePrefabSuffix
	String_t* ___remotePrefabSuffix_18;
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

// ExitGames.Demos.DemoPunVoice.OrthographicController
struct OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC  : public ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667
{
	// System.Single ExitGames.Demos.DemoPunVoice.OrthographicController::smoothing
	float ___smoothing_13;
	// UnityEngine.Vector3 ExitGames.Demos.DemoPunVoice.OrthographicController::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_14;
};

// Photon.Voice.PUN.PunVoiceClient
struct PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1  : public VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3
{
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::AutoConnectAndJoin
	bool ___AutoConnectAndJoin_39;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::AutoLeaveAndDisconnect
	bool ___AutoLeaveAndDisconnect_40;
	// Photon.Realtime.EnterRoomParams Photon.Voice.PUN.PunVoiceClient::voiceRoomParams
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___voiceRoomParams_41;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::clientCalledConnectAndJoin
	bool ___clientCalledConnectAndJoin_42;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::clientCalledDisconnect
	bool ___clientCalledDisconnect_43;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::clientCalledConnectOnly
	bool ___clientCalledConnectOnly_44;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::internalDisconnect
	bool ___internalDisconnect_45;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::internalConnect
	bool ___internalConnect_46;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::usePunAppSettings
	bool ___usePunAppSettings_48;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::usePunAuthValues
	bool ___usePunAuthValues_49;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
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

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// <PrivateImplementationDetails>

// <PrivateImplementationDetails>

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// ExitGames.Client.Photon.EventData

// ExitGames.Client.Photon.EventData

// Photon.Pun.PhotonNetwork
struct PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields
{
	// System.String Photon.Pun.PhotonNetwork::gameVersion
	String_t* ___gameVersion_1;
	// Photon.Realtime.LoadBalancingClient Photon.Pun.PhotonNetwork::NetworkingClient
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___NetworkingClient_2;
	// System.Int32 Photon.Pun.PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_3;
	// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::photonServerSettings
	ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* ___photonServerSettings_5;
	// Photon.Pun.ConnectMethod Photon.Pun.PhotonNetwork::ConnectMethod
	int32_t ___ConnectMethod_7;
	// Photon.Pun.PunLogLevel Photon.Pun.PhotonNetwork::LogLevel
	int32_t ___LogLevel_8;
	// System.Boolean Photon.Pun.PhotonNetwork::EnableCloseConnection
	bool ___EnableCloseConnection_9;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForVectorSynchronization
	float ___PrecisionForVectorSynchronization_10;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForQuaternionSynchronization
	float ___PrecisionForQuaternionSynchronization_11;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForFloatSynchronization
	float ___PrecisionForFloatSynchronization_12;
	// System.Boolean Photon.Pun.PhotonNetwork::offlineMode
	bool ___offlineMode_13;
	// Photon.Realtime.Room Photon.Pun.PhotonNetwork::offlineModeRoom
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___offlineModeRoom_14;
	// System.Boolean Photon.Pun.PhotonNetwork::automaticallySyncScene
	bool ___automaticallySyncScene_15;
	// System.Int32 Photon.Pun.PhotonNetwork::sendFrequency
	int32_t ___sendFrequency_16;
	// System.Int32 Photon.Pun.PhotonNetwork::serializationFrequency
	int32_t ___serializationFrequency_17;
	// System.Boolean Photon.Pun.PhotonNetwork::isMessageQueueRunning
	bool ___isMessageQueueRunning_18;
	// System.Double Photon.Pun.PhotonNetwork::frametime
	double ___frametime_19;
	// System.Int32 Photon.Pun.PhotonNetwork::frame
	int32_t ___frame_20;
	// System.Diagnostics.Stopwatch Photon.Pun.PhotonNetwork::StartupStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___StartupStopwatch_21;
	// System.Single Photon.Pun.PhotonNetwork::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_22;
	// System.Boolean Photon.Pun.PhotonNetwork::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_24;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_25;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Pun.PhotonNetwork::PrefabsWithoutMagicCallback
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___PrefabsWithoutMagicCallback_26;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::SendInstantiateEvHashtable
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___SendInstantiateEvHashtable_27;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendInstantiateRaiseEventOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___SendInstantiateRaiseEventOptions_28;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::allowedReceivingGroups
	HashSet_1_t0B39EF96E81D9617D3E4536032F30E1AE7610153* ___allowedReceivingGroups_29;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::blockedSendingGroups
	HashSet_1_t0B39EF96E81D9617D3E4536032F30E1AE7610153* ___blockedSendingGroups_30;
	// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::reusablePVHashset
	HashSet_1_t5B6B46270D543F8EDB3F122B02D36E60196CB13B* ___reusablePVHashset_31;
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::photonViewList
	NonAllocDictionary_2_tC9904455C122E50478272CC5522AD956A7BB5F12* ___photonViewList_32;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipRequestEv
	Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4* ___OnOwnershipRequestEv_33;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferedEv
	Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4* ___OnOwnershipTransferedEv_34;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferFailedEv
	Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4* ___OnOwnershipTransferFailedEv_35;
	// System.Byte Photon.Pun.PhotonNetwork::currentLevelPrefix
	uint8_t ___currentLevelPrefix_36;
	// System.Boolean Photon.Pun.PhotonNetwork::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_37;
	// Photon.Pun.IPunPrefabPool Photon.Pun.PhotonNetwork::prefabPool
	RuntimeObject* ___prefabPool_40;
	// System.Boolean Photon.Pun.PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_41;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> Photon.Pun.PhotonNetwork::monoRPCMethodsCache
	Dictionary_2_t681C2D0152C2184DCA6AD773603D0FE709D338C9* ___monoRPCMethodsCache_42;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Photon.Pun.PhotonNetwork::rpcShortcuts
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___rpcShortcuts_43;
	// System.Boolean Photon.Pun.PhotonNetwork::RunRpcCoroutines
	bool ___RunRpcCoroutines_44;
	// UnityEngine.AsyncOperation Photon.Pun.PhotonNetwork::_AsyncLevelLoadingOperation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ____AsyncLevelLoadingOperation_45;
	// System.Single Photon.Pun.PhotonNetwork::_levelLoadingProgress
	float ____levelLoadingProgress_46;
	// System.Type Photon.Pun.PhotonNetwork::typePunRPC
	Type_t* ___typePunRPC_47;
	// System.Type Photon.Pun.PhotonNetwork::typePhotonMessageInfo
	Type_t* ___typePhotonMessageInfo_48;
	// System.Object Photon.Pun.PhotonNetwork::keyByteZero
	RuntimeObject* ___keyByteZero_49;
	// System.Object Photon.Pun.PhotonNetwork::keyByteOne
	RuntimeObject* ___keyByteOne_50;
	// System.Object Photon.Pun.PhotonNetwork::keyByteTwo
	RuntimeObject* ___keyByteTwo_51;
	// System.Object Photon.Pun.PhotonNetwork::keyByteThree
	RuntimeObject* ___keyByteThree_52;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFour
	RuntimeObject* ___keyByteFour_53;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFive
	RuntimeObject* ___keyByteFive_54;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSix
	RuntimeObject* ___keyByteSix_55;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSeven
	RuntimeObject* ___keyByteSeven_56;
	// System.Object Photon.Pun.PhotonNetwork::keyByteEight
	RuntimeObject* ___keyByteEight_57;
	// System.Object[] Photon.Pun.PhotonNetwork::emptyObjectArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___emptyObjectArray_58;
	// System.Type[] Photon.Pun.PhotonNetwork::emptyTypeArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___emptyTypeArray_59;
	// System.Collections.Generic.List`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::foundPVs
	List_1_t4AAED60DF1950E8D05C3BFEB57C6A43FBFD440B5* ___foundPVs_60;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::removeFilter
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___removeFilter_61;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::ServerCleanDestroyEvent
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___ServerCleanDestroyEvent_62;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::ServerCleanOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___ServerCleanOptions_63;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToAllOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___SendToAllOptions_64;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToOthersOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___SendToOthersOptions_65;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToSingleOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___SendToSingleOptions_66;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcFilterByViewId
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___rpcFilterByViewId_67;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::OpCleanRpcBufferOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___OpCleanRpcBufferOptions_68;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcEvent
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___rpcEvent_69;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::RpcOptionsToAll
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___RpcOptionsToAll_70;
	// System.Int32 Photon.Pun.PhotonNetwork::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_71;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamOut
	PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* ___serializeStreamOut_72;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamIn
	PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* ___serializeStreamIn_73;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::serializeRaiseEvOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___serializeRaiseEvOptions_74;
	// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch> Photon.Pun.PhotonNetwork::serializeViewBatches
	Dictionary_2_t47C3B85708CBFB02F30AF23A5D4092EC2DAD8636* ___serializeViewBatches_75;
	// Photon.Realtime.RegionHandler Photon.Pun.PhotonNetwork::_cachedRegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ____cachedRegionHandler_80;
};

// Photon.Pun.PhotonNetwork

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_StaticFields
{
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeSocketLibAvailable
	bool ___NativeSocketLibAvailable_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativePayloadEncryptionLibAvailable
	bool ___NativePayloadEncryptionLibAvailable_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeDatagramEncryptionLibAvailable
	bool ___NativeDatagramEncryptionLibAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_43;
};

// ExitGames.Client.Photon.PhotonPeer

// Photon.Realtime.Player

// Photon.Realtime.Player

// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_StaticFields
{
	// Photon.Realtime.RaiseEventOptions Photon.Realtime.RaiseEventOptions::Default
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___Default_0;
};

// Photon.Realtime.RaiseEventOptions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// ExitGames.Client.Photon.WebSocket

// ExitGames.Client.Photon.WebSocket

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c
struct U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields
{
	// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c::<>9
	U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235* ___U3CU3E9_0;
	// System.Func`2<Photon.Voice.DeviceInfo,System.String> ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c::<>9__33_0
	Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* ___U3CU3E9__33_0_1;
	// System.Func`2<Photon.Voice.DeviceInfo,System.String> ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c::<>9__33_1
	Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* ___U3CU3E9__33_1_2;
};

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// Photon.Voice.Unity.AudioInEnumerator

// Photon.Voice.Unity.AudioInEnumerator

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_StaticFields
{
	// Photon.Voice.DeviceInfo Photon.Voice.DeviceInfo::Default
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___Default_6;
};

// Photon.Voice.DeviceInfo

// System.Double

// System.Double

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

// Photon.Realtime.LoadBalancingPeer

// Photon.Realtime.LoadBalancingPeer

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

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

// System.UInt32

// System.UInt32

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_11;
};

// Photon.Realtime.LoadBalancingClient

// MouseLookHelper

// MouseLookHelper

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Toggle/ToggleEvent

// UnityEngine.UI.Toggle/ToggleEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Photon.Voice.LoadBalancingTransport

// Photon.Voice.LoadBalancingTransport

// System.Action`1<System.Single>

// System.Action`1<System.Single>

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>

// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>

// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>

// System.Func`2<Photon.Voice.DeviceInfo,System.String>

// System.Func`2<Photon.Voice.DeviceInfo,System.String>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle

// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle

// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged

// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged

// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated

// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ExitGames.Demos.DemoPunVoice.BaseController

// ExitGames.Demos.DemoPunVoice.BaseController

// ExitGames.Demos.DemoPunVoice.BetterToggle
struct BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_StaticFields
{
	// ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle ExitGames.Demos.DemoPunVoice.BetterToggle::ToggleValueChanged
	OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* ___ToggleValueChanged_5;
};

// ExitGames.Demos.DemoPunVoice.BetterToggle

// ExitGames.Demos.DemoPunVoice.ChangePOV
struct ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_StaticFields
{
	// ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged ExitGames.Demos.DemoPunVoice.ChangePOV::CameraChanged
	OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* ___CameraChanged_14;
};

// ExitGames.Demos.DemoPunVoice.ChangePOV

// ExitGames.Demos.DemoPunVoice.Highlighter

// ExitGames.Demos.DemoPunVoice.Highlighter

// Photon.Pun.PhotonView

// Photon.Pun.PhotonView

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI
struct VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_StaticFields
{
	// ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle ExitGames.Demos.DemoPunVoice.VoiceDemoUI::DebugToggled
	OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* ___DebugToggled_23;
};

// ExitGames.Demos.DemoPunVoice.VoiceDemoUI

// ExitGames.Demos.DemoPunVoice.FirstPersonController

// ExitGames.Demos.DemoPunVoice.FirstPersonController

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// Photon.Pun.MonoBehaviourPunCallbacks

// Photon.Pun.MonoBehaviourPunCallbacks

// Photon.Voice.PUN.PhotonVoiceView

// Photon.Voice.PUN.PhotonVoiceView

// Photon.Voice.Unity.Recorder

// Photon.Voice.Unity.Recorder

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// Photon.Voice.Unity.Speaker

// Photon.Voice.Unity.Speaker

// ExitGames.Demos.DemoPunVoice.ThirdPersonController

// ExitGames.Demos.DemoPunVoice.ThirdPersonController

// Photon.Voice.Unity.VoiceConnection

// Photon.Voice.Unity.VoiceConnection

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// ExitGames.Demos.DemoPunVoice.CharacterInstantiation
struct CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_StaticFields
{
	// ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated ExitGames.Demos.DemoPunVoice.CharacterInstantiation::CharacterInstantiated
	OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* ___CharacterInstantiated_12;
};

// ExitGames.Demos.DemoPunVoice.CharacterInstantiation

// ExitGames.Demos.DemoPunVoice.OrthographicController

// ExitGames.Demos.DemoPunVoice.OrthographicController

// Photon.Voice.PUN.PunVoiceClient
struct PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1_StaticFields
{
	// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PunVoiceClient::instance
	PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* ___instance_47;
};

// Photon.Voice.PUN.PunVoiceClient

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098  : public RuntimeArray
{
	ALIGN_FIELD (8) Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* m_Items[1];

	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mEBF3FAD6176B0ABD7207DA4D7239671D972C82E6_gshared (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<Photon.Voice.DeviceInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_m6AB2CC623876C2D75EE29850C65A2141EA9246F4_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Func`2<Photon.Voice.DeviceInfo,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m17589A9C7ABE17920328BFDE381699336F7DBE7B_gshared (Func_2_t21A6BB7DFF9CA0A9949691055DE53B07F0B384D9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Photon.Voice.DeviceInfo,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_TisRuntimeObject_m70CF68A8084100E9D871EF99315333A76390DF13_gshared (RuntimeObject* ___0_source, Func_2_t21A6BB7DFF9CA0A9949691055DE53B07F0B384D9* ___1_selector, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mD4B1295B4D9D9687987116A6B7710773A31C7F2E (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Byte[] ExitGames.Client.Photon.WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WebSocket_Recv_mEACB78B578488E4E0ED5BF37886932D0C0C0AD43 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_mAD6DB1889E877BA6B7508A7E372AE425C7EA668F (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_mE481043205BFC37D948C0879B902A54F09D8F508 (int32_t ___0_socketInstance, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_m29C11E96CC093B381119F917893606F8034E74B2 (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_mC8EC9EF77ABC16929D4FE49B18CEEA77D568A102 (String_t* ___0_url, String_t* ___1_protocols, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_mF869929D2C713487E6246536E970A3B93C410600 (int32_t ___0_socketInstance, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m5DF899791780A85B8662B678886B936876755A6E (int32_t ___0_socketInstance, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m3488AD7573B5791C796C3BCE0CDAD848EF1D28E2 (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged__ctor_mE400CC879ED6B5CEE5520D5862DF829D56C60DD6 (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::add_CameraChanged(ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_add_CameraChanged_m45F436F543266857262C9289A3003AEAA0B9D4DB (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::remove_CameraChanged(ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_remove_CameraChanged_m420FBD4EDD926B3CB6AC32A1AE3C0564CD63F92F (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxisRaw_m1E30C7F4B0BC79DFEB94B689712773864E1BEA1E (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___0_call, method);
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::Invoke(UnityEngine.UI.Toggle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_inline (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::OnToggleValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_OnToggleValueChanged_m0F7D8B0330F4414B94E4576419C323806835D799 (BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated__ctor_mFF0A21EE34228E67F4CCBB7492121FB29B9EF6AF (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::add_CharacterInstantiated(ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_add_CharacterInstantiated_mBDEDF7B4C8B816B7D0134CED125953C6A0330EDB (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_AddCallbackTarget_m484BD3273273426AE5B66E8599405D2501079E58 (RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::remove_CharacterInstantiated(ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_remove_CharacterInstantiated_m87F0FF623A9D28913449C2012E6CE5E1FEC42AC2 (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_RemoveCallbackTarget_m7CE5AF22A90F9E3886919CE540D10089A01C46AB (RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ExitGames.Demos.DemoPunVoice.FirstPersonController>()
inline FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* GameObject_GetComponent_TisFirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1_m1388841F064B0C0F0C52CE874D92EF4BD67F81AF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ExitGames.Demos.DemoPunVoice.ThirdPersonController>()
inline ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* GameObject_GetComponent_TisThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667_m14D4EF7E28A6E21902C577A3D2352EF9B8903FF7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ExitGames.Demos.DemoPunVoice.OrthographicController>()
inline OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* GameObject_GetComponent_TisOrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC_m3B3CE47EA2EF1C1D9541DCCBD8C3F11B00868BE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::ToggleMode(ExitGames.Demos.DemoPunVoice.BaseController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_ToggleMode_m7D15C5133CAF4CE5A1B98AF6993C2E47D6EBE049 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* ___0_controller, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::BroadcastChange(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_BroadcastChange_mA4B6F14E2A520B8E1182046EE2B8E5000F9C37EE (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::Invoke(UnityEngine.Camera)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_inline (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// Photon.Realtime.Player Photon.Pun.PhotonNetwork::get_LocalPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* PhotonNetwork_get_LocalPlayer_mEA3335FEF4E4B55C1EFAC8AFA8D5F7E3D7FBE4DC (const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::ManualInstantiation(System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_ManualInstantiation_mE2ADF13AAF23D80F34360F121C2476C6D98567FB (CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Photon.Pun.PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Byte,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PhotonNetwork_Instantiate_mD5714F5AC4C17B75AFD65676226351C91B60AF0D (String_t* ___0_prefabName, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, uint8_t ___3_group, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___4_data, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::Invoke(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_inline (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* GameObject_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m0E6283AF5901A2D881EFE3F8E321B502D2B2F950 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean Photon.Pun.PhotonNetwork::AllocateViewID(Photon.Pun.PhotonView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_AllocateViewID_mA07AE80A1D3B664BD5140342283010D349A233B9 (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___0_view, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.PhotonView::get_ViewID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RaiseEventOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEventOptions__ctor_m5AD5093C00DD3EE18EB5033E49C61934E978A94F (RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::RaiseEvent(System.Byte,System.Object,Photon.Realtime.RaiseEventOptions,ExitGames.Client.Photon.SendOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_RaiseEvent_mFB515FAB067583F656F8B64D7CF44F8F0C41224B (uint8_t ___0_eventCode, RuntimeObject* ___1_eventContent, RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___2_raiseEventOptions, SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 ___3_sendOptions, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Object ExitGames.Client.Photon.EventData::get_CustomData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventData_get_CustomData_m3386E36D9083B2DD33634C698B7E50344AC9A09B (EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonView::set_ViewID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_ViewID_m81F2B69E5C222A86270FCDF08F0C4FEAD98AFB18 (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_mE70961834F42FFEEB06CB9C68175354E0C255664 (int32_t ___0_seed, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2 (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::SetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_SetCamera_mBBDDC1CF1B68E21C4EB46856CB8D5410D05DD787 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) ;
// System.Void MouseLookHelper::Init(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLookHelper_Init_m7E1BB866D93A3D9BB70DDDE6F7337CF0485308AE (MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_character, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_camera, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_mB42EA49AA58565BCD3188E8D40530FA1710996CB (FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void MouseLookHelper::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLookHelper_LookRotation_mEBD5F19E301E36C6D10CB5DD298223D4BBBD9DF8 (MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_character, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_camera, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void MouseLookHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLookHelper__ctor_m16D4E8559CAF5968D08795FFC4C881291467EADA (MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController__ctor_m08FD86466B7134B13A5C484C37439498BB4C64F5 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle__ctor_m4BA7AEF10D5988FC38E5245D10218DE7DB1FCACF (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::add_DebugToggled(ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_add_DebugToggled_m47A24EF443BECBBD11A12947F15166B621C8E324 (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::remove_DebugToggled(ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_remove_DebugToggled_m8A5B824AC442CA6E9E49F39E6D028282AD7DE10A (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Photon.Voice.PUN.PhotonVoiceView>()
inline PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* Component_GetComponentInParent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m8CCF0CFEAB5126A8741117A6D761CB5AD7DFFFC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsRecording_m402F87721119C1BB8CE611ED8F9D2C2A0905CD6E (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSpeaking_m8412D81FD36F7800BC5E4A1E6E32C50EE691067D (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::get_SpeakerInUse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.Speaker::get_Lag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Speaker_get_Lag_m9D4BEBE542D8B8FE7561E00937EEB3387DB78560 (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_Init_m67734A07F46BB51C545C1911FB316AD6BAB754FB (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.ThirdPersonController::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m9914D8B9B6C39113B1F45B6CA333E5E80D9D66D4 (ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* __this, float ___0_h, float ___1_v, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.OrthographicController::CameraFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrthographicController_CameraFollow_m5B16C929C80FAF906DFB3EDC10FFF46C1EC66C04 (OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.ThirdPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__ctor_m0C0949F618CA388792E0CC164B2033373185DFE8 (ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_inline (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, const RuntimeMethod* method) ;
// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PunVoiceClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A (const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle__ctor_m00B08FA3B2F227E580842A724147633DF1B99AAB (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::remove_ToggleValueChanged(ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_remove_ToggleValueChanged_m965D705F8E8F1FF81A9F6B598298B5341021FD6B (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mEBF3FAD6176B0ABD7207DA4D7239671D972C82E6_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::remove_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_remove_StateChanged_m05D0CADDC74CE72BDD2CC9BBCBA8257D9CACD85B (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Photon.Voice.PUN.PhotonVoiceView>()
inline PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* GameObject_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m9A8A84F07D07717192CA584AAE1632CB821BD5A5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioListener::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::get_RecorderInUse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_VoiceDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_VoiceDetection_mF217F20782F7563928EF8A09B5283FF3D5B58F52_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Demos.DemoPunVoice.VoiceDemoUI::get_DebugMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDemoUI_get_DebugMode_mD708E74166B1700D28170766E7D8E85B2CA46E8A_inline (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_TransmitEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_DebugEchoMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_DebugEchoMode_m727853F9D824E99FE754C56FAE427434E308563F (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721 (float ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_TransmitEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_TransmitEnabled_mB6B4C554D91CC63D61DBAE8D0C9FA948CD1E1496 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_VoiceDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_VoiceDetection_m52AF86118A2E56181935DA2F77B7437CDD06CAD0 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_DebugEchoMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_DebugEchoMode_mF63CA073EC931A8ED3323261BC44A984B158765C (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::set_DebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_set_DebugMode_mD94AC3B48571B50FA777BBA23DD9D2779C08FABD (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::add_ToggleValueChanged(ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_add_ToggleValueChanged_m153F63A0415ACE46D24E78E1D790D1475A9CF7FD (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::add_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_add_StateChanged_mA6384FF2BBFAD74989F27734C0A2251F6F470EB9 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Toggle>()
inline ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::InitToggles(UnityEngine.UI.Toggle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_InitToggles_m322C6B4ECF6B89A5951511DEF32925DB8F7F819C (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___0_toggles, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.AudioInEnumerator::.ctor(Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInEnumerator__ctor_mDAE7254E287178AC4A735D8001A62551F50B43F3 (AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
// Photon.Voice.IDeviceEnumerator Photon.Voice.Platform::CreateAudioInEnumerator(Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateAudioInEnumerator_mAC7EB99564BE856564FD77BA5DEF350B04A72163 (RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<Photon.Voice.DeviceInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_m6AB2CC623876C2D75EE29850C65A2141EA9246F4 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_m6AB2CC623876C2D75EE29850C65A2141EA9246F4_gshared)(___0_source, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void System.Func`2<Photon.Voice.DeviceInfo,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD513B99A1378B3BB13530A26474AFA2134923A8D (Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m17589A9C7ABE17920328BFDE381699336F7DBE7B_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Photon.Voice.DeviceInfo,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_TisString_t_m8BC012759978357E003DF018FD59A66B363F24A0 (RuntimeObject* ___0_source, Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB*, const RuntimeMethod*))Enumerable_Select_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_TisRuntimeObject_m70CF68A8084100E9D871EF99315333A76390DF13_gshared)(___0_source, ___1_selector, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Pun.PhotonNetwork::get_NetworkClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_NetworkClientState_m14926C92B031C5788348074278770D6CB848BE7D (const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_Disconnect_mD35F0E20EE21ADD3BE7787C3E26EBC27476EF734 (const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::ConnectUsingSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_ConnectUsingSettings_m5062DDA82806820AE9358F849B0533B82230E540 (const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Voice.Unity.VoiceConnection::get_ClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.PUN.PunVoiceClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_Disconnect_mD121BB1E106EAFD8CC71EAD5BB17641842493377 (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.PUN.PunVoiceClient::ConnectAndJoinRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_ConnectAndJoinRoom_m80E65D6D1DEA18B6AC61FC6F0BC27CCC9FC9207B (PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_VoiceDetectorCalibrating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_VoiceDetectorCalibrating_m70D159F6E1FDD1B15A76CDEADEF1943BC38B1846 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::VoiceDetectorCalibrate(System.Int32,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_VoiceDetectorCalibrate_m50971EE44ABB9A17D023A6835F9FC1D10F635581 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, int32_t ___0_durationMs, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___1_detectionEndedCallback, const RuntimeMethod* method) ;
// Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.Unity.Recorder::get_LevelMeter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Recorder_get_LevelMeter_m4F6C7F01FC0FF7B4878A2373D81C1EABFF1209FF (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::UpdateUiBasedOnVoiceState(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_UpdateUiBasedOnVoiceState_mEFBFDED03B1DAC9C2D8D5EBFAABACD3B95B48549 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, int32_t ___0_voiceClientState, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_InRoom_mFBE0C1A516C34FBAD9923933C73E07080FDA199D (const RuntimeMethod* method) ;
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6779D3D0CBBD86E835BDAB58C577FEE3EC253C42 (U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235* __this, const RuntimeMethod* method) ;
// System.String Photon.Voice.DeviceInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceInfo_ToString_m5EB035A3212F6102102B2EBD7278D05FF6C94C17 (DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketCreate(char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketState(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketRecv(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketRecvLength(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketClose(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketError(int32_t, uint8_t*, int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String> ExitGames.Client.Photon.WebSocket::get_DebugReturn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* WebSocket_get_DebugReturn_mCAC308CC7D52756DB64F5D153BD31AE45D290687 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	{
		// public Action<DebugLevel, string> DebugReturn { get; set; }
		Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* L_0 = __this->___U3CDebugReturnU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::set_DebugReturn(System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_set_DebugReturn_mFFCA1E6269F716339404AB19D621E772B29921A5 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<DebugLevel, string> DebugReturn { get; set; }
		Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* L_0 = ___0_value;
		__this->___U3CDebugReturnU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDebugReturnU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::.ctor(System.Uri,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE4721C4DB1E53D894243B79FFCC090A6C904F70C (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_url, String_t* ___1_proxyAddress, String_t* ___2_protocols, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// private string protocols = "GpBinaryV16";
		__this->___protocols_2 = _stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___protocols_2), (void*)_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		// public WebSocket(Uri url, string proxyAddress, string protocols = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.mUrl = url;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_url;
		__this->___mUrl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUrl_0), (void*)L_0);
		// this.mProxyAddress = proxyAddress;
		String_t* L_1 = ___1_proxyAddress;
		__this->___mProxyAddress_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mProxyAddress_1), (void*)L_1);
		// if (protocols != null)
		String_t* L_2 = ___2_protocols;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// this.protocols = protocols;
		String_t* L_3 = ___2_protocols;
		__this->___protocols_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___protocols_2), (void*)L_3);
	}

IL_0029:
	{
		// string protocol = mUrl.Scheme;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = __this->___mUrl_0;
		String_t* L_5;
		L_5 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_4, NULL);
		V_0 = L_5;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, NULL);
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, NULL);
		if (L_9)
		{
			goto IL_0060;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_mE4721C4DB1E53D894243B79FFCC090A6C904F70C_RuntimeMethod_var)));
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.String ExitGames.Client.Photon.WebSocket::get_ProxyAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_ProxyAddress_m976C6BF04E3DA660EB42D333503BAC4867B9C0C3 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	{
		// get { return mProxyAddress; }
		String_t* L_0 = __this->___mProxyAddress_1;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::SendString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SendString_m5293C75E8F89CE379549AA67604AE1E8091D1D8B (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	{
		// Send(Encoding.UTF8.GetBytes(str));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_str;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		WebSocket_Send_mD4B1295B4D9D9687987116A6B7710773A31C7F2E(__this, L_2, NULL);
		// }
		return;
	}
}
// System.String ExitGames.Client.Photon.WebSocket::RecvString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_RecvString_m6CBBF6BCD10468351A137ED729B1EAE77077C600 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] retval = Recv();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = WebSocket_Recv_mEACB78B578488E4E0ED5BF37886932D0C0C0AD43(__this, NULL);
		V_0 = L_0;
		// if (retval == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000c:
	{
		// return Encoding.UTF8.GetString(retval);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_mC8EC9EF77ABC16929D4FE49B18CEEA77D568A102 (String_t* ___0_url, String_t* ___1_protocols, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_url' to native representation
	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	// Marshaling of parameter '___1_protocols' to native representation
	char* ____1_protocols_marshaled = NULL;
	____1_protocols_marshaled = il2cpp_codegen_marshal_string(___1_protocols);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketCreate)(____0_url_marshaled, ____1_protocols_marshaled);

	// Marshaling cleanup of parameter '___0_url' native representation
	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_protocols' native representation
	il2cpp_codegen_marshal_free(____1_protocols_marshaled);
	____1_protocols_marshaled = NULL;

	return returnValue;
}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m5DF899791780A85B8662B678886B936876755A6E (int32_t ___0_socketInstance, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketState)(___0_socketInstance);

	return returnValue;
}
// System.Void ExitGames.Client.Photon.WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_mAD6DB1889E877BA6B7508A7E372AE425C7EA668F (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___1_ptr' to native representation
	uint8_t* ____1_ptr_marshaled = NULL;
	if (___1_ptr != NULL)
	{
		____1_ptr_marshaled = reinterpret_cast<uint8_t*>((___1_ptr)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketSend)(___0_socketInstance, ____1_ptr_marshaled, ___2_length);

}
// System.Void ExitGames.Client.Photon.WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_m29C11E96CC093B381119F917893606F8034E74B2 (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___1_ptr' to native representation
	uint8_t* ____1_ptr_marshaled = NULL;
	if (___1_ptr != NULL)
	{
		____1_ptr_marshaled = reinterpret_cast<uint8_t*>((___1_ptr)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketRecv)(___0_socketInstance, ____1_ptr_marshaled, ___2_length);

}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_mE481043205BFC37D948C0879B902A54F09D8F508 (int32_t ___0_socketInstance, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketRecvLength)(___0_socketInstance);

	return returnValue;
}
// System.Void ExitGames.Client.Photon.WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_mF869929D2C713487E6246536E970A3B93C410600 (int32_t ___0_socketInstance, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketClose)(___0_socketInstance);

}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m3488AD7573B5791C796C3BCE0CDAD848EF1D28E2 (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___1_ptr' to native representation
	uint8_t* ____1_ptr_marshaled = NULL;
	if (___1_ptr != NULL)
	{
		____1_ptr_marshaled = reinterpret_cast<uint8_t*>((___1_ptr)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketError)(___0_socketInstance, ____1_ptr_marshaled, ___2_length);

	return returnValue;
}
// System.Void ExitGames.Client.Photon.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mD4B1295B4D9D9687987116A6B7710773A31C7F2E (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) 
{
	{
		// SocketSend (m_NativeRef, buffer, buffer.Length);
		int32_t L_0 = __this->___m_NativeRef_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_buffer;
		WebSocket_SocketSend_mAD6DB1889E877BA6B7508A7E372AE425C7EA668F(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		// }
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WebSocket_Recv_mEACB78B578488E4E0ED5BF37886932D0C0C0AD43 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// int length = SocketRecvLength (m_NativeRef);
		int32_t L_0 = __this->___m_NativeRef_4;
		int32_t L_1;
		L_1 = WebSocket_SocketRecvLength_mE481043205BFC37D948C0879B902A54F09D8F508(L_0, NULL);
		V_0 = L_1;
		// if (length == 0)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0011:
	{
		// byte[] buffer = new byte[length];
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// SocketRecv (m_NativeRef, buffer, length);
		int32_t L_5 = __this->___m_NativeRef_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		int32_t L_7 = V_0;
		WebSocket_SocketRecv_m29C11E96CC093B381119F917893606F8034E74B2(L_5, L_6, L_7, NULL);
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		return L_8;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m395E986EBB2985B29B7C9857DDC89315758F92E6 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	{
		// m_NativeRef = SocketCreate (mUrl.ToString(), this.protocols);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___mUrl_0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = __this->___protocols_2;
		int32_t L_3;
		L_3 = WebSocket_SocketCreate_mC8EC9EF77ABC16929D4FE49B18CEEA77D568A102(L_1, L_2, NULL);
		__this->___m_NativeRef_4 = L_3;
		// }
		return;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_mEBFAB80947385C48D84F5F6496E8BD49CCC540A5 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	{
		// SocketClose(m_NativeRef);
		int32_t L_0 = __this->___m_NativeRef_4;
		WebSocket_SocketClose_mF869929D2C713487E6246536E970A3B93C410600(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_mBB8227012F2C636EFC7D63313F1DDB7D31EA2417 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	{
		// get { return SocketState(m_NativeRef) != 0; }
		int32_t L_0 = __this->___m_NativeRef_4;
		int32_t L_1;
		L_1 = WebSocket_SocketState_m5DF899791780A85B8662B678886B936876755A6E(L_0, NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.String ExitGames.Client.Photon.WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m57258F3B04019AD3E9A4FCA3B22F6D036232A588 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] buffer = new byte[bufsize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// int result = SocketError (m_NativeRef, buffer, bufsize);
		int32_t L_1 = __this->___m_NativeRef_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3;
		L_3 = WebSocket_SocketError_m3488AD7573B5791C796C3BCE0CDAD848EF1D28E2(L_1, L_2, ((int32_t)1024), NULL);
		// if (result == 0)
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0020:
	{
		// return Encoding.UTF8.GetString (buffer);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_4, L_5);
		return L_6;
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
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_OnEnable_m7E818852F634517263B452AD37891DF63040EF4B (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangePOV.CameraChanged += this.ChangePOV_CameraChanged;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_0 = (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)il2cpp_codegen_object_new(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		OnCameraChanged__ctor_mE400CC879ED6B5CEE5520D5862DF829D56C60DD6(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		ChangePOV_add_CameraChanged_m45F436F543266857262C9289A3003AEAA0B9D4DB(L_0, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_OnDisable_mEE5A1D45C7B746BA58C76629A79DBB56FCDC5102 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangePOV.CameraChanged -= this.ChangePOV_CameraChanged;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_0 = (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)il2cpp_codegen_object_new(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		OnCameraChanged__ctor_mE400CC879ED6B5CEE5520D5862DF829D56C60DD6(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		ChangePOV_remove_CameraChanged_m420FBD4EDD926B3CB6AC32A1AE3C0564CD63F92F(L_0, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::ChangePOV_CameraChanged(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_ChangePOV_CameraChanged_m558C3BDBCD6FE6FFF35CF8F2F70C06BAC0F239BA (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (camera != this.ControllerCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___ControllerCamera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// this.HideCamera(this.ControllerCamera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___ControllerCamera_4;
		VirtualActionInvoker1< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(13 /* System.Void ExitGames.Demos.DemoPunVoice.BaseController::HideCamera(UnityEngine.Camera) */, __this, L_3);
		return;
	}

IL_0022:
	{
		// this.ShowCamera(this.ControllerCamera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___ControllerCamera_4;
		VirtualActionInvoker1< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(12 /* System.Void ExitGames.Demos.DemoPunVoice.BaseController::ShowCamera(UnityEngine.Camera) */, __this, L_4);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_Start_mB2EF5AF065666CE22C0613A3298AEA5C26EFF101 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonView photonView = this.GetComponent<PhotonView>();
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2(__this, Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		// if (photonView.IsMine)
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// this.Init();
		VirtualActionInvoker0::Invoke(8 /* System.Void ExitGames.Demos.DemoPunVoice.BaseController::Init() */, __this);
		// this.SetCamera();
		VirtualActionInvoker0::Invoke(9 /* System.Void ExitGames.Demos.DemoPunVoice.BaseController::SetCamera() */, __this);
		return;
	}

IL_001a:
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_Init_m67734A07F46BB51C545C1911FB316AD6BAB754FB (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.rigidBody = this.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidBody_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidBody_5), (void*)L_0);
		// this.animator = this.GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::SetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_SetCamera_mBBDDC1CF1B68E21C4EB46856CB8D5410D05DD787 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) 
{
	{
		// this.camTrans = this.ControllerCamera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___ControllerCamera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___camTrans_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camTrans_7), (void*)L_1);
		// this.camTrans.position += this.cameraDistance * this.transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___camTrans_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = __this->___cameraDistance_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_5, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_8, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_9, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::UpdateAnimator(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_UpdateAnimator_m44E9C9BF5F5B18F3D972D92F935C50D601225A19 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, float ___0_h, float ___1_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral926A646AB5A68B4F9CE13C5B42BF00FE91E8C2D9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// bool walking = h != 0 || v != 0;
		float L_0 = ___0_h;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = ___1_v;
		G_B3_0 = ((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		// this.animator.SetBool("IsWalking", walking);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_6;
		bool L_3 = V_0;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral926A646AB5A68B4F9CE13C5B42BF00FE91E8C2D9, L_3, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_FixedUpdate_mA59131C1A905579C10D01F4FA8BB2318DC9FE0D2 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.h = CrossPlatformInputManager.GetAxisRaw("Horizontal");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxisRaw_m1E30C7F4B0BC79DFEB94B689712773864E1BEA1E(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___h_8 = L_0;
		// this.v = CrossPlatformInputManager.GetAxisRaw("Vertical");
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxisRaw_m1E30C7F4B0BC79DFEB94B689712773864E1BEA1E(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		__this->___v_9 = L_1;
		// this.UpdateAnimator(this.h, this.v);
		float L_2 = __this->___h_8;
		float L_3 = __this->___v_9;
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void ExitGames.Demos.DemoPunVoice.BaseController::UpdateAnimator(System.Single,System.Single) */, __this, L_2, L_3);
		// this.Move(this.h, this.v);
		float L_4 = __this->___h_8;
		float L_5 = __this->___v_9;
		VirtualActionInvoker2< float, float >::Invoke(14 /* System.Void ExitGames.Demos.DemoPunVoice.BaseController::Move(System.Single,System.Single) */, __this, L_4, L_5);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::ShowCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_ShowCamera_mB5241CB7756230DE025EC02F2C4FD93CB6DECAE7 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (camera != null) { camera.gameObject.SetActive(true); }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (camera != null) { camera.gameObject.SetActive(true); }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___0_camera;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::HideCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_HideCamera_m555DC69825ED9A87CC3B27211C184039F881F6D6 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (camera != null) { camera.gameObject.SetActive(false); }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (camera != null) { camera.gameObject.SetActive(false); }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___0_camera;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BaseController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController__ctor_m08FD86466B7134B13A5C484C37439498BB4C64F5 (BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* __this, const RuntimeMethod* method) 
{
	{
		// protected float speed = 5f;
		__this->___speed_10 = (5.0f);
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
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::add_ToggleValueChanged(ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_add_ToggleValueChanged_m153F63A0415ACE46D24E78E1D790D1475A9CF7FD (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* V_0 = NULL;
	OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* V_1 = NULL;
	OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* V_2 = NULL;
	{
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_0 = ((BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_StaticFields*)il2cpp_codegen_static_fields_for(BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var))->___ToggleValueChanged_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_1 = V_0;
		V_1 = L_1;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_2 = V_1;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*)CastclassSealed((RuntimeObject*)L_4, OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0_il2cpp_TypeInfo_var));
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_5 = V_2;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_6 = V_1;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*>((&((BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_StaticFields*)il2cpp_codegen_static_fields_for(BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var))->___ToggleValueChanged_5), L_5, L_6);
		V_0 = L_7;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_8 = V_0;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*)L_8) == ((RuntimeObject*)(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::remove_ToggleValueChanged(ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_remove_ToggleValueChanged_m965D705F8E8F1FF81A9F6B598298B5341021FD6B (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* V_0 = NULL;
	OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* V_1 = NULL;
	OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* V_2 = NULL;
	{
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_0 = ((BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_StaticFields*)il2cpp_codegen_static_fields_for(BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var))->___ToggleValueChanged_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_1 = V_0;
		V_1 = L_1;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_2 = V_1;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*)CastclassSealed((RuntimeObject*)L_4, OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0_il2cpp_TypeInfo_var));
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_5 = V_2;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_6 = V_1;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*>((&((BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_StaticFields*)il2cpp_codegen_static_fields_for(BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var))->___ToggleValueChanged_5), L_5, L_6);
		V_0 = L_7;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_8 = V_0;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*)L_8) == ((RuntimeObject*)(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_Start_mF3E31B206B42DDA7536650D92603926645AD193A (BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BetterToggle_U3CStartU3Eb__5_0_m68E30E6EE41A30BCDFAE08BAE04AB75FFCB5B652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.toggle = this.GetComponent<Toggle>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0;
		L_0 = Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE(__this, Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		__this->___toggle_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_4), (void*)L_0);
		// this.toggle.onValueChanged.AddListener(delegate { this.OnToggleValueChanged(); });
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_2 = L_1->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_3 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_3, __this, (intptr_t)((void*)BetterToggle_U3CStartU3Eb__5_0_m68E30E6EE41A30BCDFAE08BAE04AB75FFCB5B652_RuntimeMethod_var), NULL);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_2, L_3, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::OnToggleValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_OnToggleValueChanged_m0F7D8B0330F4414B94E4576419C323806835D799 (BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ToggleValueChanged != null)
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_0 = ((BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_StaticFields*)il2cpp_codegen_static_fields_for(BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var))->___ToggleValueChanged_5;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// ToggleValueChanged(this.toggle);
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_1 = ((BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_StaticFields*)il2cpp_codegen_static_fields_for(BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F_il2cpp_TypeInfo_var))->___ToggleValueChanged_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___toggle_4;
		OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_inline(L_1, L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle__ctor_m2603CCFC1FBF9C96A5D27370444260D96B5899C4 (BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle::<Start>b__5_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterToggle_U3CStartU3Eb__5_0_m68E30E6EE41A30BCDFAE08BAE04AB75FFCB5B652 (BetterToggle_tA716A035F8934CE9109C1C95B32E5F1E4EAB6C2F* __this, bool ___0_U3Cp0U3E, const RuntimeMethod* method) 
{
	{
		// this.toggle.onValueChanged.AddListener(delegate { this.OnToggleValueChanged(); });
		BetterToggle_OnToggleValueChanged_m0F7D8B0330F4414B94E4576419C323806835D799(__this, NULL);
		// this.toggle.onValueChanged.AddListener(delegate { this.OnToggleValueChanged(); });
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
void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_Multicast(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* currentDelegate = reinterpret_cast<OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_toggle, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenInst(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_toggle, method);
}
void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenStatic(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_toggle, method);
}
void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenStaticInvoker(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_toggle);
}
void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_ClosedStaticInvoker(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_toggle);
}
void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenVirtual(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_toggle);
}
void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenInterface(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_toggle);
}
void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenGenericVirtual(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___0_toggle);
}
void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenGenericInterface(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___0_toggle);
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle__ctor_m00B08FA3B2F227E580842A724147633DF1B99AAB (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_Multicast;
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::Invoke(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65 (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_toggle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::BeginInvoke(UnityEngine.UI.Toggle,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnToggle_BeginInvoke_m8AEDAC137D5C1289DFB6C7F6A577B522FB6E2755 (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_toggle;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ExitGames.Demos.DemoPunVoice.BetterToggle/OnToggle::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggle_EndInvoke_mF93EAEC959CB55754B67D09CBEBD86985E8D8579 (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::add_CameraChanged(ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_add_CameraChanged_m45F436F543266857262C9289A3003AEAA0B9D4DB (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* V_0 = NULL;
	OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* V_1 = NULL;
	OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* V_2 = NULL;
	{
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_0 = ((ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_StaticFields*)il2cpp_codegen_static_fields_for(ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var))->___CameraChanged_14;
		V_0 = L_0;
	}

IL_0006:
	{
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_1 = V_0;
		V_1 = L_1;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_2 = V_1;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)CastclassSealed((RuntimeObject*)L_4, OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var));
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_5 = V_2;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_6 = V_1;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*>((&((ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_StaticFields*)il2cpp_codegen_static_fields_for(ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var))->___CameraChanged_14), L_5, L_6);
		V_0 = L_7;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_8 = V_0;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)L_8) == ((RuntimeObject*)(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::remove_CameraChanged(ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_remove_CameraChanged_m420FBD4EDD926B3CB6AC32A1AE3C0564CD63F92F (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* V_0 = NULL;
	OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* V_1 = NULL;
	OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* V_2 = NULL;
	{
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_0 = ((ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_StaticFields*)il2cpp_codegen_static_fields_for(ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var))->___CameraChanged_14;
		V_0 = L_0;
	}

IL_0006:
	{
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_1 = V_0;
		V_1 = L_1;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_2 = V_1;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)CastclassSealed((RuntimeObject*)L_4, OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var));
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_5 = V_2;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_6 = V_1;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*>((&((ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_StaticFields*)il2cpp_codegen_static_fields_for(ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var))->___CameraChanged_14), L_5, L_6);
		V_0 = L_7;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_8 = V_0;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)L_8) == ((RuntimeObject*)(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnEnable_mE5326611AF9F0F32CB7EE2E8B37D4B9E8F94F9BD (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangePOV_OnCharacterInstantiated_m3135CA6446FC5A73DC1F7F6B7DE5D47322AA7874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CharacterInstantiation.CharacterInstantiated += this.OnCharacterInstantiated;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_0 = (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)il2cpp_codegen_object_new(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		OnCharacterInstantiated__ctor_mFF0A21EE34228E67F4CCBB7492121FB29B9EF6AF(L_0, __this, (intptr_t)((void*)ChangePOV_OnCharacterInstantiated_m3135CA6446FC5A73DC1F7F6B7DE5D47322AA7874_RuntimeMethod_var), NULL);
		CharacterInstantiation_add_CharacterInstantiated_mBDEDF7B4C8B816B7D0134CED125953C6A0330EDB(L_0, NULL);
		// PhotonNetwork.AddCallbackTarget(this);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_AddCallbackTarget_m484BD3273273426AE5B66E8599405D2501079E58(__this, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnDisable_mA307AE49DD41A9FE00003D2DC7E3E9B305E265B5 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangePOV_OnCharacterInstantiated_m3135CA6446FC5A73DC1F7F6B7DE5D47322AA7874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CharacterInstantiation.CharacterInstantiated -= this.OnCharacterInstantiated;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_0 = (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)il2cpp_codegen_object_new(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		OnCharacterInstantiated__ctor_mFF0A21EE34228E67F4CCBB7492121FB29B9EF6AF(L_0, __this, (intptr_t)((void*)ChangePOV_OnCharacterInstantiated_m3135CA6446FC5A73DC1F7F6B7DE5D47322AA7874_RuntimeMethod_var), NULL);
		CharacterInstantiation_remove_CharacterInstantiated_m87F0FF623A9D28913449C2012E6CE5E1FEC42AC2(L_0, NULL);
		// PhotonNetwork.RemoveCallbackTarget(this);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_RemoveCallbackTarget_m7CE5AF22A90F9E3886919CE540D10089A01C46AB(__this, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_Start_mAC2B01AB6E3D5C9864570550EF94135672A1221F (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangePOV_OrthographicMode_m0A51ED1928F3CB66168DBA1554B2D5BF7AE53EF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangePOV_ThirdPersonMode_mC95B944CA1954608F11BF4E1A828CF5F96984DAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.defaultCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___defaultCamera_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultCamera_9), (void*)L_0);
		// this.initialCameraPosition = new Vector3(this.defaultCamera.transform.position.x,
		//     this.defaultCamera.transform.position.y, this.defaultCamera.transform.position.z);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___defaultCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___defaultCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___defaultCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_4, L_8, L_12, /*hidden argument*/NULL);
		__this->___initialCameraPosition_7 = L_13;
		// this.initialCameraRotation = new Quaternion(this.defaultCamera.transform.rotation.x,
		//     this.defaultCamera.transform.rotation.y, this.defaultCamera.transform.rotation.z,
		//     this.defaultCamera.transform.rotation.w);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___defaultCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		float L_17 = L_16.___x_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___defaultCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		float L_21 = L_20.___y_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->___defaultCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		float L_25 = L_24.___z_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->___defaultCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		float L_29 = L_28.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_30), L_17, L_21, L_25, L_29, /*hidden argument*/NULL);
		__this->___initialCameraRotation_8 = L_30;
		// this.FirstPersonCamActivator.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_31 = __this->___FirstPersonCamActivator_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)0, NULL);
		// this.ThirdPersonCamActivator.onClick.AddListener(this.ThirdPersonMode);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = __this->___ThirdPersonCamActivator_12;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_34;
		L_34 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_33, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_35 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_35, __this, (intptr_t)((void*)ChangePOV_ThirdPersonMode_mC95B944CA1954608F11BF4E1A828CF5F96984DAA_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_34, L_35, NULL);
		// this.OrthographicCamActivator.onClick.AddListener(this.OrthographicMode);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_36 = __this->___OrthographicCamActivator_13;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_37;
		L_37 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_36, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_38 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_38, __this, (intptr_t)((void*)ChangePOV_OrthographicMode_m0A51ED1928F3CB66168DBA1554B2D5BF7AE53EF8_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_37, L_38, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnCharacterInstantiated(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnCharacterInstantiated_m3135CA6446FC5A73DC1F7F6B7DE5D47322AA7874 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1_m1388841F064B0C0F0C52CE874D92EF4BD67F81AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC_m3B3CE47EA2EF1C1D9541DCCBD8C3F11B00868BE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667_m14D4EF7E28A6E21902C577A3D2352EF9B8903FF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.firstPersonController = character.GetComponent<FirstPersonController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_character;
		FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* L_1;
		L_1 = GameObject_GetComponent_TisFirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1_m1388841F064B0C0F0C52CE874D92EF4BD67F81AF(L_0, GameObject_GetComponent_TisFirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1_m1388841F064B0C0F0C52CE874D92EF4BD67F81AF_RuntimeMethod_var);
		__this->___firstPersonController_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstPersonController_4), (void*)L_1);
		// this.firstPersonController.enabled = false;
		FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* L_2 = __this->___firstPersonController_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// this.thirdPersonController = character.GetComponent<ThirdPersonController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_character;
		ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* L_4;
		L_4 = GameObject_GetComponent_TisThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667_m14D4EF7E28A6E21902C577A3D2352EF9B8903FF7(L_3, GameObject_GetComponent_TisThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667_m14D4EF7E28A6E21902C577A3D2352EF9B8903FF7_RuntimeMethod_var);
		__this->___thirdPersonController_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thirdPersonController_5), (void*)L_4);
		// this.thirdPersonController.enabled = false;
		ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* L_5 = __this->___thirdPersonController_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// this.orthographicController = character.GetComponent<OrthographicController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_character;
		OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* L_7;
		L_7 = GameObject_GetComponent_TisOrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC_m3B3CE47EA2EF1C1D9541DCCBD8C3F11B00868BE8(L_6, GameObject_GetComponent_TisOrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC_m3B3CE47EA2EF1C1D9541DCCBD8C3F11B00868BE8_RuntimeMethod_var);
		__this->___orthographicController_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___orthographicController_6), (void*)L_7);
		// this.ButtonsHolder.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___ButtonsHolder_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::FirstPersonMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_FirstPersonMode_m42F2A93925F2B7FA9320C0AEA79CD49F57841766 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
{
	{
		// this.ToggleMode(this.firstPersonController);
		FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* L_0 = __this->___firstPersonController_4;
		ChangePOV_ToggleMode_m7D15C5133CAF4CE5A1B98AF6993C2E47D6EBE049(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::ThirdPersonMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_ThirdPersonMode_mC95B944CA1954608F11BF4E1A828CF5F96984DAA (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
{
	{
		// this.ToggleMode(this.thirdPersonController);
		ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* L_0 = __this->___thirdPersonController_5;
		ChangePOV_ToggleMode_m7D15C5133CAF4CE5A1B98AF6993C2E47D6EBE049(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OrthographicMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OrthographicMode_m0A51ED1928F3CB66168DBA1554B2D5BF7AE53EF8 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
{
	{
		// this.ToggleMode(this.orthographicController);
		OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* L_0 = __this->___orthographicController_6;
		ChangePOV_ToggleMode_m7D15C5133CAF4CE5A1B98AF6993C2E47D6EBE049(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::ToggleMode(ExitGames.Demos.DemoPunVoice.BaseController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_ToggleMode_m7D15C5133CAF4CE5A1B98AF6993C2E47D6EBE049 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* ___0_controller, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (controller == null) { return; } // this should not happen, throw error
		BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* L_0 = ___0_controller;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (controller == null) { return; } // this should not happen, throw error
		return;
	}

IL_000a:
	{
		// if (controller.ControllerCamera == null) { return; } // probably game is closing
		BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* L_2 = ___0_controller;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = L_2->___ControllerCamera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		// if (controller.ControllerCamera == null) { return; } // probably game is closing
		return;
	}

IL_0019:
	{
		// controller.ControllerCamera.gameObject.SetActive(true);
		BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* L_5 = ___0_controller;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = L_5->___ControllerCamera_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// controller.enabled = true;
		BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* L_8 = ___0_controller;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)1, NULL);
		// this.FirstPersonCamActivator.interactable = !(controller == this.firstPersonController);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___FirstPersonCamActivator_11;
		BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* L_10 = ___0_controller;
		FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* L_11 = __this->___firstPersonController_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, L_11, NULL);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_9, (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), NULL);
		// this.ThirdPersonCamActivator.interactable = !(controller == this.thirdPersonController);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___ThirdPersonCamActivator_12;
		BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* L_14 = ___0_controller;
		ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* L_15 = __this->___thirdPersonController_5;
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, L_15, NULL);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_13, (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0), NULL);
		// this.OrthographicCamActivator.interactable = !(controller == this.orthographicController);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___OrthographicCamActivator_13;
		BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* L_18 = ___0_controller;
		OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* L_19 = __this->___orthographicController_6;
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_18, L_19, NULL);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_17, (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0), NULL);
		// this.BroadcastChange(controller.ControllerCamera); // BroadcastChange(Camera.main);
		BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25* L_21 = ___0_controller;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = L_21->___ControllerCamera_4;
		ChangePOV_BroadcastChange_mA4B6F14E2A520B8E1182046EE2B8E5000F9C37EE(__this, L_22, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::BroadcastChange(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_BroadcastChange_mA4B6F14E2A520B8E1182046EE2B8E5000F9C37EE (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (camera == null) { return; } // should not happen, throw error
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (camera == null) { return; } // should not happen, throw error
		return;
	}

IL_000a:
	{
		// if (CameraChanged != null)
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_2 = ((ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_StaticFields*)il2cpp_codegen_static_fields_for(ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var))->___CameraChanged_14;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// CameraChanged(camera);
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_3 = ((ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_StaticFields*)il2cpp_codegen_static_fields_for(ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD_il2cpp_TypeInfo_var))->___CameraChanged_14;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___0_camera;
		OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_inline(L_3, L_4, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnFriendListUpdate_m11F79AEE657A0CD8344974499451F20AF6D7B1F9 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___0_friendList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnCreatedRoom_m7B4E7CC8A9336FCC64E321FF7EA68792DBBBFCD4 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnCreateRoomFailed_m74861DBB32CF8E65F6D92CBFE6313C8D1B3919CB (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnJoinedRoom_m326EE7317DC0E68EA34F1603F364599CC4C92773 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnJoinRoomFailed_mFBDC8C53A643AFFD863086ED5EBDA0F7ACDE2CBB (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnJoinRandomFailed_m2EE3A01976E32A8C46972B0D696C224327AD1164 (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV_OnLeftRoom_mBEEA7DDC353145920BEB47A0D01FE7248308BA8A (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.defaultCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___defaultCamera_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// this.defaultCamera.gameObject.SetActive(true);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___defaultCamera_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_001e:
	{
		// this.FirstPersonCamActivator.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___FirstPersonCamActivator_11;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)1, NULL);
		// this.ThirdPersonCamActivator.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___ThirdPersonCamActivator_12;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, (bool)1, NULL);
		// this.OrthographicCamActivator.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___OrthographicCamActivator_13;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_6, (bool)0, NULL);
		// this.defaultCamera.transform.position = this.initialCameraPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___defaultCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___initialCameraPosition_7;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// this.defaultCamera.transform.rotation = this.initialCameraRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___defaultCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = __this->___initialCameraRotation_8;
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_12, NULL);
		// this.ButtonsHolder.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___ButtonsHolder_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePOV__ctor_m4AAFF86913D148108BF846F57FF548F89FE1D7EF (ChangePOV_tF3316E52D321DE94B6D27B862789F0AABD34F3CD* __this, const RuntimeMethod* method) 
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
void OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_Multicast(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* currentDelegate = reinterpret_cast<OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_newCamera, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_OpenInst(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_newCamera, method);
}
void OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_OpenStatic(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_newCamera, method);
}
void OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_OpenStaticInvoker(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_newCamera);
}
void OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_ClosedStaticInvoker(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_newCamera);
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged__ctor_mE400CC879ED6B5CEE5520D5862DF829D56C60DD6 (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_Multicast;
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::Invoke(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013 (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_newCamera, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCameraChanged_BeginInvoke_mE5BEF7F2F4F4277EE9C45EAE33E0BB3E41B748C6 (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_newCamera;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ExitGames.Demos.DemoPunVoice.ChangePOV/OnCameraChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraChanged_EndInvoke_m3DB880B31C5B56667B8EE9B8BAF2F1E638A2C81B (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::add_CharacterInstantiated(ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_add_CharacterInstantiated_mBDEDF7B4C8B816B7D0134CED125953C6A0330EDB (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* V_0 = NULL;
	OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* V_1 = NULL;
	OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* V_2 = NULL;
	{
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_0 = ((CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var))->___CharacterInstantiated_12;
		V_0 = L_0;
	}

IL_0006:
	{
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_1 = V_0;
		V_1 = L_1;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_2 = V_1;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)CastclassSealed((RuntimeObject*)L_4, OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var));
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_5 = V_2;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_6 = V_1;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*>((&((CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var))->___CharacterInstantiated_12), L_5, L_6);
		V_0 = L_7;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_8 = V_0;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)L_8) == ((RuntimeObject*)(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::remove_CharacterInstantiated(ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_remove_CharacterInstantiated_m87F0FF623A9D28913449C2012E6CE5E1FEC42AC2 (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* V_0 = NULL;
	OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* V_1 = NULL;
	OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* V_2 = NULL;
	{
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_0 = ((CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var))->___CharacterInstantiated_12;
		V_0 = L_0;
	}

IL_0006:
	{
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_1 = V_0;
		V_1 = L_1;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_2 = V_1;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)CastclassSealed((RuntimeObject*)L_4, OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var));
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_5 = V_2;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_6 = V_1;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*>((&((CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var))->___CharacterInstantiated_12), L_5, L_6);
		V_0 = L_7;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_8 = V_0;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)L_8) == ((RuntimeObject*)(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_OnJoinedRoom_mA4C20BC2FB07EAAF073CE2318268B5AA9952C4E2 (CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	{
		// if (!this.AutoSpawn)
		bool L_0 = __this->___AutoSpawn_9;
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
		// if (this.PrefabsToInstantiate != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___PrefabsToInstantiate_7;
		if (!L_1)
		{
			goto IL_0098;
		}
	}
	{
		// int actorNumber = PhotonNetwork.LocalPlayer.ActorNumber;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2;
		L_2 = PhotonNetwork_get_LocalPlayer_mEA3335FEF4E4B55C1EFAC8AFA8D5F7E3D7FBE4DC(NULL);
		int32_t L_3;
		L_3 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_2, NULL);
		V_0 = L_3;
		// if (actorNumber < 1)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		// actorNumber = 1;
		V_0 = 1;
	}

IL_0025:
	{
		// int index = (actorNumber - 1) % this.PrefabsToInstantiate.Length;
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___PrefabsToInstantiate_7;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, 1))%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		// this.GetSpawnPoint(out spawnPos, out spawnRotation);
		VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* >::Invoke(55 /* System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::GetSpawnPoint(UnityEngine.Vector3&,UnityEngine.Quaternion&) */, __this, (&V_2), (&V_3));
		// Camera.main.transform.position += spawnPos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_12, NULL);
		// if (this.manualInstantiation)
		bool L_13 = __this->___manualInstantiation_15;
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		// this.ManualInstantiation(index, spawnPos, spawnRotation);
		int32_t L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_3;
		CharacterInstantiation_ManualInstantiation_mE2ADF13AAF23D80F34360F121C2476C6D98567FB(__this, L_14, L_15, L_16, NULL);
		return;
	}

IL_0069:
	{
		// GameObject o = this.PrefabsToInstantiate[index];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___PrefabsToInstantiate_7;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		// o = PhotonNetwork.Instantiate(o.name, spawnPos, spawnRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_4;
		String_t* L_22;
		L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_3;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = PhotonNetwork_Instantiate_mD5714F5AC4C17B75AFD65676226351C91B60AF0D(L_22, L_23, L_24, (uint8_t)0, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		V_4 = L_25;
		// if (CharacterInstantiated != null)
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_26 = ((CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var))->___CharacterInstantiated_12;
		if (!L_26)
		{
			goto IL_0098;
		}
	}
	{
		// CharacterInstantiated(o);
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_27 = ((CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var))->___CharacterInstantiated_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_4;
		OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_inline(L_27, L_28, NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::ManualInstantiation(System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_ManualInstantiation_mE2ADF13AAF23D80F34360F121C2476C6D98567FB (CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m0E6283AF5901A2D881EFE3F8E321B502D2B2F950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2CAD12A35C0A1C70CDE5F71CCEB310BA559DC3F);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* V_4 = NULL;
	{
		// GameObject prefab = this.PrefabsToInstantiate[index];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___PrefabsToInstantiate_7;
		int32_t L_1 = ___0_index;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if (this.differentPrefabs)
		bool L_4 = __this->___differentPrefabs_16;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// player = Instantiate(Resources.Load(string.Format("{0}{1}", prefab.name, this.localPrefabSuffix)) as GameObject, position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		String_t* L_7 = __this->___localPrefabSuffix_17;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_6, L_7, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9;
		L_9 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = ___2_rotation;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_9, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_12;
		goto IL_0044;
	}

IL_003b:
	{
		// player = Instantiate(prefab, position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___2_rotation;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_13, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_16;
	}

IL_0044:
	{
		// PhotonView photonView = player.GetComponent<PhotonView>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_1;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_18;
		L_18 = GameObject_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m0E6283AF5901A2D881EFE3F8E321B502D2B2F950(L_17, GameObject_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m0E6283AF5901A2D881EFE3F8E321B502D2B2F950_RuntimeMethod_var);
		V_2 = L_18;
		// if (PhotonNetwork.AllocateViewID(photonView))
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = PhotonNetwork_AllocateViewID_mA07AE80A1D3B664BD5140342283010D349A233B9(L_19, NULL);
		if (!L_20)
		{
			goto IL_00d6;
		}
	}
	{
		// object[] data =
		// {
		//     index, player.transform.position, player.transform.rotation, photonView.ViewID
		// };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
		int32_t L_23 = ___0_index;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29;
		RuntimeObject* L_31 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_30);
		ArrayElementTypeCheck (L_26, L_31);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = L_35;
		RuntimeObject* L_37 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_36);
		ArrayElementTypeCheck (L_32, L_37);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_32;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_39 = V_2;
		int32_t L_40;
		L_40 = PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline(L_39, NULL);
		int32_t L_41 = L_40;
		RuntimeObject* L_42 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_41);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_42);
		V_3 = L_38;
		// RaiseEventOptions raiseEventOptions = new RaiseEventOptions
		// {
		//     Receivers = ReceiverGroup.Others,
		//     CachingOption = EventCaching.AddToRoomCache
		// };
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_43 = (RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E*)il2cpp_codegen_object_new(RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var);
		RaiseEventOptions__ctor_m5AD5093C00DD3EE18EB5033E49C61934E978A94F(L_43, NULL);
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_44 = L_43;
		L_44->___Receivers_4 = 0;
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_45 = L_44;
		L_45->___CachingOption_1 = 4;
		V_4 = L_45;
		// PhotonNetwork.RaiseEvent(this.manualInstantiationEventCode, data, raiseEventOptions, SendOptions.SendReliable);
		uint8_t L_46 = __this->___manualInstantiationEventCode_13;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = V_3;
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_48 = V_4;
		il2cpp_codegen_runtime_class_init_inline(SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var);
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_49 = ((SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var))->___SendReliable_0;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = PhotonNetwork_RaiseEvent_mFB515FAB067583F656F8B64D7CF44F8F0C41224B(L_46, (RuntimeObject*)L_47, L_48, L_49, NULL);
		// if (CharacterInstantiated != null)
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_51 = ((CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var))->___CharacterInstantiated_12;
		if (!L_51)
		{
			goto IL_00e6;
		}
	}
	{
		// CharacterInstantiated(player);
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_52 = ((CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83_il2cpp_TypeInfo_var))->___CharacterInstantiated_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = V_1;
		OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_inline(L_52, L_53, NULL);
		return;
	}

IL_00d6:
	{
		// Debug.LogError("Failed to allocate a ViewId.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF2CAD12A35C0A1C70CDE5F71CCEB310BA559DC3F, NULL);
		// Destroy(player);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_54, NULL);
	}

IL_00e6:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::OnEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_OnEvent_mBC5B7C9F2CCAD7B9D1BB11E53E5ACF2653109F88 (CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83* __this, EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* ___0_photonEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m0E6283AF5901A2D881EFE3F8E321B502D2B2F950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// if (photonEvent.Code == this.manualInstantiationEventCode)
		EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* L_0 = ___0_photonEvent;
		uint8_t L_1 = L_0->___Code_0;
		uint8_t L_2 = __this->___manualInstantiationEventCode_13;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0098;
		}
	}
	{
		// object[] data = photonEvent.CustomData as object[];
		EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* L_3 = ___0_photonEvent;
		RuntimeObject* L_4;
		L_4 = EventData_get_CustomData_m3386E36D9083B2DD33634C698B7E50344AC9A09B(L_3, NULL);
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_4, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		// int prefabIndex = (int)data[0];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = 0;
		RuntimeObject* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_7, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// GameObject prefab = this.PrefabsToInstantiate[prefabIndex];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___PrefabsToInstantiate_7;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		// Vector3 position = (Vector3)data[1];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		int32_t L_13 = 1;
		RuntimeObject* L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_14, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// Quaternion rotation = (Quaternion)data[2];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		int32_t L_16 = 2;
		RuntimeObject* L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_17, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		// if (this.differentPrefabs)
		bool L_18 = __this->___differentPrefabs_16;
		if (!L_18)
		{
			goto IL_0076;
		}
	}
	{
		// player = Instantiate(Resources.Load(string.Format("{0}{1}", prefab.name, this.remotePrefabSuffix)) as GameObject, position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		String_t* L_21 = __this->___remotePrefabSuffix_18;
		String_t* L_22;
		L_22 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_20, L_21, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23;
		L_23 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_23, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), L_24, L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_5 = L_26;
		goto IL_0084;
	}

IL_0076:
	{
		// player = Instantiate(prefab, position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_27, L_28, L_29, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_5 = L_30;
	}

IL_0084:
	{
		// PhotonView photonView = player.GetComponent<PhotonView>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_5;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_32;
		L_32 = GameObject_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m0E6283AF5901A2D881EFE3F8E321B502D2B2F950(L_31, GameObject_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m0E6283AF5901A2D881EFE3F8E321B502D2B2F950_RuntimeMethod_var);
		// photonView.ViewID = (int)data[3];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = V_0;
		int32_t L_34 = 3;
		RuntimeObject* L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		PhotonView_set_ViewID_m81F2B69E5C222A86270FCDF08F0C4FEAD98AFB18(L_32, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_35, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::GetSpawnPoint(UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation_GetSpawnPoint_m26E6BFCC36C5E90E0D44E8FAC8FC109E7CB90326 (CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_spawnPos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_spawnRot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Transform point = this.GetSpawnPoint();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = VirtualFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(56 /* UnityEngine.Transform ExitGames.Demos.DemoPunVoice.CharacterInstantiation::GetSpawnPoint() */, __this);
		V_0 = L_0;
		// if (point != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// spawnPos = point.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___0_spawnPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_5;
		// spawnRot = point.rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6 = ___1_spawnRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_6 = L_8;
		goto IL_0063;
	}

IL_002a:
	{
		// spawnPos = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___0_spawnPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_9 = L_10;
		// spawnRot = new Quaternion(0, 0, 0, 1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_11 = ___1_spawnRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_12), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_11 = L_12;
	}

IL_0063:
	{
		// if (this.UseRandomOffset)
		bool L_13 = __this->___UseRandomOffset_10;
		if (!L_13)
		{
			goto IL_00b3;
		}
	}
	{
		// Random.InitState((int)(Time.time * 10000));
		float L_14;
		L_14 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		Random_InitState_mE70961834F42FFEEB06CB9C68175354E0C255664(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_14, (10000.0f)))), NULL);
		// Vector3 random = Random.insideUnitSphere;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		V_1 = L_15;
		// random.y = 0;
		(&V_1)->___y_3 = (0.0f);
		// random = random.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_1 = L_16;
		// spawnPos += this.PositionOffset * random;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = ___0_spawnPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = ___0_spawnPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_18);
		float L_20 = __this->___PositionOffset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_22, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_17 = L_23;
	}

IL_00b3:
	{
		// }
		return;
	}
}
// UnityEngine.Transform ExitGames.Demos.DemoPunVoice.CharacterInstantiation::GetSpawnPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CharacterInstantiation_GetSpawnPoint_m0AE5485824E1982E53182ADEC2E621A86CC5666D (CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* G_B7_0 = NULL;
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* G_B8_1 = NULL;
	{
		// if (this.SpawnPoints == null || this.SpawnPoints.Count == 0)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___SpawnPoints_8;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___SpawnPoints_8;
		int32_t L_2;
		L_2 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_1, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_0017:
	{
		// switch (this.Sequence)
		int32_t L_3 = __this->___Sequence_11;
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_00b7;
	}

IL_0035:
	{
		// int id = PhotonNetwork.LocalPlayer.ActorNumber;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_5;
		L_5 = PhotonNetwork_get_LocalPlayer_mEA3335FEF4E4B55C1EFAC8AFA8D5F7E3D7FBE4DC(NULL);
		int32_t L_6;
		L_6 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_5, NULL);
		V_1 = L_6;
		// return this.SpawnPoints[(id == -1) ? 0 : id % this.SpawnPoints.Count];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_7 = __this->___SpawnPoints_8;
		int32_t L_8 = V_1;
		G_B6_0 = L_7;
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			G_B7_0 = L_7;
			goto IL_0059;
		}
	}
	{
		int32_t L_9 = V_1;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___SpawnPoints_8;
		int32_t L_11;
		L_11 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_10, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		G_B8_0 = ((int32_t)(L_9%L_11));
		G_B8_1 = G_B6_0;
		goto IL_005a;
	}

IL_0059:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_005a:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(G_B8_1, G_B8_0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		return L_12;
	}

IL_0060:
	{
		// this.lastUsedSpawnPointIndex++;
		int32_t L_13 = __this->___lastUsedSpawnPointIndex_14;
		__this->___lastUsedSpawnPointIndex_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		// if (this.lastUsedSpawnPointIndex >= this.SpawnPoints.Count)
		int32_t L_14 = __this->___lastUsedSpawnPointIndex_14;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_15 = __this->___SpawnPoints_8;
		int32_t L_16;
		L_16 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_15, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0088;
		}
	}
	{
		// this.lastUsedSpawnPointIndex = 0;
		__this->___lastUsedSpawnPointIndex_14 = 0;
	}

IL_0088:
	{
		// return this.SpawnPoints[this.lastUsedSpawnPointIndex];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_17 = __this->___SpawnPoints_8;
		int32_t L_18 = __this->___lastUsedSpawnPointIndex_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_17, L_18, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		return L_19;
	}

IL_009a:
	{
		// return this.SpawnPoints[Random.Range(0, this.SpawnPoints.Count)];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_20 = __this->___SpawnPoints_8;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_21 = __this->___SpawnPoints_8;
		int32_t L_22;
		L_22 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_21, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		int32_t L_23;
		L_23 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_20, L_23, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		return L_24;
	}

IL_00b7:
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInstantiation__ctor_m2B8E2B58B85719A6DE49E8F89AAEA7C837C20764 (CharacterInstantiation_t20F18857B1CFF042BC4B67C68A8E19C46784AF83* __this, const RuntimeMethod* method) 
{
	{
		// public float PositionOffset = 2.0f;
		__this->___PositionOffset_6 = (2.0f);
		// public bool AutoSpawn = true;
		__this->___AutoSpawn_9 = (bool)1;
		// public bool UseRandomOffset = true;
		__this->___UseRandomOffset_10 = (bool)1;
		// private byte manualInstantiationEventCode = 1;
		__this->___manualInstantiationEventCode_13 = (uint8_t)1;
		// protected int lastUsedSpawnPointIndex = -1;
		__this->___lastUsedSpawnPointIndex_14 = (-1);
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
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
void OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_Multicast(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* currentDelegate = reinterpret_cast<OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_character, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_OpenInst(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_character, method);
}
void OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_OpenStatic(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_character, method);
}
void OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_OpenStaticInvoker(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_character);
}
void OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_ClosedStaticInvoker(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_character);
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated__ctor_mFF0A21EE34228E67F4CCBB7492121FB29B9EF6AF (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_Multicast;
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4 (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_character, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCharacterInstantiated_BeginInvoke_m7661F1B275836919AAC50D2326D129D3A042D40F (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_character;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ExitGames.Demos.DemoPunVoice.CharacterInstantiation/OnCharacterInstantiated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCharacterInstantiated_EndInvoke_mA57DC61E11638C84B943AD6CB8F10ECE2E566277 (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 ExitGames.Demos.DemoPunVoice.FirstPersonController::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FirstPersonController_get_Velocity_m116392CD4ACA855C0AB856AA38E8AB13C97595C3 (FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.rigidBody.velocity; }
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___rigidBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		return L_1;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.FirstPersonController::SetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_SetCamera_m49C1619BCA2C8DFC1939AB50176959E745029127 (FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* __this, const RuntimeMethod* method) 
{
	{
		// base.SetCamera();
		BaseController_SetCamera_mBBDDC1CF1B68E21C4EB46856CB8D5410D05DD787(__this, NULL);
		// this.mouseLook.Init(this.transform, this.camTrans);
		MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663* L_0 = __this->___mouseLook_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___camTrans_7;
		MouseLookHelper_Init_m7E1BB866D93A3D9BB70DDDE6F7337CF0485308AE(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.FirstPersonController::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Move_m04892E64BBA2459B2174B5D9DD946DF40D5BE5AC (FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* __this, float ___0_h, float ___1_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 desiredMove = this.camTrans.forward * v + this.camTrans.right * h;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___camTrans_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		float L_2 = ___1_v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___camTrans_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_4, NULL);
		float L_6 = ___0_h;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// desiredMove.x = desiredMove.x * this.speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___x_2;
		float L_11 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___speed_10;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(L_10, L_11));
		// desiredMove.z = desiredMove.z * this.speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___z_4;
		float L_14 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___speed_10;
		(&V_0)->___z_4 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		// desiredMove.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// this.rigidBody.velocity = desiredMove;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___rigidBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.FirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Update_m3CE16720D6BA1503768C957CBDF8AA2E903CD0DE (FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* __this, const RuntimeMethod* method) 
{
	{
		// this.RotateView();
		FirstPersonController_RotateView_mB42EA49AA58565BCD3188E8D40530FA1710996CB(__this, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_mB42EA49AA58565BCD3188E8D40530FA1710996CB (FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* __this, const RuntimeMethod* method) 
{
	{
		// this.oldYRotation = this.transform.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___y_3;
		__this->___oldYRotation_13 = L_2;
		// this.mouseLook.LookRotation(this.transform, this.camTrans);
		MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663* L_3 = __this->___mouseLook_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___camTrans_7;
		MouseLookHelper_LookRotation_mEBD5F19E301E36C6D10CB5DD298223D4BBBD9DF8(L_3, L_4, L_5, NULL);
		// this.velRotation = Quaternion.AngleAxis(this.transform.eulerAngles.y - this.oldYRotation, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = __this->___oldYRotation_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_subtract(L_8, L_9)), L_10, NULL);
		__this->___velRotation_14 = L_11;
		// this.rigidBody.velocity = this.velRotation * this.rigidBody.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___rigidBody_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___velRotation_14;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___rigidBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_13, L_15, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_16, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.FirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController__ctor_mFF98BA1FA48D6486439EDBAD625E636930055C4B (FirstPersonController_tCA562E21D90749AE5021F07E51FBF432DF65A7B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MouseLookHelper mouseLook = new MouseLookHelper();
		MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663* L_0 = (MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663*)il2cpp_codegen_object_new(MouseLookHelper_t2B5B60FD0EFF6E9E01B4E43CDBEE487683206663_il2cpp_TypeInfo_var);
		MouseLookHelper__ctor_m16D4E8559CAF5968D08795FFC4C881291467EADA(L_0, NULL);
		__this->___mouseLook_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mouseLook_12), (void*)L_0);
		BaseController__ctor_m08FD86466B7134B13A5C484C37439498BB4C64F5(__this, NULL);
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
// System.Void ExitGames.Demos.DemoPunVoice.Highlighter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlighter_OnEnable_mB5BB9B18D403A177F2F544234DE3963AA117BAFE (Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Highlighter_ChangePOV_CameraChanged_m2B127E1CE37492642D8DC6591E915205B44CFE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Highlighter_VoiceDemoUI_DebugToggled_m886E5875BD690EBA01F73A7688CAFA90D8A54F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangePOV.CameraChanged += this.ChangePOV_CameraChanged;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_0 = (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)il2cpp_codegen_object_new(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		OnCameraChanged__ctor_mE400CC879ED6B5CEE5520D5862DF829D56C60DD6(L_0, __this, (intptr_t)((void*)Highlighter_ChangePOV_CameraChanged_m2B127E1CE37492642D8DC6591E915205B44CFE24_RuntimeMethod_var), NULL);
		ChangePOV_add_CameraChanged_m45F436F543266857262C9289A3003AEAA0B9D4DB(L_0, NULL);
		// VoiceDemoUI.DebugToggled += this.VoiceDemoUI_DebugToggled;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_1 = (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*)il2cpp_codegen_object_new(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4_il2cpp_TypeInfo_var);
		OnDebugToggle__ctor_m4BA7AEF10D5988FC38E5245D10218DE7DB1FCACF(L_1, __this, (intptr_t)((void*)Highlighter_VoiceDemoUI_DebugToggled_m886E5875BD690EBA01F73A7688CAFA90D8A54F15_RuntimeMethod_var), NULL);
		VoiceDemoUI_add_DebugToggled_m47A24EF443BECBBD11A12947F15166B621C8E324(L_1, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.Highlighter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlighter_OnDisable_m6CA1F789B34C123F9CFE422D5D6D6316E5AC14AC (Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Highlighter_ChangePOV_CameraChanged_m2B127E1CE37492642D8DC6591E915205B44CFE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Highlighter_VoiceDemoUI_DebugToggled_m886E5875BD690EBA01F73A7688CAFA90D8A54F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangePOV.CameraChanged -= this.ChangePOV_CameraChanged;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_0 = (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)il2cpp_codegen_object_new(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		OnCameraChanged__ctor_mE400CC879ED6B5CEE5520D5862DF829D56C60DD6(L_0, __this, (intptr_t)((void*)Highlighter_ChangePOV_CameraChanged_m2B127E1CE37492642D8DC6591E915205B44CFE24_RuntimeMethod_var), NULL);
		ChangePOV_remove_CameraChanged_m420FBD4EDD926B3CB6AC32A1AE3C0564CD63F92F(L_0, NULL);
		// VoiceDemoUI.DebugToggled -= this.VoiceDemoUI_DebugToggled;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_1 = (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*)il2cpp_codegen_object_new(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4_il2cpp_TypeInfo_var);
		OnDebugToggle__ctor_m4BA7AEF10D5988FC38E5245D10218DE7DB1FCACF(L_1, __this, (intptr_t)((void*)Highlighter_VoiceDemoUI_DebugToggled_m886E5875BD690EBA01F73A7688CAFA90D8A54F15_RuntimeMethod_var), NULL);
		VoiceDemoUI_remove_DebugToggled_m8A5B824AC442CA6E9E49F39E6D028282AD7DE10A(L_1, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.Highlighter::VoiceDemoUI_DebugToggled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlighter_VoiceDemoUI_DebugToggled_m886E5875BD690EBA01F73A7688CAFA90D8A54F15 (Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800* __this, bool ___0_debugMode, const RuntimeMethod* method) 
{
	{
		// this.showSpeakerLag = debugMode;
		bool L_0 = ___0_debugMode;
		__this->___showSpeakerLag_9 = L_0;
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.Highlighter::ChangePOV_CameraChanged(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlighter_ChangePOV_CameraChanged_m2B127E1CE37492642D8DC6591E915205B44CFE24 (Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	{
		// this.canvas.worldCamera = camera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___0_camera;
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.Highlighter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlighter_Awake_mA95CC534C7AB0CDD8CEEEF8D034EF0CDD153F8D9 (Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m8CCF0CFEAB5126A8741117A6D761CB5AD7DFFFC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.canvas = this.GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___canvas_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_4), (void*)L_0);
		// if (this.canvas != null && this.canvas.worldCamera == null) { this.canvas.worldCamera = Camera.main; }
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = __this->___canvas_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___canvas_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// if (this.canvas != null && this.canvas.worldCamera == null) { this.canvas.worldCamera = Camera.main; }
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = __this->___canvas_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_6, L_7, NULL);
	}

IL_003d:
	{
		// this.photonVoiceView = this.GetComponentInParent<PhotonVoiceView>();
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_8;
		L_8 = Component_GetComponentInParent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m8CCF0CFEAB5126A8741117A6D761CB5AD7DFFFC5(__this, Component_GetComponentInParent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m8CCF0CFEAB5126A8741117A6D761CB5AD7DFFFC5_RuntimeMethod_var);
		__this->___photonVoiceView_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___photonVoiceView_5), (void*)L_8);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.Highlighter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlighter_Update_mA184CEA4C6FCD51F75A3E3B0231DAC400A4CC110 (Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// this.recorderSprite.enabled = this.photonVoiceView.IsRecording;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___recorderSprite_6;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_1 = __this->___photonVoiceView_5;
		bool L_2;
		L_2 = PhotonVoiceView_get_IsRecording_m402F87721119C1BB8CE611ED8F9D2C2A0905CD6E(L_1, NULL);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_2, NULL);
		// this.speakerSprite.enabled = this.photonVoiceView.IsSpeaking;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___speakerSprite_7;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_4 = __this->___photonVoiceView_5;
		bool L_5;
		L_5 = PhotonVoiceView_get_IsSpeaking_m8412D81FD36F7800BC5E4A1E6E32C50EE691067D(L_4, NULL);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, L_5, NULL);
		// this.bufferLagText.enabled = this.showSpeakerLag && this.photonVoiceView.IsSpeaking;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___bufferLagText_8;
		bool L_7 = __this->___showSpeakerLag_9;
		G_B1_0 = L_6;
		if (!L_7)
		{
			G_B2_0 = L_6;
			goto IL_0047;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_8 = __this->___photonVoiceView_5;
		bool L_9;
		L_9 = PhotonVoiceView_get_IsSpeaking_m8412D81FD36F7800BC5E4A1E6E32C50EE691067D(L_8, NULL);
		G_B3_0 = ((int32_t)(L_9));
		G_B3_1 = G_B1_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0048:
	{
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(G_B3_1, (bool)G_B3_0, NULL);
		// if (this.bufferLagText.enabled)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___bufferLagText_8;
		bool L_11;
		L_11 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_10, NULL);
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		// this.bufferLagText.text = string.Format("{0}", this.photonVoiceView.SpeakerInUse.Lag);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___bufferLagText_8;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_13 = __this->___photonVoiceView_5;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_14;
		L_14 = PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline(L_13, NULL);
		int32_t L_15;
		L_15 = Speaker_get_Lag_m9D4BEBE542D8B8FE7561E00937EEB3387DB78560(L_14, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_17, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_18);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.Highlighter::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlighter_LateUpdate_m5F869E6D778281606F620A6E479631793BB51BBB (Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.canvas == null || this.canvas.worldCamera == null) { return; } // should not happen, throw error
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		// if (this.canvas == null || this.canvas.worldCamera == null) { return; } // should not happen, throw error
		return;
	}

IL_0022:
	{
		// this.transform.rotation = Quaternion.Euler(0f, this.canvas.worldCamera.transform.eulerAngles.y, 0f); //canvas.worldCamera.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = __this->___canvas_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_8, NULL);
		float L_10 = L_9.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_10, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_11, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.Highlighter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlighter__ctor_m7272394FBB4E2E7915F39E4CEE524D45F3ED97DA (Highlighter_t1B2825D6586E328A1F86E065D1793186FB53C800* __this, const RuntimeMethod* method) 
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
// System.Void ExitGames.Demos.DemoPunVoice.OrthographicController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrthographicController_Init_m74668A8F6483A1EEC75FD683E61F54C59D4C6276 (OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* __this, const RuntimeMethod* method) 
{
	{
		// base.Init();
		BaseController_Init_m67734A07F46BB51C545C1911FB316AD6BAB754FB(__this, NULL);
		// this.ControllerCamera = Camera.main;//GameObject.Find("OrthographicCamera").GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___ControllerCamera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___ControllerCamera_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.OrthographicController::SetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrthographicController_SetCamera_m04D6F5B307931DFDB9813EF582B13DABAC155124 (OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* __this, const RuntimeMethod* method) 
{
	{
		// base.SetCamera();
		BaseController_SetCamera_mBBDDC1CF1B68E21C4EB46856CB8D5410D05DD787(__this, NULL);
		// this.offset = this.camTrans.position - this.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___camTrans_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		__this->___offset_14 = L_4;
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.OrthographicController::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrthographicController_Move_mDAB0BB36F703950A046E1F9A794E3ABE0EC39D6C (OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* __this, float ___0_h, float ___1_v, const RuntimeMethod* method) 
{
	{
		// base.Move(h, v);
		float L_0 = ___0_h;
		float L_1 = ___1_v;
		ThirdPersonController_Move_m9914D8B9B6C39113B1F45B6CA333E5E80D9D66D4(__this, L_0, L_1, NULL);
		// this.CameraFollow();
		OrthographicController_CameraFollow_m5B16C929C80FAF906DFB3EDC10FFF46C1EC66C04(__this, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.OrthographicController::CameraFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrthographicController_CameraFollow_m5B16C929C80FAF906DFB3EDC10FFF46C1EC66C04 (OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 targetCamPos = this.transform.position + this.offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___offset_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// this.camTrans.position = Vector3.Lerp(this.camTrans.position, targetCamPos, this.smoothing * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___camTrans_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___camTrans_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = __this->___smoothing_13;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_6, L_7, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_10, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.OrthographicController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrthographicController__ctor_m9F037C14AB2F64620BCF2541BCCB971828CB3C88 (OrthographicController_t380F315571EDC7FDD88FF804C27B5767D939AFAC* __this, const RuntimeMethod* method) 
{
	{
		// public float smoothing = 5f;        // The speed with which the camera will be following.
		__this->___smoothing_13 = (5.0f);
		ThirdPersonController__ctor_m0C0949F618CA388792E0CC164B2033373185DFE8(__this, NULL);
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
// System.Void ExitGames.Demos.DemoPunVoice.ThirdPersonController::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m9914D8B9B6C39113B1F45B6CA333E5E80D9D66D4 (ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* __this, float ___0_h, float ___1_v, const RuntimeMethod* method) 
{
	{
		// this.rigidBody.velocity = v * this.speed * this.transform.forward;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___rigidBody_5;
		float L_1 = ___1_v;
		float L_2 = ((BaseController_tDC56DB977F1C9972C02F138952964C07E4684A25*)__this)->___speed_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_1, L_2)), L_4, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_5, NULL);
		// this.transform.rotation *= Quaternion.AngleAxis(this.movingTurnSpeed * h * Time.deltaTime, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		float L_9 = __this->___movingTurnSpeed_12;
		float L_10 = ___0_h;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_9, L_10)), L_11)), L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_8, L_13, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_14, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.ThirdPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__ctor_m0C0949F618CA388792E0CC164B2033373185DFE8 (ThirdPersonController_t3D673F0BA388D203A920D6A67ED73C02D576E667* __this, const RuntimeMethod* method) 
{
	{
		// private float movingTurnSpeed = 360;
		__this->___movingTurnSpeed_12 = (360.0f);
		BaseController__ctor_m08FD86466B7134B13A5C484C37439498BB4C64F5(__this, NULL);
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
// System.Boolean ExitGames.Demos.DemoPunVoice.VoiceDemoUI::get_DebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDemoUI_get_DebugMode_mD708E74166B1700D28170766E7D8E85B2CA46E8A (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	{
		// return this.debugMode;
		bool L_0 = __this->___debugMode_20;
		return L_0;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::set_DebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_set_DebugMode_mD94AC3B48571B50FA777BBA23DD9D2779C08FABD (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.debugMode = value;
		bool L_0 = ___0_value;
		__this->___debugMode_20 = L_0;
		// this.debugGO.SetActive(this.debugMode);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___debugGO_19;
		bool L_2 = __this->___debugMode_20;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// this.voiceDebugText.text = String.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___voiceDebugText_14;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// if (this.debugMode)
		bool L_5 = __this->___debugMode_20;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		// this.previousDebugLevel = this.punVoiceClient.Client.LoadBalancingPeer.DebugOut;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_6 = __this->___punVoiceClient_6;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_7;
		L_7 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_6, NULL);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_8;
		L_8 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_7, NULL);
		uint8_t L_9 = ((PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C*)L_8)->___DebugOut_20;
		__this->___previousDebugLevel_22 = L_9;
		// this.punVoiceClient.Client.LoadBalancingPeer.DebugOut = DebugLevel.ALL;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_10 = __this->___punVoiceClient_6;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_11;
		L_11 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_10, NULL);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_12;
		L_12 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_11, NULL);
		((PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C*)L_12)->___DebugOut_20 = 5;
		goto IL_007e;
	}

IL_0063:
	{
		// this.punVoiceClient.Client.LoadBalancingPeer.DebugOut = this.previousDebugLevel;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_13 = __this->___punVoiceClient_6;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_14;
		L_14 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_13, NULL);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_15;
		L_15 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_14, NULL);
		uint8_t L_16 = __this->___previousDebugLevel_22;
		((PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C*)L_15)->___DebugOut_20 = L_16;
	}

IL_007e:
	{
		// if (DebugToggled != null)
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_17 = ((VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var))->___DebugToggled_23;
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// DebugToggled(this.debugMode);
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_18 = ((VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var))->___DebugToggled_23;
		bool L_19 = __this->___debugMode_20;
		OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_inline(L_18, L_19, NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::add_DebugToggled(ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_add_DebugToggled_m47A24EF443BECBBD11A12947F15166B621C8E324 (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* V_0 = NULL;
	OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* V_1 = NULL;
	OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* V_2 = NULL;
	{
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_0 = ((VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var))->___DebugToggled_23;
		V_0 = L_0;
	}

IL_0006:
	{
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_1 = V_0;
		V_1 = L_1;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_2 = V_1;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*)CastclassSealed((RuntimeObject*)L_4, OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4_il2cpp_TypeInfo_var));
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_5 = V_2;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_6 = V_1;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*>((&((VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var))->___DebugToggled_23), L_5, L_6);
		V_0 = L_7;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_8 = V_0;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*)L_8) == ((RuntimeObject*)(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::remove_DebugToggled(ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_remove_DebugToggled_m8A5B824AC442CA6E9E49F39E6D028282AD7DE10A (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* V_0 = NULL;
	OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* V_1 = NULL;
	OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* V_2 = NULL;
	{
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_0 = ((VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var))->___DebugToggled_23;
		V_0 = L_0;
	}

IL_0006:
	{
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_1 = V_0;
		V_1 = L_1;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_2 = V_1;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*)CastclassSealed((RuntimeObject*)L_4, OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4_il2cpp_TypeInfo_var));
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_5 = V_2;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_6 = V_1;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*>((&((VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_StaticFields*)il2cpp_codegen_static_fields_for(VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD_il2cpp_TypeInfo_var))->___DebugToggled_23), L_5, L_6);
		V_0 = L_7;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_8 = V_0;
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*)L_8) == ((RuntimeObject*)(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_Awake_m7383C2C25B84E02E07E2BA2E15613FE079ADF9CB (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	{
		// this.punVoiceClient = PunVoiceClient.Instance;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0;
		L_0 = PunVoiceClient_get_Instance_mFF6218976A4107045A96D145BC6C5249B1946D8A(NULL);
		__this->___punVoiceClient_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___punVoiceClient_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_OnDestroy_m6CC4BE4567DD904D22DC3796A33A1C63A51F1156 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_BetterToggle_ToggleValueChanged_mA8CD4F779E575FD505483AFC33169BD0B77315BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_m4F46D60A48CBF2603CC1558BE2878AA95F607761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_OnCameraChanged_mFF6F5A4E010E24050112AA28C610E025C527562C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_PunClientStateChanged_m0B921FFA02E884DF2330EAB1028D02E70E1574E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_VoiceClientStateChanged_m0C246B7B37739B1E50635EE3EC4501FD5996A174_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangePOV.CameraChanged -= this.OnCameraChanged;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_0 = (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)il2cpp_codegen_object_new(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		OnCameraChanged__ctor_mE400CC879ED6B5CEE5520D5862DF829D56C60DD6(L_0, __this, (intptr_t)((void*)VoiceDemoUI_OnCameraChanged_mFF6F5A4E010E24050112AA28C610E025C527562C_RuntimeMethod_var), NULL);
		ChangePOV_remove_CameraChanged_m420FBD4EDD926B3CB6AC32A1AE3C0564CD63F92F(L_0, NULL);
		// BetterToggle.ToggleValueChanged -= this.BetterToggle_ToggleValueChanged;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_1 = (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*)il2cpp_codegen_object_new(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0_il2cpp_TypeInfo_var);
		OnToggle__ctor_m00B08FA3B2F227E580842A724147633DF1B99AAB(L_1, __this, (intptr_t)((void*)VoiceDemoUI_BetterToggle_ToggleValueChanged_mA8CD4F779E575FD505483AFC33169BD0B77315BD_RuntimeMethod_var), NULL);
		BetterToggle_remove_ToggleValueChanged_m965D705F8E8F1FF81A9F6B598298B5341021FD6B(L_1, NULL);
		// CharacterInstantiation.CharacterInstantiated -= this.CharacterInstantiation_CharacterInstantiated;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_2 = (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)il2cpp_codegen_object_new(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		OnCharacterInstantiated__ctor_mFF0A21EE34228E67F4CCBB7492121FB29B9EF6AF(L_2, __this, (intptr_t)((void*)VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_m4F46D60A48CBF2603CC1558BE2878AA95F607761_RuntimeMethod_var), NULL);
		CharacterInstantiation_remove_CharacterInstantiated_m87F0FF623A9D28913449C2012E6CE5E1FEC42AC2(L_2, NULL);
		// this.punVoiceClient.Client.StateChanged -= this.VoiceClientStateChanged;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_3 = __this->___punVoiceClient_6;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_4;
		L_4 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_3, NULL);
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_5 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_5, __this, (intptr_t)((void*)VoiceDemoUI_VoiceClientStateChanged_m0C246B7B37739B1E50635EE3EC4501FD5996A174_RuntimeMethod_var), NULL);
		LoadBalancingClient_remove_StateChanged_m05D0CADDC74CE72BDD2CC9BBCBA8257D9CACD85B(L_4, L_5, NULL);
		// PhotonNetwork.NetworkingClient.StateChanged -= this.PunClientStateChanged;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_6 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_2;
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_7 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_7, __this, (intptr_t)((void*)VoiceDemoUI_PunClientStateChanged_m0B921FFA02E884DF2330EAB1028D02E70E1574E4_RuntimeMethod_var), NULL);
		LoadBalancingClient_remove_StateChanged_m05D0CADDC74CE72BDD2CC9BBCBA8257D9CACD85B(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::CharacterInstantiation_CharacterInstantiated(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_m4F46D60A48CBF2603CC1558BE2878AA95F607761 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m9A8A84F07D07717192CA584AAE1632CB821BD5A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* V_0 = NULL;
	{
		// PhotonVoiceView photonVoiceView = character.GetComponent<PhotonVoiceView>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_character;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_1;
		L_1 = GameObject_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m9A8A84F07D07717192CA584AAE1632CB821BD5A5(L_0, GameObject_GetComponent_TisPhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9_m9A8A84F07D07717192CA584AAE1632CB821BD5A5_RuntimeMethod_var);
		V_0 = L_1;
		// if (photonVoiceView != null)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// this.recorder = photonVoiceView;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_4 = V_0;
		__this->___recorder_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_15), (void*)L_4);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::InitToggles(UnityEngine.UI.Toggle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_InitToggles_m322C6B4ECF6B89A5951511DEF32925DB8F7F819C (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___0_toggles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	{
		// if (toggles == null) { return; }
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_0 = ___0_toggles;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// if (toggles == null) { return; }
		return;
	}

IL_0004:
	{
		// for (int i = 0; i < toggles.Length; i++)
		V_0 = 0;
		goto IL_0214;
	}

IL_000b:
	{
		// Toggle toggle = toggles[i];
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_1 = ___0_toggles;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// switch (toggle.name)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_5 = V_1;
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		uint32_t L_8;
		L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_7, NULL);
		V_3 = L_8;
		uint32_t L_9 = V_3;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)836321993)))))
		{
			goto IL_0045;
		}
	}
	{
		uint32_t L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)251438200))))
		{
			goto IL_00f5;
		}
	}
	{
		uint32_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)307911202))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)836321993))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0210;
	}

IL_0045:
	{
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-1485144615)))))
		{
			goto IL_0062;
		}
	}
	{
		uint32_t L_14 = V_3;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1063296884))))
		{
			goto IL_0077;
		}
	}
	{
		uint32_t L_15 = V_3;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1485144615))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0210;
	}

IL_0062:
	{
		uint32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1297925255))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-543143072))))
		{
			goto IL_008c;
		}
	}
	{
		goto IL_0210;
	}

IL_0077:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, NULL);
		if (L_19)
		{
			goto IL_010a;
		}
	}
	{
		goto IL_0210;
	}

IL_008c:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35, NULL);
		if (L_21)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0210;
	}

IL_00a1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B, NULL);
		if (L_23)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_0210;
	}

IL_00b6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29, NULL);
		if (L_25)
		{
			goto IL_0177;
		}
	}
	{
		goto IL_0210;
	}

IL_00cb:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38, NULL);
		if (L_27)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0210;
	}

IL_00e0:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF, NULL);
		if (L_29)
		{
			goto IL_01ec;
		}
	}
	{
		goto IL_0210;
	}

IL_00f5:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94, NULL);
		if (L_31)
		{
			goto IL_01ff;
		}
	}
	{
		goto IL_0210;
	}

IL_010a:
	{
		// toggle.isOn = AudioListener.volume <= 0.001f;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_32 = V_1;
		float L_33;
		L_33 = AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A(NULL);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_32, (bool)((((int32_t)((!(((float)L_33) <= ((float)(0.00100000005f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// break;
		goto IL_0210;
	}

IL_0124:
	{
		// if (this.recorder != null && this.recorder.RecorderInUse != null)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_34 = __this->___recorder_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_35)
		{
			goto IL_0210;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_36 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_37;
		L_37 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_0210;
		}
	}
	{
		// toggle.isOn = this.recorder.RecorderInUse.VoiceDetection;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_39 = V_1;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_40 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_41;
		L_41 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_40, NULL);
		bool L_42;
		L_42 = Recorder_get_VoiceDetection_mF217F20782F7563928EF8A09B5283FF3D5B58F52_inline(L_41, NULL);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_39, L_42, NULL);
		// break;
		goto IL_0210;
	}

IL_0166:
	{
		// toggle.isOn = this.DebugMode;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_43 = V_1;
		bool L_44;
		L_44 = VoiceDemoUI_get_DebugMode_mD708E74166B1700D28170766E7D8E85B2CA46E8A_inline(__this, NULL);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_43, L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_0177:
	{
		// if (this.recorder != null && this.recorder.RecorderInUse != null)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_45 = __this->___recorder_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_45, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_46)
		{
			goto IL_0210;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_47 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_48;
		L_48 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_48, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_49)
		{
			goto IL_0210;
		}
	}
	{
		// toggle.isOn = this.recorder.RecorderInUse.TransmitEnabled;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_50 = V_1;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_51 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_52;
		L_52 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_51, NULL);
		bool L_53;
		L_53 = Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline(L_52, NULL);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_50, L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01b3:
	{
		// if (this.recorder != null && this.recorder.RecorderInUse != null)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_54 = __this->___recorder_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_0210;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_56 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_57;
		L_57 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_56, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_57, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_58)
		{
			goto IL_0210;
		}
	}
	{
		// toggle.isOn = this.recorder.RecorderInUse.DebugEchoMode;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_59 = V_1;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_60 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_61;
		L_61 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_60, NULL);
		bool L_62;
		L_62 = Recorder_get_DebugEchoMode_m727853F9D824E99FE754C56FAE427434E308563F(L_61, NULL);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_59, L_62, NULL);
		// break;
		goto IL_0210;
	}

IL_01ec:
	{
		// toggle.isOn = this.punVoiceClient.AutoConnectAndJoin;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_63 = V_1;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_64 = __this->___punVoiceClient_6;
		bool L_65 = L_64->___AutoConnectAndJoin_39;
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_63, L_65, NULL);
		// break;
		goto IL_0210;
	}

IL_01ff:
	{
		// toggle.isOn = this.punVoiceClient.AutoLeaveAndDisconnect;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_66 = V_1;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_67 = __this->___punVoiceClient_6;
		bool L_68 = L_67->___AutoLeaveAndDisconnect_40;
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_66, L_68, NULL);
	}

IL_0210:
	{
		// for (int i = 0; i < toggles.Length; i++)
		int32_t L_69 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0214:
	{
		// for (int i = 0; i < toggles.Length; i++)
		int32_t L_70 = V_0;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_71 = ___0_toggles;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::BetterToggle_ToggleValueChanged(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_BetterToggle_ToggleValueChanged_mA8CD4F779E575FD505483AFC33169BD0B77315BD (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// switch (toggle.name)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = ___0_toggle;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_2, NULL);
		V_1 = L_3;
		uint32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)836321993)))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)251438200))))
		{
			goto IL_00bf;
		}
	}
	{
		uint32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)307911202))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)836321993))))
		{
			goto IL_006a;
		}
	}
	{
		return;
	}

IL_0032:
	{
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-1485144615)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1063296884))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1485144615))))
		{
			goto IL_008c;
		}
	}
	{
		return;
	}

IL_004b:
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1297925255))))
		{
			goto IL_00ae;
		}
	}
	{
		uint32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-543143072))))
		{
			goto IL_007b;
		}
	}
	{
		return;
	}

IL_005c:
	{
		String_t* L_13 = V_0;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, NULL);
		if (L_14)
		{
			goto IL_00d0;
		}
	}
	{
		return;
	}

IL_006a:
	{
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralB4A6EFE47700E13FAF72CB0B2ADBC15B5D55FF29, NULL);
		if (L_16)
		{
			goto IL_0105;
		}
	}
	{
		return;
	}

IL_007b:
	{
		String_t* L_17 = V_0;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral5EAE3EA70FA33CBFA338989AA66A221BFC432B35, NULL);
		if (L_18)
		{
			goto IL_0131;
		}
	}
	{
		return;
	}

IL_008c:
	{
		String_t* L_19 = V_0;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralB2CB19C7C0AE268022A3567E1F9DA9A6A1301D38, NULL);
		if (L_20)
		{
			goto IL_015a;
		}
	}
	{
		return;
	}

IL_009d:
	{
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDF19425FF2B6A11DEDC2D151795512E67EFFCC2B, NULL);
		if (L_22)
		{
			goto IL_0183;
		}
	}
	{
		return;
	}

IL_00ae:
	{
		String_t* L_23 = V_0;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral1AE1B87AA4779072F51EE2CA688208BA1FB325FF, NULL);
		if (L_24)
		{
			goto IL_0190;
		}
	}
	{
		return;
	}

IL_00bf:
	{
		String_t* L_25 = V_0;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral44D0C2AA1360DFBAB52000E131B201174EC9EE94, NULL);
		if (L_26)
		{
			goto IL_01a2;
		}
	}
	{
		return;
	}

IL_00d0:
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_27 = ___0_toggle;
		bool L_28;
		L_28 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_27, NULL);
		if (!L_28)
		{
			goto IL_00ee;
		}
	}
	{
		// this.volumeBeforeMute = AudioListener.volume;
		float L_29;
		L_29 = AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A(NULL);
		__this->___volumeBeforeMute_21 = L_29;
		// AudioListener.volume = 0f;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721((0.0f), NULL);
		return;
	}

IL_00ee:
	{
		// AudioListener.volume = this.volumeBeforeMute;
		float L_30 = __this->___volumeBeforeMute_21;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721(L_30, NULL);
		// this.volumeBeforeMute = 0f;
		__this->___volumeBeforeMute_21 = (0.0f);
		// break;
		return;
	}

IL_0105:
	{
		// if (this.recorder.RecorderInUse)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_31 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_32;
		L_32 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_32, NULL);
		if (!L_33)
		{
			goto IL_01b3;
		}
	}
	{
		// this.recorder.RecorderInUse.TransmitEnabled = toggle.isOn;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_34 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_35;
		L_35 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_34, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_36 = ___0_toggle;
		bool L_37;
		L_37 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_36, NULL);
		Recorder_set_TransmitEnabled_mB6B4C554D91CC63D61DBAE8D0C9FA948CD1E1496(L_35, L_37, NULL);
		// break;
		return;
	}

IL_0131:
	{
		// if (this.recorder.RecorderInUse)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_38 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_39;
		L_39 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		if (!L_40)
		{
			goto IL_01b3;
		}
	}
	{
		// this.recorder.RecorderInUse.VoiceDetection = toggle.isOn;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_41 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_42;
		L_42 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_41, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_43 = ___0_toggle;
		bool L_44;
		L_44 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_43, NULL);
		Recorder_set_VoiceDetection_m52AF86118A2E56181935DA2F77B7437CDD06CAD0(L_42, L_44, NULL);
		// break;
		return;
	}

IL_015a:
	{
		// if (this.recorder.RecorderInUse)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_45 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_46;
		L_46 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_45, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_46, NULL);
		if (!L_47)
		{
			goto IL_01b3;
		}
	}
	{
		// this.recorder.RecorderInUse.DebugEchoMode = toggle.isOn;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_48 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_49;
		L_49 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_48, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_50 = ___0_toggle;
		bool L_51;
		L_51 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_50, NULL);
		Recorder_set_DebugEchoMode_mF63CA073EC931A8ED3323261BC44A984B158765C(L_49, L_51, NULL);
		// break;
		return;
	}

IL_0183:
	{
		// this.DebugMode = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_52 = ___0_toggle;
		bool L_53;
		L_53 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_52, NULL);
		VoiceDemoUI_set_DebugMode_mD94AC3B48571B50FA777BBA23DD9D2779C08FABD(__this, L_53, NULL);
		// break;
		return;
	}

IL_0190:
	{
		// this.punVoiceClient.AutoConnectAndJoin = toggle.isOn;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_54 = __this->___punVoiceClient_6;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_55 = ___0_toggle;
		bool L_56;
		L_56 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_55, NULL);
		L_54->___AutoConnectAndJoin_39 = L_56;
		// break;
		return;
	}

IL_01a2:
	{
		// this.punVoiceClient.AutoLeaveAndDisconnect = toggle.isOn;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_57 = __this->___punVoiceClient_6;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_58 = ___0_toggle;
		bool L_59;
		L_59 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_58, NULL);
		L_57->___AutoLeaveAndDisconnect_40 = L_59;
	}

IL_01b3:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::OnCameraChanged(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_OnCameraChanged_mFF6F5A4E010E24050112AA28C610E025C527562C (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, const RuntimeMethod* method) 
{
	{
		// this.canvas.worldCamera = newCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_7;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___0_newCamera;
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_Start_m52571DF98C0B803526E008C84500CE25BC645C49 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_m6AB2CC623876C2D75EE29850C65A2141EA9246F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_TisString_t_m8BC012759978357E003DF018FD59A66B363F24A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__33_0_mA2AB26A951636ACF486510E28890A24DC6DB7BA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__33_1_m114761A206F4BA990286D1B439C9B1B17252672F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_BetterToggle_ToggleValueChanged_mA8CD4F779E575FD505483AFC33169BD0B77315BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_CalibrateButtonOnClick_m714D95BB81A1C7D6EB8E7FF89CB67310896E4F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_m4F46D60A48CBF2603CC1558BE2878AA95F607761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_OnCameraChanged_mFF6F5A4E010E24050112AA28C610E025C527562C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_PunClientStateChanged_m0B921FFA02E884DF2330EAB1028D02E70E1574E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_PunSwitchOnClick_mDC443A9416E72702EB26FDB51644CFC4AF2B6870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_VoiceClientStateChanged_m0C246B7B37739B1E50635EE3EC4501FD5996A174_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_VoiceSwitchOnClick_mF4168D2C0607E4D0696967B9FB15197BEAC874FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6895E595FC21425C2339794A94C0327D7BECE5A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF93CEA015670B8CF64DA924274547CFFAB1E66D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF94361AE62C8E8418A75AE9F66772AC8DE7EB3E);
		s_Il2CppMethodInitialized = true;
	}
	AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* G_B17_0 = NULL;
	AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	String_t* G_B17_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B17_4 = NULL;
	Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* G_B16_0 = NULL;
	AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* G_B16_1 = NULL;
	String_t* G_B16_2 = NULL;
	String_t* G_B16_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B16_4 = NULL;
	Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* G_B19_0 = NULL;
	RuntimeObject* G_B19_1 = NULL;
	String_t* G_B19_2 = NULL;
	String_t* G_B19_3 = NULL;
	String_t* G_B19_4 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B19_5 = NULL;
	Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	String_t* G_B18_2 = NULL;
	String_t* G_B18_3 = NULL;
	String_t* G_B18_4 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B18_5 = NULL;
	{
		// ChangePOV.CameraChanged += this.OnCameraChanged;
		OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* L_0 = (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222*)il2cpp_codegen_object_new(OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222_il2cpp_TypeInfo_var);
		OnCameraChanged__ctor_mE400CC879ED6B5CEE5520D5862DF829D56C60DD6(L_0, __this, (intptr_t)((void*)VoiceDemoUI_OnCameraChanged_mFF6F5A4E010E24050112AA28C610E025C527562C_RuntimeMethod_var), NULL);
		ChangePOV_add_CameraChanged_m45F436F543266857262C9289A3003AEAA0B9D4DB(L_0, NULL);
		// BetterToggle.ToggleValueChanged += this.BetterToggle_ToggleValueChanged;
		OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* L_1 = (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0*)il2cpp_codegen_object_new(OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0_il2cpp_TypeInfo_var);
		OnToggle__ctor_m00B08FA3B2F227E580842A724147633DF1B99AAB(L_1, __this, (intptr_t)((void*)VoiceDemoUI_BetterToggle_ToggleValueChanged_mA8CD4F779E575FD505483AFC33169BD0B77315BD_RuntimeMethod_var), NULL);
		BetterToggle_add_ToggleValueChanged_m153F63A0415ACE46D24E78E1D790D1475A9CF7FD(L_1, NULL);
		// CharacterInstantiation.CharacterInstantiated += this.CharacterInstantiation_CharacterInstantiated;
		OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* L_2 = (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC*)il2cpp_codegen_object_new(OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC_il2cpp_TypeInfo_var);
		OnCharacterInstantiated__ctor_mFF0A21EE34228E67F4CCBB7492121FB29B9EF6AF(L_2, __this, (intptr_t)((void*)VoiceDemoUI_CharacterInstantiation_CharacterInstantiated_m4F46D60A48CBF2603CC1558BE2878AA95F607761_RuntimeMethod_var), NULL);
		CharacterInstantiation_add_CharacterInstantiated_mBDEDF7B4C8B816B7D0134CED125953C6A0330EDB(L_2, NULL);
		// this.punVoiceClient.Client.StateChanged += this.VoiceClientStateChanged;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_3 = __this->___punVoiceClient_6;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_4;
		L_4 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_3, NULL);
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_5 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_5, __this, (intptr_t)((void*)VoiceDemoUI_VoiceClientStateChanged_m0C246B7B37739B1E50635EE3EC4501FD5996A174_RuntimeMethod_var), NULL);
		LoadBalancingClient_add_StateChanged_mA6384FF2BBFAD74989F27734C0A2251F6F470EB9(L_4, L_5, NULL);
		// PhotonNetwork.NetworkingClient.StateChanged += this.PunClientStateChanged;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_6 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_2;
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_7 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_7, __this, (intptr_t)((void*)VoiceDemoUI_PunClientStateChanged_m0B921FFA02E884DF2330EAB1028D02E70E1574E4_RuntimeMethod_var), NULL);
		LoadBalancingClient_add_StateChanged_mA6384FF2BBFAD74989F27734C0A2251F6F470EB9(L_6, L_7, NULL);
		// this.canvas = this.GetComponentInChildren<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_8;
		L_8 = Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18(__this, Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var);
		__this->___canvas_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_7), (void*)L_8);
		// if (this.punSwitch != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___punSwitch_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		// this.punSwitchText = this.punSwitch.GetComponentInChildren<Text>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___punSwitch_8;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12;
		L_12 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_11, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		__this->___punSwitchText_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___punSwitchText_9), (void*)L_12);
		// this.punSwitch.onClick.AddListener(this.PunSwitchOnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___punSwitch_8;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_13, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_15, __this, (intptr_t)((void*)VoiceDemoUI_PunSwitchOnClick_mDC443A9416E72702EB26FDB51644CFC4AF2B6870_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_15, NULL);
	}

IL_00ac:
	{
		// if (this.voiceSwitch != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___voiceSwitch_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00e7;
		}
	}
	{
		// this.voiceSwitchText = this.voiceSwitch.GetComponentInChildren<Text>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___voiceSwitch_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19;
		L_19 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_18, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		__this->___voiceSwitchText_11 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceSwitchText_11), (void*)L_19);
		// this.voiceSwitch.onClick.AddListener(this.VoiceSwitchOnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20 = __this->___voiceSwitch_10;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_21;
		L_21 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_20, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_22 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_22, __this, (intptr_t)((void*)VoiceDemoUI_VoiceSwitchOnClick_mF4168D2C0607E4D0696967B9FB15197BEAC874FE_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_21, L_22, NULL);
	}

IL_00e7:
	{
		// if (this.calibrateButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___calibrateButton_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_0122;
		}
	}
	{
		// this.calibrateButton.onClick.AddListener(this.CalibrateButtonOnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = __this->___calibrateButton_12;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_26;
		L_26 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_25, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_27 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_27, __this, (intptr_t)((void*)VoiceDemoUI_CalibrateButtonOnClick_m714D95BB81A1C7D6EB8E7FF89CB67310896E4F61_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_26, L_27, NULL);
		// this.calibrateText = this.calibrateButton.GetComponentInChildren<Text>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = __this->___calibrateButton_12;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29;
		L_29 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_28, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		__this->___calibrateText_13 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___calibrateText_13), (void*)L_29);
	}

IL_0122:
	{
		// if (this.punState != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___punState_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_014b;
		}
	}
	{
		// this.debugGO = this.punState.transform.parent.gameObject;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = __this->___punState_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_33, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		__this->___debugGO_19 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugGO_19), (void*)L_35);
	}

IL_014b:
	{
		// this.volumeBeforeMute = AudioListener.volume;
		float L_36;
		L_36 = AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A(NULL);
		__this->___volumeBeforeMute_21 = L_36;
		// this.previousDebugLevel = this.punVoiceClient.Client.LoadBalancingPeer.DebugOut;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_37 = __this->___punVoiceClient_6;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_38;
		L_38 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_37, NULL);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_39;
		L_39 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_38, NULL);
		uint8_t L_40 = ((PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C*)L_39)->___DebugOut_20;
		__this->___previousDebugLevel_22 = L_40;
		// if (this.globalSettings != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___globalSettings_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_41, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_42)
		{
			goto IL_019c;
		}
	}
	{
		// this.globalSettings.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___globalSettings_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)1, NULL);
		// this.InitToggles(this.globalSettings.GetComponentsInChildren<Toggle>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___globalSettings_17;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_45;
		L_45 = GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA(L_44, GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA_RuntimeMethod_var);
		VoiceDemoUI_InitToggles_m322C6B4ECF6B89A5951511DEF32925DB8F7F819C(__this, L_45, NULL);
	}

IL_019c:
	{
		// if (this.devicesInfoText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_46 = __this->___devicesInfoText_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_02b3;
		}
	}
	{
		// using (var unityMicEnum = new Photon.Voice.Unity.AudioInEnumerator(this.punVoiceClient.Client))
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_48 = __this->___punVoiceClient_6;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_49;
		L_49 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_48, NULL);
		AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* L_50 = (AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8*)il2cpp_codegen_object_new(AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8_il2cpp_TypeInfo_var);
		AudioInEnumerator__ctor_mDAE7254E287178AC4A735D8001A62551F50B43F3(L_50, L_49, NULL);
		V_0 = L_50;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02a9:
			{// begin finally (depth: 1)
				{
					AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* L_51 = V_0;
					if (!L_51)
					{
						goto IL_02b2;
					}
				}
				{
					AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* L_52 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_52);
				}

IL_02b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var photonMicEnum = Photon.Voice.Platform.CreateAudioInEnumerator(this.punVoiceClient.Client))
				PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_53 = __this->___punVoiceClient_6;
				LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_54;
				L_54 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_53, NULL);
				RuntimeObject* L_55;
				L_55 = Platform_CreateAudioInEnumerator_mAC7EB99564BE856564FD77BA5DEF350B04A72163(L_54, NULL);
				V_1 = L_55;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_029f_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_56 = V_1;
							if (!L_56)
							{
								goto IL_02a8_1;
							}
						}
						{
							RuntimeObject* L_57 = V_1;
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_57);
						}

IL_02a8_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// if (unityMicEnum.Count() + photonMicEnum.Count() == 0)
						AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* L_58 = V_0;
						int32_t L_59;
						L_59 = Enumerable_Count_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_m6AB2CC623876C2D75EE29850C65A2141EA9246F4(L_58, Enumerable_Count_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_m6AB2CC623876C2D75EE29850C65A2141EA9246F4_RuntimeMethod_var);
						RuntimeObject* L_60 = V_1;
						int32_t L_61;
						L_61 = Enumerable_Count_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_m6AB2CC623876C2D75EE29850C65A2141EA9246F4(L_60, Enumerable_Count_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_m6AB2CC623876C2D75EE29850C65A2141EA9246F4_RuntimeMethod_var);
						if (((int32_t)il2cpp_codegen_add(L_59, L_61)))
						{
							goto IL_020f_2;
						}
					}
					{
						// this.devicesInfoText.enabled = true;
						Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_62 = __this->___devicesInfoText_18;
						Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_62, (bool)1, NULL);
						// this.devicesInfoText.color = Color.red;
						Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_63 = __this->___devicesInfoText_18;
						Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64;
						L_64 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
						VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_63, L_64);
						// this.devicesInfoText.text = "No microphone device detected!";
						Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = __this->___devicesInfoText_18;
						VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, _stringLiteralDF94361AE62C8E8418A75AE9F66772AC8DE7EB3E);
						goto IL_02b3;
					}

IL_020f_2:
					{
						// this.devicesInfoText.text = "Mic Unity: " + string.Join(", ", unityMicEnum.Select(x => x.ToString()));
						Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_66 = __this->___devicesInfoText_18;
						AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* L_67 = V_0;
						il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var);
						Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* L_68 = ((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_1;
						Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* L_69 = L_68;
						G_B16_0 = L_69;
						G_B16_1 = L_67;
						G_B16_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
						G_B16_3 = _stringLiteral6895E595FC21425C2339794A94C0327D7BECE5A9;
						G_B16_4 = L_66;
						if (L_69)
						{
							G_B17_0 = L_69;
							G_B17_1 = L_67;
							G_B17_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
							G_B17_3 = _stringLiteral6895E595FC21425C2339794A94C0327D7BECE5A9;
							G_B17_4 = L_66;
							goto IL_023f_2;
						}
					}
					{
						il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var);
						U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235* L_70 = ((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9_0;
						Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* L_71 = (Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB*)il2cpp_codegen_object_new(Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB_il2cpp_TypeInfo_var);
						Func_2__ctor_mD513B99A1378B3BB13530A26474AFA2134923A8D(L_71, L_70, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__33_0_mA2AB26A951636ACF486510E28890A24DC6DB7BA9_RuntimeMethod_var), NULL);
						Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* L_72 = L_71;
						((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_1 = L_72;
						Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_1), (void*)L_72);
						G_B17_0 = L_72;
						G_B17_1 = G_B16_1;
						G_B17_2 = G_B16_2;
						G_B17_3 = G_B16_3;
						G_B17_4 = G_B16_4;
					}

IL_023f_2:
					{
						RuntimeObject* L_73;
						L_73 = Enumerable_Select_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_TisString_t_m8BC012759978357E003DF018FD59A66B363F24A0(G_B17_1, G_B17_0, Enumerable_Select_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_TisString_t_m8BC012759978357E003DF018FD59A66B363F24A0_RuntimeMethod_var);
						String_t* L_74;
						L_74 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(G_B17_2, L_73, NULL);
						String_t* L_75;
						L_75 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B17_3, L_74, NULL);
						VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B17_4, L_75);
						// this.devicesInfoText.text += "\nMic Photon: " + string.Join(", ", photonMicEnum.Select(x => x.ToString()));
						Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_76 = __this->___devicesInfoText_18;
						Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_77 = L_76;
						String_t* L_78;
						L_78 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_77);
						RuntimeObject* L_79 = V_1;
						il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var);
						Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* L_80 = ((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9__33_1_2;
						Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* L_81 = L_80;
						G_B18_0 = L_81;
						G_B18_1 = L_79;
						G_B18_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
						G_B18_3 = _stringLiteralDF93CEA015670B8CF64DA924274547CFFAB1E66D;
						G_B18_4 = L_78;
						G_B18_5 = L_77;
						if (L_81)
						{
							G_B19_0 = L_81;
							G_B19_1 = L_79;
							G_B19_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
							G_B19_3 = _stringLiteralDF93CEA015670B8CF64DA924274547CFFAB1E66D;
							G_B19_4 = L_78;
							G_B19_5 = L_77;
							goto IL_0289_2;
						}
					}
					{
						il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var);
						U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235* L_82 = ((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9_0;
						Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* L_83 = (Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB*)il2cpp_codegen_object_new(Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB_il2cpp_TypeInfo_var);
						Func_2__ctor_mD513B99A1378B3BB13530A26474AFA2134923A8D(L_83, L_82, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__33_1_m114761A206F4BA990286D1B439C9B1B17252672F_RuntimeMethod_var), NULL);
						Func_2_t988D86E3F184AD487A92FF1F9DD3B1570A4451FB* L_84 = L_83;
						((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9__33_1_2 = L_84;
						Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9__33_1_2), (void*)L_84);
						G_B19_0 = L_84;
						G_B19_1 = G_B18_1;
						G_B19_2 = G_B18_2;
						G_B19_3 = G_B18_3;
						G_B19_4 = G_B18_4;
						G_B19_5 = G_B18_5;
					}

IL_0289_2:
					{
						RuntimeObject* L_85;
						L_85 = Enumerable_Select_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_TisString_t_m8BC012759978357E003DF018FD59A66B363F24A0(G_B19_1, G_B19_0, Enumerable_Select_TisDeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_TisString_t_m8BC012759978357E003DF018FD59A66B363F24A0_RuntimeMethod_var);
						String_t* L_86;
						L_86 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(G_B19_2, L_85, NULL);
						String_t* L_87;
						L_87 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B19_4, G_B19_3, L_86, NULL);
						VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B19_5, L_87);
						// }
						goto IL_02b3;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02b3:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::PunSwitchOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_PunSwitchOnClick_mDC443A9416E72702EB26FDB51644CFC4AF2B6870 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PhotonNetwork.NetworkClientState == Photon.Realtime.ClientState.Joined)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PhotonNetwork_get_NetworkClientState_m14926C92B031C5788348074278770D6CB848BE7D(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_000f;
		}
	}
	{
		// PhotonNetwork.Disconnect();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_Disconnect_mD35F0E20EE21ADD3BE7787C3E26EBC27476EF734(NULL);
		return;
	}

IL_000f:
	{
		// else if (PhotonNetwork.NetworkClientState == Photon.Realtime.ClientState.Disconnected ||
		//     PhotonNetwork.NetworkClientState == Photon.Realtime.ClientState.PeerCreated)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = PhotonNetwork_get_NetworkClientState_m14926C92B031C5788348074278770D6CB848BE7D(NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)14))))
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = PhotonNetwork_get_NetworkClientState_m14926C92B031C5788348074278770D6CB848BE7D(NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}

IL_001f:
	{
		// PhotonNetwork.ConnectUsingSettings();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = PhotonNetwork_ConnectUsingSettings_m5062DDA82806820AE9358F849B0533B82230E540(NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::VoiceSwitchOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_VoiceSwitchOnClick_mF4168D2C0607E4D0696967B9FB15197BEAC874FE (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	{
		// if (this.punVoiceClient.ClientState == Photon.Realtime.ClientState.Joined)
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0 = __this->___punVoiceClient_6;
		int32_t L_1;
		L_1 = VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_001b;
		}
	}
	{
		// this.punVoiceClient.Disconnect();
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_2 = __this->___punVoiceClient_6;
		PunVoiceClient_Disconnect_mD121BB1E106EAFD8CC71EAD5BB17641842493377(L_2, NULL);
		return;
	}

IL_001b:
	{
		// else if (this.punVoiceClient.ClientState == Photon.Realtime.ClientState.PeerCreated
		//          || this.punVoiceClient.ClientState == Photon.Realtime.ClientState.Disconnected)
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_3 = __this->___punVoiceClient_6;
		int32_t L_4;
		L_4 = VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694(L_3, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_5 = __this->___punVoiceClient_6;
		int32_t L_6;
		L_6 = VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694(L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0043;
		}
	}

IL_0037:
	{
		// this.punVoiceClient.ConnectAndJoinRoom();
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_7 = __this->___punVoiceClient_6;
		bool L_8;
		L_8 = PunVoiceClient_ConnectAndJoinRoom_m80E65D6D1DEA18B6AC61FC6F0BC27CCC9FC9207B(L_7, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::CalibrateButtonOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_CalibrateButtonOnClick_m714D95BB81A1C7D6EB8E7FF89CB67310896E4F61 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.recorder.RecorderInUse && !this.recorder.RecorderInUse.VoiceDetectorCalibrating)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_0 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_1;
		L_1 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_3 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_4;
		L_4 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_3, NULL);
		bool L_5;
		L_5 = Recorder_get_VoiceDetectorCalibrating_m70D159F6E1FDD1B15A76CDEADEF1943BC38B1846(L_4, NULL);
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		// this.recorder.RecorderInUse.VoiceDetectorCalibrate(this.calibrationMilliSeconds);
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_6 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_7;
		L_7 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_6, NULL);
		int32_t L_8 = __this->___calibrationMilliSeconds_24;
		Recorder_VoiceDetectorCalibrate_m50971EE44ABB9A17D023A6835F9FC1D10F635581(L_7, L_8, (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)NULL, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_Update_m7564C7B447704E525EF7CA748220E53ECC017F4E (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILevelMeter_tAA539E9A7B391A21DCBE1B6E49298B3C5F8B6B36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral928D3973E1B0159DFBC5ABBB4358EC8A0EA8591A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.recorder != null && this.recorder.RecorderInUse != null && this.recorder.RecorderInUse.LevelMeter != null)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_0 = __this->___recorder_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_2 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_3;
		L_3 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_007c;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_5 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_6;
		L_6 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_5, NULL);
		RuntimeObject* L_7;
		L_7 = Recorder_get_LevelMeter_m4F6C7F01FC0FF7B4878A2373D81C1EABFF1209FF(L_6, NULL);
		if (!L_7)
		{
			goto IL_007c;
		}
	}
	{
		// this.voiceDebugText.text = string.Format("Amp: avg. {0:0.000000}, peak {1:0.000000}", this.recorder.RecorderInUse.LevelMeter.CurrentAvgAmp, this.recorder.RecorderInUse.LevelMeter.CurrentPeakAmp);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___voiceDebugText_14;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_9 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_10;
		L_10 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_9, NULL);
		RuntimeObject* L_11;
		L_11 = Recorder_get_LevelMeter_m4F6C7F01FC0FF7B4878A2373D81C1EABFF1209FF(L_10, NULL);
		float L_12;
		L_12 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Photon.Voice.AudioUtil/ILevelMeter::get_CurrentAvgAmp() */, ILevelMeter_tAA539E9A7B391A21DCBE1B6E49298B3C5F8B6B36_il2cpp_TypeInfo_var, L_11);
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_13);
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_15 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_16;
		L_16 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = Recorder_get_LevelMeter_m4F6C7F01FC0FF7B4878A2373D81C1EABFF1209FF(L_16, NULL);
		float L_18;
		L_18 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Photon.Voice.AudioUtil/ILevelMeter::get_CurrentPeakAmp() */, ILevelMeter_tAA539E9A7B391A21DCBE1B6E49298B3C5F8B6B36_il2cpp_TypeInfo_var, L_17);
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral928D3973E1B0159DFBC5ABBB4358EC8A0EA8591A, L_14, L_20, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_21);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::PunClientStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_PunClientStateChanged_m0B921FFA02E884DF2330EAB1028D02E70E1574E4 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, int32_t ___0_fromState, int32_t ___1_toState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033579EC8D0117A4537FD03D9BB53510D041EB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BC891A569A5D584FE65FFCAA41791C3F92BD535);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D774639089939D1DDB49955E154CC603511C5EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B959945E7E363C37693514A63BC4CF6D74EAB5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.punState.text = string.Format("PUN: {0}", toState);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___punState_4;
		int32_t L_1 = ___1_toState;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5D774639089939D1DDB49955E154CC603511C5EB, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		int32_t L_5 = ___1_toState;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___1_toState;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)9))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = ___1_toState;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0064;
		}
	}

IL_0028:
	{
		// this.punSwitch.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___punSwitch_8;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)1, NULL);
		// this.punSwitchText.text = "PUN Connect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___punSwitchText_9;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral033579EC8D0117A4537FD03D9BB53510D041EB23);
		// break;
		goto IL_0080;
	}

IL_0046:
	{
		// this.punSwitch.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___punSwitch_8;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_10, (bool)1, NULL);
		// this.punSwitchText.text = "PUN Disconnect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___punSwitchText_9;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral4BC891A569A5D584FE65FFCAA41791C3F92BD535);
		// break;
		goto IL_0080;
	}

IL_0064:
	{
		// this.punSwitch.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___punSwitch_8;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_12, (bool)0, NULL);
		// this.punSwitchText.text = "PUN busy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___punSwitchText_9;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteralB1B959945E7E363C37693514A63BC4CF6D74EAB5);
	}

IL_0080:
	{
		// this.UpdateUiBasedOnVoiceState(this.punVoiceClient.ClientState);
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_14 = __this->___punVoiceClient_6;
		int32_t L_15;
		L_15 = VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694(L_14, NULL);
		VoiceDemoUI_UpdateUiBasedOnVoiceState_mEFBFDED03B1DAC9C2D8D5EBFAABACD3B95B48549(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::VoiceClientStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_VoiceClientStateChanged_m0C246B7B37739B1E50635EE3EC4501FD5996A174 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, int32_t ___0_fromState, int32_t ___1_toState, const RuntimeMethod* method) 
{
	{
		// this.UpdateUiBasedOnVoiceState(toState);
		int32_t L_0 = ___1_toState;
		VoiceDemoUI_UpdateUiBasedOnVoiceState_mEFBFDED03B1DAC9C2D8D5EBFAABACD3B95B48549(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::UpdateUiBasedOnVoiceState(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_UpdateUiBasedOnVoiceState_mEFBFDED03B1DAC9C2D8D5EBFAABACD3B95B48549 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, int32_t ___0_voiceClientState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral047B3F3A5713C4B341DAC643DC51392B3E671766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral126C27EBBA7FB9D77EB1A44E51BF06EBA9C3FC63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18AF92CE6D406341CFFA209C15FD6F4392F16457);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E5AB6E37311930D6035C8D2CB8DFF55F56024E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61A855DC0F7460245BD0DC4ADF10AA9246C5D820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A10E765B103F3A508B5EAE688B10607DD41ADA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA259DF8AC99BEC96AC7B9F0DBEFA73EEE956D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5834ACEC33AD574D2A7A320AEAB1D2F09D962F8);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B9_1 = NULL;
	{
		// this.voiceState.text = string.Format("PhotonVoice: {0}", voiceClientState);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___voiceState_5;
		int32_t L_1 = ___0_voiceClientState;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral9A10E765B103F3A508B5EAE688B10607DD41ADA5, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		int32_t L_5 = ___0_voiceClientState;
		if (!L_5)
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_6 = ___0_voiceClientState;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)9))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___0_voiceClientState;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)14))))
		{
			goto IL_0108;
		}
	}
	{
		goto IL_01a2;
	}

IL_0033:
	{
		// this.voiceSwitch.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___voiceSwitch_10;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)1, NULL);
		// this.inGameSettings.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___inGameSettings_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// this.voiceSwitchText.text = "Voice Disconnect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___voiceSwitchText_11;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral61A855DC0F7460245BD0DC4ADF10AA9246C5D820);
		// this.InitToggles(this.inGameSettings.GetComponentsInChildren<Toggle>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___inGameSettings_16;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_12;
		L_12 = GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA(L_11, GameObject_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mD3EFACA402D55FCD0551B9A930373209963443AA_RuntimeMethod_var);
		VoiceDemoUI_InitToggles_m322C6B4ECF6B89A5951511DEF32925DB8F7F819C(__this, L_12, NULL);
		// if (this.recorder != null && this.recorder.RecorderInUse != null)
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_13 = __this->___recorder_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_00eb;
		}
	}
	{
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_15 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_16;
		L_16 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00eb;
		}
	}
	{
		// this.calibrateButton.interactable = !this.recorder.RecorderInUse.VoiceDetectorCalibrating;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___calibrateButton_12;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_19 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_20;
		L_20 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_19, NULL);
		bool L_21;
		L_21 = Recorder_get_VoiceDetectorCalibrating_m70D159F6E1FDD1B15A76CDEADEF1943BC38B1846(L_20, NULL);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_18, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), NULL);
		// this.calibrateText.text = this.recorder.RecorderInUse.VoiceDetectorCalibrating ? "Calibrating" : string.Format("Calibrate ({0}s)", this.calibrationMilliSeconds / 1000);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___calibrateText_13;
		PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* L_23 = __this->___recorder_15;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_24;
		L_24 = PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline(L_23, NULL);
		bool L_25;
		L_25 = Recorder_get_VoiceDetectorCalibrating_m70D159F6E1FDD1B15A76CDEADEF1943BC38B1846(L_24, NULL);
		G_B7_0 = L_22;
		if (L_25)
		{
			G_B8_0 = L_22;
			goto IL_00e0;
		}
	}
	{
		int32_t L_26 = __this->___calibrationMilliSeconds_24;
		int32_t L_27 = ((int32_t)(L_26/((int32_t)1000)));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral047B3F3A5713C4B341DAC643DC51392B3E671766, L_28, NULL);
		G_B9_0 = L_29;
		G_B9_1 = G_B7_0;
		goto IL_00e5;
	}

IL_00e0:
	{
		G_B9_0 = _stringLiteralD5834ACEC33AD574D2A7A320AEAB1D2F09D962F8;
		G_B9_1 = G_B8_0;
	}

IL_00e5:
	{
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B9_1, G_B9_0);
		return;
	}

IL_00eb:
	{
		// this.calibrateButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = __this->___calibrateButton_12;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_30, (bool)0, NULL);
		// this.calibrateText.text = "Unavailable";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = __this->___calibrateText_13;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, _stringLiteralADA259DF8AC99BEC96AC7B9F0DBEFA73EEE956D8);
		// break;
		return;
	}

IL_0108:
	{
		// if (PhotonNetwork.InRoom)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = PhotonNetwork_get_InRoom_mFBE0C1A516C34FBAD9923933C73E07080FDA199D(NULL);
		if (!L_32)
		{
			goto IL_013d;
		}
	}
	{
		// this.voiceSwitch.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = __this->___voiceSwitch_10;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_33, (bool)1, NULL);
		// this.voiceSwitchText.text = "Voice Connect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = __this->___voiceSwitchText_11;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, _stringLiteral18AF92CE6D406341CFFA209C15FD6F4392F16457);
		// this.voiceDebugText.text = String.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___voiceDebugText_14;
		String_t* L_36 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_36);
		goto IL_0169;
	}

IL_013d:
	{
		// this.voiceSwitch.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = __this->___voiceSwitch_10;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_37, (bool)0, NULL);
		// this.voiceSwitchText.text = "Voice N/A";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = __this->___voiceSwitchText_11;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteral2E5AB6E37311930D6035C8D2CB8DFF55F56024E3);
		// this.voiceDebugText.text = String.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___voiceDebugText_14;
		String_t* L_40 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_40);
	}

IL_0169:
	{
		// this.calibrateButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_41 = __this->___calibrateButton_12;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_41, (bool)0, NULL);
		// this.voiceSwitchText.text = "Voice Connect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = __this->___voiceSwitchText_11;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, _stringLiteral18AF92CE6D406341CFFA209C15FD6F4392F16457);
		// this.calibrateText.text = "Unavailable";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = __this->___calibrateText_13;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, _stringLiteralADA259DF8AC99BEC96AC7B9F0DBEFA73EEE956D8);
		// this.inGameSettings.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___inGameSettings_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)0, NULL);
		// break;
		return;
	}

IL_01a2:
	{
		// this.voiceSwitch.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_45 = __this->___voiceSwitch_10;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_45, (bool)0, NULL);
		// this.voiceSwitchText.text = "Voice busy";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_46 = __this->___voiceSwitchText_11;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, _stringLiteral126C27EBBA7FB9D77EB1A44E51BF06EBA9C3FC63);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI_OnApplicationQuit_m0985DCE467FAF9586E2402F767B6BBD61EEA6850 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_PunClientStateChanged_m0B921FFA02E884DF2330EAB1028D02E70E1574E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDemoUI_VoiceClientStateChanged_m0C246B7B37739B1E50635EE3EC4501FD5996A174_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.punVoiceClient.Client.StateChanged -= this.VoiceClientStateChanged;
		PunVoiceClient_tDCCDF79EA73DB2F09FFF216BBC6FF55C1F8202A1* L_0 = __this->___punVoiceClient_6;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_1;
		L_1 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(L_0, NULL);
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_2 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_2, __this, (intptr_t)((void*)VoiceDemoUI_VoiceClientStateChanged_m0C246B7B37739B1E50635EE3EC4501FD5996A174_RuntimeMethod_var), NULL);
		LoadBalancingClient_remove_StateChanged_m05D0CADDC74CE72BDD2CC9BBCBA8257D9CACD85B(L_1, L_2, NULL);
		// PhotonNetwork.NetworkingClient.StateChanged -= this.PunClientStateChanged;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_3 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_2;
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_4 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_4, __this, (intptr_t)((void*)VoiceDemoUI_PunClientStateChanged_m0B921FFA02E884DF2330EAB1028D02E70E1574E4_RuntimeMethod_var), NULL);
		LoadBalancingClient_remove_StateChanged_m05D0CADDC74CE72BDD2CC9BBCBA8257D9CACD85B(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDemoUI__ctor_m6F8B0C2FDD31FE0B9D35352750941BA90E8803D7 (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	{
		// private int calibrationMilliSeconds = 2000;
		__this->___calibrationMilliSeconds_24 = ((int32_t)2000);
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
void OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_Multicast(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* currentDelegate = reinterpret_cast<OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_debugMode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_OpenInst(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_debugMode, method);
}
void OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_OpenStatic(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_debugMode, method);
}
void OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_OpenStaticInvoker(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_debugMode);
}
void OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_ClosedStaticInvoker(OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_debugMode);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4 (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___0_debugMode));

}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle__ctor_m4BA7AEF10D5988FC38E5245D10218DE7DB1FCACF (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_Multicast;
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178 (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_debugMode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDebugToggle_BeginInvoke_mF55C423D8B4E77AC2D8407C82584025ACC87462A (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_debugMode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/OnDebugToggle::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDebugToggle_EndInvoke_m1D7E0BADC59753EDA74648ECCE7F3F9936B32BC4 (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF52964A6F7C80C6BEBA78489CBD15AF255318A1A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235* L_0 = (U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235*)il2cpp_codegen_object_new(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6779D3D0CBBD86E835BDAB58C577FEE3EC253C42(L_0, NULL);
		((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6779D3D0CBBD86E835BDAB58C577FEE3EC253C42 (U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c::<Start>b__33_0(Photon.Voice.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CStartU3Eb__33_0_mA2AB26A951636ACF486510E28890A24DC6DB7BA9 (U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235* __this, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___0_x, const RuntimeMethod* method) 
{
	{
		// this.devicesInfoText.text = "Mic Unity: " + string.Join(", ", unityMicEnum.Select(x => x.ToString()));
		String_t* L_0;
		L_0 = DeviceInfo_ToString_m5EB035A3212F6102102B2EBD7278D05FF6C94C17((&___0_x), NULL);
		return L_0;
	}
}
// System.String ExitGames.Demos.DemoPunVoice.VoiceDemoUI/<>c::<Start>b__33_1(Photon.Voice.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CStartU3Eb__33_1_m114761A206F4BA990286D1B439C9B1B17252672F (U3CU3Ec_t0163E78283A208EC5A05F76EDEBD99A9B7345235* __this, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___0_x, const RuntimeMethod* method) 
{
	{
		// this.devicesInfoText.text += "\nMic Photon: " + string.Join(", ", photonMicEnum.Select(x => x.ToString()));
		String_t* L_0;
		L_0 = DeviceInfo_ToString_m5EB035A3212F6102102B2EBD7278D05FF6C94C17((&___0_x), NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsMine { get; private set; }
		bool L_0 = __this->___U3CIsMineU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnToggle_Invoke_m5ABACE78240884BE4C89C08AD904EC0266531B65_inline (OnToggle_t25876FBD8128AB2BC6564F875EF9646346BB0FC0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_toggle, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCameraChanged_Invoke_m395D952143B4D8A51EC3B288906425E418B75013_inline (OnCameraChanged_t30F284524F9E812008353F077E54C591D6162222* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_newCamera, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_newCamera, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.actorNumber; }
		int32_t L_0 = __this->___actorNumber_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCharacterInstantiated_Invoke_m573FD75F0A34DF299CF17283C261797AC3D4B9E4_inline (OnCharacterInstantiated_t54CA6A02F603AA19061AEA70A78CCDC7E53678DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_character, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_character, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) 
{
	{
		// return this.viewIdField;
		int32_t L_0 = __this->___viewIdField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* PhotonVoiceView_get_SpeakerInUse_m2B9E01349729560A84C0CFE8C039082CBCB9B0CF_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = __this->___U3CSpeakerInUseU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// public new LoadBalancingTransport Client { get { return this.client; } }
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_0 = __this->___client_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_0 = __this->___U3CLoadBalancingPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnDebugToggle_Invoke_mB610BB45B14797CDB83E85E739A577AC3134C178_inline (OnDebugToggle_t2A4AAC0A1CD752584A51A400C4CD660C6463FFC4* __this, bool ___0_debugMode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_debugMode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* PhotonVoiceView_get_RecorderInUse_m81ED4D96A4DD34A4890843E7C485ABA2707B3A6A_inline (PhotonVoiceView_tCAADBEF2C0E22FD4386AFBE797B39CCFDB4FE0E9* __this, const RuntimeMethod* method) 
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = __this->___U3CRecorderInUseU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_VoiceDetection_mF217F20782F7563928EF8A09B5283FF3D5B58F52_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) 
{
	{
		// return this.voiceDetection;
		bool L_0 = __this->___voiceDetection_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDemoUI_get_DebugMode_mD708E74166B1700D28170766E7D8E85B2CA46E8A_inline (VoiceDemoUI_tCC1F6BE115FC5E35B753A6A2BBDF1FB2B3911EFD* __this, const RuntimeMethod* method) 
{
	{
		// return this.debugMode;
		bool L_0 = __this->___debugMode_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.transmitEnabled; }
		bool L_0 = __this->___transmitEnabled_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
