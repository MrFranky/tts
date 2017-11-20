class CfgPatches
{
	class dayz_code
	{
		units[]=
		{
			"DZ_Pastor",
			"DZ_Fin",
			"UH1Wreck_Ori",
			"Land_Ind_MalyKomin",
			"Land_Rail_Semafor",
			"Land_Rail_Zavora",
			"Land_majak",
			"Land_majak2",
			"Land_Vysilac_FM",
			"Land_telek1",
			"Land_Stoplight01",
			"Land_Stoplight02",
			"Land_NavigLight",
			"Land_runway_edgelight",
			"Land_VASICore",
			"Land_HouseB_Tenement",
			"Land_Mil_ControlTower",
			"Land_NAV_Lighthouse",
			"Land_NAV_Lighthouse2",
			"Land_A_Crane_02b",
			"Land_Farm_WTower",
			"Land_A_TVTower_Mid",
			"Land_A_TVTower_Top",
			"GraveCrossHelmet_DZ"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dayz_equip",
			"dayz_weapons",
			"CAMisc3",
			"CABuildingParts",
			"CABuildingParts_Signs",
			"CAStructuresHouse",
			"CAStructuresLand_Ind_Stack_Big",
			"CAStructures_Misc_Powerlines",
			"CAStructures",
			"CABuildings",
			"CABuildings2",
			"Ind_MalyKomin",
			"CAStructures_A_CraneCon",
			"CAStructures_Mil",
			"CAStructures_Nav",
			"CAStructures_Rail",
			"A_Crane_02",
			"A_TVTower",
			"CAStructures_Railway",
			"CAStructuresHouse",
			"CAStructuresHouse_HouseBT",
			"CAWeapons",
			"OSShDY",
			"ori_scrapTank",
			"ori_ScrapBuggy",
			"ori_smallRaft",
			"ori_bigRaft",
			"ori_pragaCopter",
			"rth_small_tent",
			"ori_titanic",
			"ori_vehicles",
			"ori_dc3",
			"ori_base_buildings",
			"origins_pack_cars",
			"ori_flying_fortress",
			"ori_submarine",
			"ori_air",
			"SLA_Weapons",
			"RH_de_cfg",
			"BB_OA_Female",
			"ksk_mod",
			"SG_GRU",
			"SG_Modern_FSB",
			"ori_data",
			"usec_rig_a"
		};
	};
};
class CfgMods
{
	class DayZ
	{
		dir="DayZ";
		name="DayZ";
		picture="\ori\ui\origins_logo_ca.paa";
		hidePicture=0;
		hideName=0;
		action="http://www.OriginsMod.info";
		version="1.8";
		hiveVersion=0.98000002;
	};
};
class CfgAddons
{
	access=1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[]=
			{
				"dayz_code",
				"dayz",
				"dayz_equip",
				"dayz_weapons"
			};
		};
	};
};
class RscPictureGUI
{
	access=0;
	type=0;
	idc=-1;
	colorBackground[]={0,0,0,0};
	colorText[]={0.38,0.63,0.25999999,0.75};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	style="0x30 + 0x100 + 0x800";
	x=0;
	y=0;
	w=0.2;
	h=0.15000001;
};
class RscTextGUIK
{
	type=0;
	idc=-1;
	style=2;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,0.5};
	font="TahomaB";
	size=0.029999999;
	sizeEx=0.029999999;
	x=0;
	y=0;
	w=0.1;
	h=0.2;
};
class RscStructuredText
{
	class Attributes;
};
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	class Attributes: Attributes
	{
		align="center";
		valign="middle";
	};
};
class CfgMovesAnimalsBase
{
	class ManActions;
	class StandBase;
	class DefaultDie;
	class BlendAnims;
};
class CfgMovesDogBase
{
	class Default
	{
		actions="";
		access=3;
		file="";
		looped=1;
		speed=0.5;
		disableWeapons=1;
		enableOptics=0;
		disableWeaponsLong=1;
		showWeaponAim=0;
		enableMissile=0;
		enableBinocular=0;
		showItemInHand=0;
		showItemInRightHand=0;
		showHandGun=0;
		onLandBeg=0;
		onLandEnd=0;
		onLadder=0;
		canPullTrigger=1;
		duty=-0.50999999;
		predictSpeedCoef=1;
		visibleSize=1;
		aimPrecision=1;
		relSpeedMin=1;
		relSpeedMax=1;
		soundEnabled=0;
		controlHead=0;
		headBobMode=0;
		headBobStrength=0;
		soundOverride="";
		soundEdge[]={0.5,1};
		terminal=0;
		limitGunMovement=1;
		variantsPlayer[]={};
		variantsAI[]=
		{
			""
		};
		equivalentTo="";
		connectAs="";
		variantAfter[]={5,10,20};
		connectFrom[]={};
		connectTo[]={};
		interpolateWith[]={};
		interpolateTo[]={};
		interpolateFrom[]={};
		aiming="aimingNo";
		leaning="aimingNo";
		untiltWeapon="aimingNo";
		aimingBody="aimingUpDefault";
		legs="legsNo";
		head="headDefault";
		leaningFactorBeg=0;
		leaningFactorEnd=0;
		leaningFactorZeroPoint=-1;
		leaningCorrectionAngleBeg=0;
		leaningCorrectionAngleEnd=0;
		interpolationSpeed=6;
		interpolationRestart=0;
		collisionShape="ca\animals2\data\geom\basicColide.p3d";
		hasCollShapeSafe=0;
		collisionShapeSafe="";
		boundingSphere=1;
		enableDirectControl=1;
		enableAutoActions=0;
		leftHandIKBeg=0;
		leftHandIKEnd=0;
		rightHandIKBeg=0;
		rightHandIKEnd=0;
		weaponIK=0;
		preload=0;
		walkcycles=1;
		forceAim=0;
		rightHandIKCurve[]={};
		leftHandIKCurve[]={};
	};
	class StandBase: Default
	{
		aiming="aimingDefault";
		disableWeapons=1;
		leaningFactorBeg=1;
		leaningFactorEnd=1;
	};
	class DefaultDie: Default
	{
		aiming="aimingNo";
		legs="legsNo";
		head="headNo";
		disableWeapons=1;
		interpolationRestart=1;
		soundOverride="fallbody";
		soundEdge[]={0.44999999};
		soundEnabled=0;
	};
	class ManActions
	{
		Stop="";
		StopRelaxed="";
		TurnL="";
		TurnR="";
		TurnLRelaxed="";
		TurnRRelaxed="";
		Default="";
		JumpOff="";
		ReloadMagazine="";
		ReloadMGun="";
		ReloadAT="";
		ReloadMortar="";
		ThrowGrenade="";
		WalkF="";
		WalkLF="";
		WalkRF="";
		WalkL="";
		WalkR="";
		WalkLB="";
		WalkRB="";
		WalkB="";
		SlowF="";
		SlowLF="";
		SlowRF="";
		SlowL="";
		SlowR="";
		SlowLB="";
		SlowRB="";
		SlowB="";
		FastF="";
		FastLF="";
		FastRF="";
		FastL="";
		FastR="";
		FastLB="";
		FastRB="";
		FastB="";
		EvasiveForward="";
		EvasiveLeft="";
		EvasiveRight="";
		EvasiveBack="";
		StartSwim="";
		StopSwim="";
		Down="";
		Up="";
		PlayerStand="";
		PlayerCrouch="";
		PlayerProne="";
		Lying="";
		Stand="";
		Combat="";
		Crouch="";
		CanNotMove="";
		Civil="";
		CivilLying="";
		FireNotPossible="";
		Die="";
		WeaponOn="";
		WeaponOff="";
		StrokeFist="";
		StrokeGun="";
		SitDown="";
		Salute="";
		BinocOn="";
		BinocOff="";
		PutDown="";
		PutDownEnd="";
		Medic="";
		Treated="";
		LadderOnDown="";
		LadderOnUp="";
		LadderOff="";
		LadderOffTop="";
		LadderOffBottom="";
		GetInLow="";
		GetInMedium="";
		GetInHigh="";
		GetOutLow="";
		GetOutMedium="";
		GetOutHigh="";
		TakeFlag="";
		HandGunOn="";
		LookAround="";
		Eat="";
		StopEat="";
		Rest="";
		StopRest="";
		GestureBark=" ";
		GestureIdle1=" ";
		GestureIdle2=" ";
		GestureSniff=" ";
		GestureHeadL=" ";
		GestureHeadR=" ";
	};
	class BlendAnims
	{
		aimingDefault[]={};
		untiltWeaponDefault[]={};
		legsDefault[]={};
		headDefault[]={};
		aimingNo[]={};
		legsNo[]={};
		headNo[]={};
		aimingUpDefault[]={};
	};
	collisionVertexPattern[]=
	{
		"1a",
		"2a",
		"3a",
		"4a",
		"5a",
		"6a",
		"7a",
		"8a",
		"9a",
		"10a",
		"11a",
		"12a",
		"13a",
		"14a",
		"15a",
		"16a",
		"17a",
		"18a",
		"19a",
		"20a",
		"21a",
		"22a",
		"23a",
		"24a",
		"25a",
		"26a",
		"27a",
		"28a",
		"29a",
		"30a",
		"31a",
		"32a",
		"33a",
		"34a"
	};
	collisionGeomCompPattern[]={1};
};
class CfgMovesDogDZ: CfgMovesDogBase
{
	primaryActionMaps[]=
	{
		"DogActions",
		"NoActions"
	};
	skeletonName="DogSkeleton";
	gestures="CfgGesturesDogDZ";
	class States
	{
		class Dog_Stop: StandBase
		{
			actions="DogActions";
			duty=-1;
			file="\CA\animals2\dogs\data\Anim\dogStop";
			speed=1e+010;
			relSpeedMin=0.69999999;
			relSpeedMax=1.1;
			looped=1;
			ConnectTo[]=
			{
				"Dog_TurnR",
				0.1,
				"Dog_StopV2",
				0.1,
				"Dog_StopV1",
				0.1,
				"Dog_TurnL",
				0.1,
				"Dog_Sprint",
				0.02,
				"Dog_Run",
				0.02,
				"Dog_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"Dog_TurnR",
				0.1,
				"Dog_Die",
				0.02,
				"Dog_TurnL",
				0.1,
				"Dog_Sprint",
				0.02,
				"Dog_Run",
				0.02,
				"Dog_Walk",
				0.2
			};
		};
		class Dog_TurnL: Dog_Stop
		{
			file="\CA\animals2\Dogs\data\anim\dog_rotateL.rtm";
			speed=1;
			ConnectTo[]=
			{
				"Dog_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"Dog_Stop",
				0.1
			};
		};
		class Dog_TurnR: Dog_TurnL
		{
			file="\CA\animals2\Dogs\data\anim\dog_rotateR.rtm";
			ConnectTo[]=
			{
				"Dog_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"Dog_Stop",
				0.1
			};
		};
		class Dog_StopV1: Dog_Stop
		{
			file="\CA\animals2\dogs\data\Anim\dogIDLE";
			speed=2.1400001;
			variantAfter[]={5,7,10};
			looped=0;
			ConnectTo[]=
			{
				"Dog_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02
			};
		};
		class Dog_StopV2: Dog_Stop
		{
			file="\CA\animals2\dogs\data\Anim\dogBark";
			speed=1;
			variantAfter[]={1,1,1};
			looped=0;
			ConnectTo[]=
			{
				"Dog_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02
			};
		};
		class Dog_Attack: Dog_Stop
		{
			file="\CA\animals2\dogs\data\Anim\dogAttack";
			speed=1;
			variantAfter[]={1,1,1};
			looped=0;
			ConnectTo[]=
			{
				"Dog_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02
			};
		};
		class Dog_Sniff: Dog_Stop
		{
			file="\dayz_anim\dog\dogGestureSniff";
			speed=0.30000001;
			mask="frontBody";
			variantAfter[]={1,1,1};
			looped=0;
			ConnectTo[]=
			{
				"Dog_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02
			};
		};
		class Dog_SitDown: Dog_Stop
		{
			actions="DogSit";
			file="\CA\animals2\dogs\data\Anim\dogSit1In";
			speed=1.4299999;
			variantAfter[]={1,1,1};
			looped=0;
			relSpeedMin=0.99667197;
			relSpeedMax=0.99667197;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02
			};
		};
		class Dog_LieDown: Dog_Stop
		{
			actions="DogSit";
			file="\dayz_anim\dog\dogStandDown";
			speed=1.428571;
			variantAfter[]={1,1,1};
			looped=0;
			relSpeedMin=0.99667197;
			relSpeedMax=0.99667197;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02
			};
		};
		class Dog_GetUp: Dog_Stop
		{
			actions="DogSit";
			file="\dayz_anim\dog\dogDownStand";
			speed=1.428571;
			variantAfter[]={1,1,1};
			looped=0;
			relSpeedMin=0.99667197;
			relSpeedMax=0.99667197;
			ConnectTo[]=
			{
				"Dog_Stop",
				0.1,
				"Dog_Run",
				0.1,
				"Dog_Walk",
				0.1,
				"Dog_Sprint",
				0.1
			};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02,
				"Dog_Run",
				0.1,
				"Dog_Walk",
				0.1,
				"Dog_Sprint",
				0.1
			};
		};
		class Dog_Siting: Dog_Stop
		{
			actions="DogSit";
			file="\CA\animals2\dogs\data\Anim\dogSit2Idle";
			speed=1.58;
			variantAfter[]={1,1,1};
			looped=1;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02
			};
		};
		class Dog_SitUp: Dog_Stop
		{
			actions="DogSit";
			file="\CA\animals2\dogs\data\Anim\dogSit3Out";
			speed=1.08;
			variantAfter[]={1,1,1};
			looped=0;
			relSpeedMin=0.99667197;
			relSpeedMax=0.99667197;
			ConnectTo[]=
			{
				"Dog_Stop",
				0.1,
				"Dog_Run",
				0.1,
				"Dog_Walk",
				0.1,
				"Dog_Sprint",
				0.1
			};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02,
				"Dog_Run",
				0.1,
				"Dog_Walk",
				0.1,
				"Dog_Sprint",
				0.1
			};
		};
		class Dog_Sprint: Dog_Stop
		{
			actions="DogSprint";
			file="\CA\animals2\dogs\data\Anim\dogSprint";
			duty=0.5;
			speed=4.5;
			ConnectTo[]=
			{
				"Dog_Stop",
				0.02,
				"Dog_Run",
				0.02,
				"Dog_Walk",
				0.02
			};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02,
				"Dog_Stop",
				0.02,
				"Dog_Run",
				0.02,
				"Dog_Walk",
				0.02
			};
		};
		class Dog_Run: Dog_Stop
		{
			file="\CA\animals2\dogs\data\Anim\dogRun";
			duty=-0.5;
			speed=1.8;
			ConnectTo[]=
			{
				"Dog_Stop",
				0.02,
				"Dog_Sprint",
				0.02,
				"Dog_Walk",
				0.02
			};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02,
				"Dog_Stop",
				0.02,
				"Dog_Sprint",
				0.02,
				"Dog_Walk",
				0.02
			};
		};
		class Dog_Walk: Dog_Stop
		{
			duty=-0.69999999;
			file="\CA\animals2\dogs\data\Anim\dogWalk";
			speed=1.3;
			variantAfter[]={3,10,20};
			ConnectTo[]=
			{
				"Dog_Stop",
				0.2,
				"Dog_Sprint",
				0.2,
				"Dog_Run",
				0.2
			};
			InterpolateTo[]=
			{
				"Dog_Die",
				0.02,
				"Dog_Stop",
				0.2,
				"Dog_Sprint",
				0.2,
				"Dog_Run",
				0.2
			};
		};
		class Dog_Die: DefaultDie
		{
			enableDirectControl=0;
			actions="NoActions";
			file="\CA\animals2\dogs\data\Anim\dogDeath";
			speed=1.2;
			looped=0;
			variantsPlayer[]={};
			variantsAI[]=
			{
				""
			};
			variantAfter[]={0,0,0};
			terminal=1;
			soundEnabled=0;
			ConnectTo[]={};
			InterpolateTo[]={};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed=8;
			limitFast=5.5;
			useFastMove=0;
			upDegree=0;
			GestureBark[]=
			{
				"GestureBark",
				"Gesture"
			};
			GestureIdle1[]=
			{
				"GestureIdle1",
				"Gesture"
			};
			GestureIdle2[]=
			{
				"GestureIdle2",
				"Gesture"
			};
			GestureSniff[]=
			{
				"GestureSniff",
				"Gesture"
			};
			GestureHeadL[]=
			{
				"GestureHeadL",
				"Gesture"
			};
			GestureHeadR[]=
			{
				"GestureHeadR",
				"Gesture"
			};
		};
		class DogActions: NoActions
		{
			Stop="Dog_Stop";
			StopRelaxed="Dog_Stop";
			TurnL="Dog_TurnL";
			TurnR="Dog_TurnR";
			TurnLRelaxed="Dog_TurnL";
			TurnRRelaxed="Dog_TurnR";
			Default="Dog_Stop";
			JumpOff="Dog_Stop";
			WalkF="Dog_Walk";
			SlowF="Dog_Run";
			FastF="Dog_Sprint";
			EvasiveForward="Dog_Sprint";
			Down="Dog_Stop";
			Up="Dog_Stop";
			PlayerStand="Dog_Stop";
			PlayerProne="Dog_Stop";
			PlayerCrouch="";
			Crouch="";
			Lying="Dog_Stop";
			Stand="Dog_Stop";
			Combat="Dog_Stop";
			CanNotMove="Dog_Stop";
			Civil="Dog_Stop";
			CivilLying="Dog_Stop";
			FireNotPossible="Dog_StopV1";
			Die="Dog_Die";
			turnSpeed=8;
			limitFast=5.5;
			useFastMove=0;
			upDegree="ManPosNoWeapon";
			StartSwim="Dog_Die";
		};
		class DogSprint: DogActions
		{
			Die="Dog_Die";
			turnSpeed=4;
			limitFast=5.5;
			useFastMove=1;
		};
		class DogSit: NoActions
		{
			Up="Dog_Stop";
			PlayerStand="Dog_Stop";
			Stand="Dog_Stop";
			WalkF="Dog_Walk";
			SlowF="Dog_Run";
			FastF="Dog_Sprint";
			EvasiveForward="Dog_Sprint";
			PlayerCrouch="Dog_Stop";
			Crouch="Dog_Stop";
			Die="Dog_Die";
			upDegree="ManPosNoWeapon";
			StartSwim="Dog_Die";
		};
	};
	class Interpolations
	{
	};
	transitionsInterpolated[]={};
	transitionsSimple[]={};
	transitionsDisabled[]={};
	class BlendAnims: BlendAnims
	{
		aimingDefault[]=
		{
			"head",
			1,
			"Jaw",
			1,
			"Neck1",
			0.5,
			"Tongue1",
			1,
			"Tongue2",
			1
		};
		untiltWeaponDefault[]={};
		legsDefault[]={};
		headDefault[]=
		{
			"head",
			1,
			"Jaw",
			1,
			"Neck1",
			0.5,
			"Tongue1",
			1,
			"Tongue2",
			1
		};
		aimingNo[]={};
		legsNo[]={};
		headNo[]={};
		aimingUpDefault[]={};
		frontBody[]=
		{
			"neck",
			1,
			"neck1",
			1,
			"head",
			1,
			"Jaw",
			1,
			"Tongue1",
			1,
			"Tongue2",
			1,
			"leftArm",
			0.5,
			"rightArm",
			0.5,
			"leftEar",
			1,
			"rightEar",
			1
		};
	};
};
class CfgGesturesDogDZ
{
	skeletonName="DogSkeleton";
	class ManActions
	{
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed=0;
			upDegree=0;
			limitFast=1;
			useFastMove=0;
		};
	};
	class Default
	{
		actions="NoActions";
		file="";
		looped=1;
		speed=0.5;
		relSpeedMin=1;
		relSpeedMax=1;
		soundEnabled=0;
		soundOverride="";
		soundEdge[]={0.5,1};
		terminal=0;
		equivalentTo="";
		connectAs="";
		connectFrom[]={};
		connectTo[]={};
		interpolateWith[]={};
		interpolateTo[]={};
		interpolateFrom[]={};
		mask="empty";
		interpolationSpeed=6;
		interpolationRestart=0;
		preload=0;
		disableWeapons=1;
		enableOptics=1;
		showWeaponAim=1;
		enableMissile=1;
		enableBinocular=1;
		showItemInHand=0;
		showItemInRightHand=0;
		showHandGun=0;
		canPullTrigger=1;
		walkcycles=1;
		headBobMode=0;
		headBobStrength=0;
		leftHandIKBeg=0;
		leftHandIKEnd=0;
		rightHandIKBeg=0;
		rightHandIKEnd=0;
		leftHandIKCurve[]={1};
		rightHandIKCurve[]={1};
		forceAim=0;
	};
	class States
	{
		class GestureBark: Default
		{
			file="\dayz_anim\dog\dogBarkOnce";
			looped=0;
			speed=3;
			mask="barking";
		};
		class GestureIdle1: Default
		{
			file="\dayz_anim\dog\dogGestureIdle1";
			looped=0;
			speed=0.30000001;
			mask="idle";
		};
		class GestureIdle2: Default
		{
			file="\dayz_anim\dog\dogGestureIdle2";
			looped=0;
			speed=0.30000001;
			mask="idle";
		};
		class GestureHeadL: Default
		{
			file="\dayz_anim\dog\dogGestureHeadL";
			looped=0;
			speed=0.30000001;
			mask="idle";
		};
		class GestureHeadR: Default
		{
			file="\dayz_anim\dog\dogGestureHeadR";
			looped=0;
			speed=0.30000001;
			mask="idle";
		};
		class GestureSniff: Default
		{
			file="\dayz_anim\dog\dogGestureSniff";
			looped=0;
			speed=0.30000001;
			mask="frontBody";
		};
	};
	class BlendAnims
	{
		barking[]=
		{
			"head",
			1,
			"Jaw",
			1,
			"Neck1",
			0.5,
			"Tongue1",
			1,
			"Tongue2",
			1,
			"Tail1",
			0.30000001,
			"Tail2",
			0.60000002,
			"Tail3",
			1
		};
		idle[]=
		{
			"head",
			1,
			"Jaw",
			1,
			"Neck1",
			0.60000002,
			"Tongue1",
			1,
			"Tongue2",
			1,
			"Tail1",
			0.30000001,
			"Tail2",
			0.60000002,
			"Tail3",
			1,
			"Spine",
			0.1,
			"Spine1",
			0.2,
			"Spine2",
			0.40000001
		};
		frontBody[]=
		{
			"spine",
			0.1,
			"spine1",
			0.30000001,
			"spine2",
			0.60000002,
			"neck",
			1,
			"neck1",
			1,
			"head",
			1,
			"Jaw",
			1,
			"Tongue1",
			1,
			"Tongue2",
			1,
			"leftArm",
			0.5,
			"rightArm",
			0.5,
			"leftEar",
			1,
			"rightEar",
			1
		};
	};
	class Interpolations
	{
	};
	transitionsInterpolated[]={};
	transitionsSimple[]={};
	transitionsDisabled[]={};
};
class RscPicture;
class RscButton;
class CA_IGUI_Title;
class RscText;
class RscControlsGroup;
class RscLineBreak;
class RscIGUIListNBox;
class RscActiveText;
class RscDisplayLoadMission;
class RscShortcutButton;
class CA_Title;
class RscIGUIListBox;
class RscEdit;
class RscCombo;
class RscXListBox;
class RscPictureKeepAspect;
class RscStandardDisplay;
class RscProgress;
class RscProgressNotFreeze;
class RscButtonTextOnly;
class RscShortcutButtonMain;
class RscMsgBox
{
	movingEnable=1;
	onLoad="endLoadingScreen";
	class Top
	{
		class CA_Background_Top: RscPicture
		{
			x=0.13;
			y=0.23999999;
			w=1.2549;
			h=0.104575;
			moving=1;
			text="\ori\ui\ui_messagebox_top_ca.paa";
		};
	};
	class Middle
	{
		class CA_Background_Middle: RscPicture
		{
			x=0.13;
			y=0.344621;
			w=1.2549;
			h=0.032000002;
			text="\ori\ui\ui_messagebox_middle_ca.paa";
		};
		class CA_Text: RscStructuredText
		{
			idc=101;
			x=0.146045;
			y=0.344621;
			w=0.70999998;
			h=0;
			size=0.039209999;
			class Attributes
			{
				color="#e0d8a6";
			};
		};
	};
	class Bottom
	{
		class CA_Background_Bottom: RscPicture
		{
			x=0.13;
			y=0.37662101;
			w=1.2549;
			h=0.20915;
			text="\ori\ui\ui_messagebox_bottom_ca.paa";
		};
		class CA_ButtonOK: RscShortcutButton
		{
			idc=1;
			shortcuts[]=
			{
				"0x00050000+0",
				28,
				57,
				156
			};
			text="$STR_DISP_OK";
			default=1;
			x=0.45039999;
			y=0.40162101;
			w=0.2;
			font="TahomaB";
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			h=0.07;
			class TextPos
			{
				left=0.061999999;
				top=0.0070000002;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0040000002;
				top=0.0040000002;
				right=0.0040000002;
				bottom=0.0040000002;
			};
		};
		class CA_ButtonCancel: CA_ButtonOK
		{
			idc=2;
			shortcuts[]=
			{
				"0x00050000+1"
			};
			text="$STR_DISP_CANCEL";
			x=0.66000003;
		};
	};
};
class RscDisplayPassword: RscStandardDisplay
{
	movingEnable=0;
	simulationEnabled=0;
	class controlsbackground
	{
		class MainbackFadedOrigins: RscPicture
		{
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			colorText[]={1,1,1,1};
			text="\ori\ui\fon_co.paa";
		};
		delete CA_Background_Top;
		class CA_Background_TopOri: RscPicture
		{
			x=0.13;
			y=0.23999999;
			w=1.2549;
			h=0.41830099;
			text="\ori\ui\ui_background_messagebox_ca.paa";
		};
	};
	class controls
	{
		delete SetPasswordTitle;
		class TextPassword: RscText
		{
			idc=1002;
			x=0.191;
			y=0.354166;
			w=0.16176599;
			text="$STR_DISP_PASSWORD";
		};
		class ValuePassword: RscEdit
		{
			x=0.36151901;
			y=0.356617;
			w=0.33088499;
			h=0.039216001;
			colorBackground[]={0,0,0,0.5};
		};
		class CA_ButtonCancel: RscShortcutButton
		{
			idc=2;
			shortcuts[]=
			{
				"0x00050000+1"
			};
			text="$STR_DISP_CANCEL";
			x=0.200196;
			y=0.46592399;
			font="TahomaB";
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			h=0.07;
			class TextPos
			{
				left=0.050000001;
				top=0.0070000002;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0040000002;
				top=0.0040000002;
				right=0.0040000002;
				bottom=0.0040000002;
			};
		};
		class CA_ButtonOK: RscShortcutButton
		{
			idc=1;
			shortcuts[]=
			{
				"0x00050000+0",
				28,
				57,
				156
			};
			text="$STR_DISP_OK";
			default=1;
			x=0.60498101;
			y=0.46592399;
			font="TahomaB";
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			h=0.07;
			class TextPos
			{
				left=0.061999999;
				top=0.0070000002;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0040000002;
				top=0.0040000002;
				right=0.0040000002;
				bottom=0.0040000002;
			};
		};
	};
};
class RscDisplayLoadCustom: RscDisplayLoadMission
{
	enableSimulation=0;
	onload="_this call compile preprocessfilelinenumbers 'ca\ui\scripts\ui_loadingTextCustom.sqf';";
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			class controls
			{
				class LoadingPic: RscPictureKeepAspect
				{
					text="ori\ui\ori_loadscreen1_co.paa";
				};
			};
		};
	};
};
class RscDisplayStart
{
	class controls
	{
		class LoadingPic: RscPictureKeepAspect
		{
			text="ori\ui\ori_loadscreen1_co.paa";
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	onKeyDown=" _dummy = _this execVM ""\ori\ui\scripts\mainmenuShortcuts.sqf"";";
	class RscShortcutButtonMain2: RscShortcutButtonMain
	{
		animTextureNormal="\ori\ui\ui_knopka_menu_disabled_ca.paa";
		animTextureDisabled="\ori\ui\ui_knopka_menu_disabled_ca.paa";
		animTextureOver="\ori\ui\ui_knopka_menu_over_ca.paa";
		animTextureFocused="\ori\ui\ui_knopka_menu_focus_ca.paa";
		animTexturePressed="\ori\ui\ui_knopka_menu_down_ca.paa";
		animTextureDefault="\ori\ui\ui_knopka_menu_disabled_ca.paa";
		period=0.5;
		periodFocus=1.2;
		periodOver=0.80000001;
	};
	class controlsBackground
	{
		class MainbackFadedOrigins: RscPicture
		{
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			colorText[]={1,1,1,1};
			text="\ori\ui\fon_co.paa";
		};
		delete Mainback;
		class Mainback_Ori: RscPicture
		{
			idc=1104;
			x=0.045000002;
			y=0.17;
			w=0.627451;
			h=0.83660102;
			text="\ori\ui\ui_menu_fon_ca.paa";
		};
		delete CA_ARMA2;
		class CA_ARMA2_Ori: RscPicture
		{
			idc=1106;
			colorText[]=
			{
				1,
				1,
				1,
				"0.6+0.4"
			};
			x="(SafeZoneW + SafeZoneX) - (0.1568627*1.5 + 0.04)";
			y="SafeZoneY + 0.00";
			w="0.1568627*1.5";
			h="0.2091503*1.5";
			text="\ori\ui\origins_logo_ca.paa";
		};
	};
	class controls
	{
		delete CA_SinglePlayer;
		class CA_Version;
		class DAYZ_Version: CA_Version
		{
			idc=-1;
			text="Origins Mod v.1.8 Alpha";
			y="(SafeZoneH + SafeZoneY) - (1 - 0.95)";
		};
		class CA_MP: RscShortcutButtonMain2
		{
			y=0.25369999;
			default=0;
		};
		class CA_Options: RscShortcutButtonMain2
		{
			y=0.35451901;
			default=0;
		};
		class CA_PlayerProfile: RscShortcutButtonMain2
		{
			y=0.455421;
			default=0;
		};
		class CA_Expansions: RscShortcutButtonMain2
		{
			y=0.55542099;
			default=0;
		};
		class CA_Exit: RscShortcutButton
		{
			idc=106;
			shortcuts[]=
			{
				"0x00050000+3"
			};
			x=0.17431;
			y=0.87989998;
			w=0.153825;
			h=0.079999998;
			text="$STR_CA_MAIN_QUIT";
			toolTip="$STR_TOOLTIP_MAIN_EXIT";
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			default=1;
			class TextPos
			{
				left=0.039999999;
				top=0.0099999998;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0099999998;
				top=0.0099999998;
				right=0.0099999998;
				bottom=0.0099999998;
			};
		};
	};
};
class RscDisplayMultiplayer: RscStandardDisplay
{
	class controlsbackground
	{
		class CA_TitleBack: RscPicture
		{
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(02/100) * SafeZoneH + SafeZoneY";
			w="(96/100) * SafeZoneW";
			h="(06/100) * SafeZoneH";
			text="\ori\ui\mp_topfon.paa";
		};
		delete MainbackSessions;
		delete CA_New;
		class Origins_Slogo: RscPictureKeepAspect
		{
			idc=1107;
			x="(0.7/100) * SafeZoneW + SafeZoneX";
			y="(0.1/100) * SafeZoneH + SafeZoneY";
			w="(10/100) * SafeZoneW";
			h="(7.5/100) * SafeZoneH";
			text="\ori\ui\origins_logo_ca.paa";
		};
		delete GameSpy;
		class GameSpyOri: RscPictureKeepAspect
		{
			idc=1106;
			x="(82/100) * SafeZoneW + SafeZoneX";
			y="(2.5/100) * SafeZoneH + SafeZoneY";
			w="(15/100) * SafeZoneW";
			h="(5/100) * SafeZoneH";
			text="\ori\ui\gamespy_logo.paa";
		};
		delete CA_Title2Border;
		delete CA_Title2;
		delete ValueSessionsBorder;
		class CA_Title2ori: RscText
		{
			idc=101;
			style=2;
			font="TahomaB";
			sizeEx=0.059065361;
			colorText[]={0,0,0,0.89999998};
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(02/100) * SafeZoneH + SafeZoneY";
			w="(96/100) * SafeZoneW";
			h="(06/100) * SafeZoneH";
		};
		class CA_ServerDetailHost: RscText
		{
			idc=129;
			SizeEx=0.02674;
			font="TahomaB";
			x="(04/100) * SafeZoneW + SafeZoneX";
			y="(78/100) * SafeZoneH + SafeZoneY";
			w="(94/100) * SafeZoneW";
			h="(2/100) * SafeZoneH";
			colorbackground[]={0.1961,0.1451,0.094099998,0.41999999};
		};
		delete CA_TextServerDetailDifficulty;
		class CA_TextServerDetailDifficulty_Ori: CA_ServerDetailHost
		{
			text="$STR_CA_DIFFICULTY";
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(87/100) * SafeZoneH + SafeZoneY";
			w="(15/100) * SafeZoneW";
			h="(2/100) * SafeZoneH";
		};
		delete CA_ServerDetailDifficulty;
		class CA_ServerDetailDifficulty_Ori: CA_ServerDetailHost
		{
			idc=138;
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(90/100) * SafeZoneH + SafeZoneY";
			w="(15/100) * SafeZoneW";
			h="(2/100) * SafeZoneH";
		};
		delete CA_TextServerDetailPlayers;
		class CA_TextServerDetailPlayers_Ori: CA_ServerDetailHost
		{
			text="$STR_DISP_MP_PLAYERS";
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(81/100) * SafeZoneH + SafeZoneY";
			w="(15/100) * SafeZoneW";
			h="(5/100)* SafeZoneH";
			SizeEx=0.029999999;
		};
		delete CA_ServerDetailPlayers;
		class CA_ServerDetailPlayers_Ori: CA_ServerDetailHost
		{
			idc=149;
			style="0x10 + 0x200";
			lineSpacing=0.89999998;
			x="(18/100) * SafeZoneW + SafeZoneX";
			y="(81/100) * SafeZoneH + SafeZoneY";
			w="(80/100) * SafeZoneW";
			h="(12.75/100)* SafeZoneH";
		};
		class CA_ServerDetailPassword: RscPictureKeepAspect
		{
			idc=143;
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(78/100) * SafeZoneH + SafeZoneY";
			w="(2/100) * SafeZoneW";
			h="(2/100) * SafeZoneH";
		};
		class CA_ServerIcon: RscPictureKeepAspect
		{
			idc=111;
			x="(01.5/100) * SafeZoneW + SafeZoneX";
			y="(9/100) * SafeZoneH + SafeZoneY";
			w=0.029999999;
			h=0.029999999;
			colorText[]={1,1,1,1};
		};
		class CA_TypeIcon: CA_ServerIcon
		{
			idc=140;
			x="(39.25/100) * SafeZoneW + SafeZoneX";
		};
		class CA_MissionIcon: CA_ServerIcon
		{
			idc=113;
			x="(45.5/100) * SafeZoneW + SafeZoneX";
		};
		class CA_StateIcon: CA_ServerIcon
		{
			idc=115;
			x="(78.25/100) * SafeZoneW + SafeZoneX";
		};
		class CA_PlayersIcon: CA_ServerIcon
		{
			idc=117;
			x="(85.5/100) * SafeZoneW + SafeZoneX";
		};
		class CA_PingIcon: CA_ServerIcon
		{
			idc=119;
			x="(91.75/100) * SafeZoneW + SafeZoneX";
		};
		class CA_FilterPasswordedServers: RscPictureKeepAspect
		{
			idc=150;
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(75/100) * SafeZoneH + SafeZoneY";
			w="(2/100) * SafeZoneW";
			h="(3/100) * SafeZoneH";
		};
		class CA_FilterFullServers: CA_FilterPasswordedServers
		{
			idc=151;
			x="(5/100) * SafeZoneW + SafeZoneX";
		};
		class CA_ServerBEFilter: CA_FilterPasswordedServers
		{
			idc=154;
			x="(8/100) * SafeZoneW + SafeZoneX";
		};
		class CA_ServerExpansionsFilter: CA_FilterPasswordedServers
		{
			idc=155;
			x="(11/100) * SafeZoneW + SafeZoneX";
		};
		class CA_ServerFilter: RscText
		{
			idc=125;
			SizeEx=0.02674;
			x="(16/100) * SafeZoneW + SafeZoneX";
			y="(75/100) * SafeZoneH + SafeZoneY";
			w="(20/100) * SafeZoneW";
			h="(3/100) * SafeZoneH";
			text="Official Dayz Origins";
			font="TahomaB";
		};
		class CA_TypeFilter: CA_ServerFilter
		{
			idc=152;
			x="(40/100) * SafeZoneW + SafeZoneX";
			w="(8/100) * SafeZoneW";
		};
		class CA_MissionFilter: CA_ServerFilter
		{
			idc=126;
			x="(55/100) * SafeZoneW + SafeZoneX";
		};
		class CA_PlayersFilter: CA_ServerFilter
		{
			idc=127;
			style=2;
			x="(86.5/100) * SafeZoneW + SafeZoneX";
			w="(6/100) * SafeZoneW";
		};
		class CA_PingFilter: CA_ServerFilter
		{
			idc=128;
			x="(93/100) * SafeZoneW + SafeZoneX";
			w="(4/100) * SafeZoneW";
		};
		class CA_Cancel: RscShortcutButton
		{
			idc=2;
			default=0;
			x="(85/100) * SafeZoneW + SafeZoneX";
			y="(95/100) * SafeZoneH + SafeZoneY";
			shortcuts[]=
			{
				"0x00050000+1"
			};
			text="$STR_CA_CANCEL";
			font="TahomaB";
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			h=0.07;
			class TextPos
			{
				left=0.049199998;
				top=0.0049999999;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0040000002;
				top=0.0040000002;
				right=0.0040000002;
				bottom=0.0040000002;
			};
		};
		class CA_Internet_Lan: CA_Cancel
		{
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(95/100) * SafeZoneH + SafeZoneY";
			w=0.28382501;
			default=0;
			class TextPos
			{
				left=0.056000002;
				top=0.0049999999;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			shortcuts[]={};
			idc=122;
		};
		class CA_Refresh: CA_Cancel
		{
			x="(29/100) * SafeZoneW + SafeZoneX";
			y="(95/100) * SafeZoneH + SafeZoneY";
			idc=123;
			default=0;
			text="$STR_DISP_MULTI_REFRESH";
			shortcuts[]=
			{
				"0x00050000+3"
			};
			class TextPos
			{
				left=0.046;
				top=0.0049999999;
				right=0.0049999999;
				bottom=0.0049999999;
			};
		};
		class CA_Join: CA_Cancel
		{
			x="(43/100) * SafeZoneW + SafeZoneX";
			y="(95/100) * SafeZoneH + SafeZoneY";
			idc=105;
			shortcuts[]=
			{
				"0x00050000+0",
				28,
				57,
				156
			};
			default=1;
			text="$STR_CA_MULTI_JOIN";
			class TextPos
			{
				left=0.048;
				top=0.0049999999;
				right=0.0049999999;
				bottom=0.0049999999;
			};
		};
		class CA_BFilter: CA_Cancel
		{
			x="(57/100) * SafeZoneW + SafeZoneX";
			y="(95/100) * SafeZoneH + SafeZoneY";
			idc=124;
			default=0;
			shortcuts[]=
			{
				"0x00050000+2"
			};
			text="$STR_DISP_MULTI_FILTER";
			class TextPos
			{
				left=0.046;
				top=0.0049999999;
				right=0.0049999999;
				bottom=0.0049999999;
			};
		};
		class CA_BRemote: CA_Cancel
		{
			x="(71/100) * SafeZoneW + SafeZoneX";
			y="(95/100) * SafeZoneH + SafeZoneY";
			idc=103;
			default=0;
			shortcuts[]={};
			text="$STR_CA_MULTI_REMOTE";
			class TextPos
			{
				left=0.033;
				top=0.0049999999;
				right=0.0049999999;
				bottom=0.0049999999;
			};
		};
		delete CA_ServerDetailType;
		delete CA_TextServerDetailExpansions;
		delete CA_ServerDetailExpansion;
		delete CA_ServerDetailVersionRequired;
		delete CA_ServerDetailIsland;
		delete CA_TextServerDetailIsland;
		delete CA_TextServerDetailTimeLeft;
		delete CA_ServerDetailTimeLeft;
		delete CA_ServerDetailVersion;
		delete CA_TextServerDetailPlatform;
		delete CA_ServerDetailPlatform;
		delete CA_TextServerDetailountry;
		delete CA_ServerDetailCountry;
		delete CA_TextServerDetailBE;
		delete CA_ServerDetailBE;
		delete CA_TextServerDetailType;
		delete CA_TextServerDetailMission;
		class Mainback: RscPicture
		{
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			colorbackground[]={0,0,0,0};
			text="\ori\ui\fon_co.paa";
		};
	};
	class controls
	{
		delete CA_MissionColumn;
		delete CA_TypeColumn;
		class CA_ServerColumn: RscButtonTextOnly
		{
			idc=112;
			text="$STR_MP_SERVER";
			font="TahomaB";
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(9/100) * SafeZoneH + SafeZoneY";
			w="(75/100) * SafeZoneW";
			h="(2/100) * SafeZoneH";
			colorBackgroundActive[]={1,1,1,0.55000001};
			colorBackgroundDisabled[]={1,1,1,1};
		};
		class CA_StateColumn: CA_ServerColumn
		{
			idc=116;
			text="$STR_MENU_STATUS";
			font="TahomaB";
			x="(78.5/100) * SafeZoneW + SafeZoneX";
			w="(8/100) * SafeZoneW";
		};
		class CA_PlayersColumn: CA_ServerColumn
		{
			idc=118;
			text="$STR_MP_PLAYERS";
			font="TahomaB";
			x="(87/100) * SafeZoneW + SafeZoneX";
			w="(6/100) * SafeZoneW";
		};
		class CA_PingColumn: CA_ServerColumn
		{
			idc=120;
			text="$STR_DISP_MULTI_PING";
			font="TahomaB";
			x="(93/100) * SafeZoneW + SafeZoneX";
			w="(4/100) * SafeZoneW";
		};
		class CA_ValueSessions: RscIGUIListBox
		{
			idc=102;
			style=16;
			shadow=2;
			font="TahomaB";
			colorSelect[]={0.69,0.76899999,0.87099999,1};
			colorPingUnknown[]={0.40000001,0.40000001,0.40000001,1};
			colorPingGood[]={0,1,0,1};
			colorPingPoor[]={1,0.60000002,0,1};
			colorPingBad[]={1,0,0,1};
			rowHeight=0.025;
			colorSelectBackground[]={0,0,0,1};
			colorSelectBackground2[]={0.57999998,0.1147,0.1108,1};
			password="ca\ui\data\ui_server_password_ca.paa";
			locked="ca\ui\data\ui_server_locked_ca.paa";
			version="ca\ui\data\ui_wrong_version_ca.paa";
			none="ca\ui\data\ui_server_connect_ca.paa";
			star="ca\ui\data\ui_mission_done_ca.paa";
			addons="ca\ui\data\ui_server_addons_ca.paa";
			mods="ca\ui\data\ui_server_red_mark_ca.paa";
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(12/100) * SafeZoneH + SafeZoneY";
			w="(96/100) * SafeZoneW";
			h="(61.25/100) * SafeZoneH";
			SizeEx=0.025;
			columns[]={0.81,0,0,0.1,0.050000001,0.039999999};
		};
	};
};
class RscDisplayFilter: RscStandardDisplay
{
	class controlsBackground
	{
		class MainbackFadedOrigins: RscPicture
		{
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			colorText[]={1,1,1,1};
			text="\ori\ui\fon_co.paa";
		};
		delete MainbackFaded1;
		class MainbackFaded1_ori: RscPicture
		{
			idc=1106;
			x=0.045000002;
			y=0.17;
			w=0.627451;
			h=0.83660102;
			colorText[]={1,1,1,0.25};
			text="\ori\ui\ui_menu_fonf_ca.paa";
		};
		delete MainbackFaded2;
		class MainbackFaded2_ori: RscPicture
		{
			idc=1107;
			x=0.092;
			y=0.17;
			w=0.627451;
			h=0.83660102;
			colorText[]={1,1,1,0.5};
			text="\ori\ui\ui_menu_fonf_ca.paa";
		};
		delete Mainback;
		class Mainback_ori: RscPicture
		{
			idc=1104;
			x=0.138;
			y=0.17;
			w=0.627451;
			h=0.83660102;
			text="\ori\ui\ui_menu_fonf_ca.paa";
		};
	};
	class controls
	{
		class CA_FilterTitle: CA_Title
		{
			x=0.18000001;
			y=0.192;
			text="$STR_DISP_FILTER_TITLE";
		};
		class CA_TextServer: RscText
		{
			x=0.159803;
			y="(0.416549 + -3*0.0500)";
			w=0.235296;
			text="$STR_DISP_FILTER_SERVER";
		};
		class CA_ValueServer: RscEdit
		{
			idc=101;
			x=0.400534;
			y="(0.416549 + -3*0.0500)";
			w=0.30000001;
		};
		class CA_TextMaxPing: CA_TextServer
		{
			x=0.159803;
			y="(0.416549 + -2*0.0500)";
			text="$STR_DISP_FILTER_MAXPING";
		};
		class CA_ValueMaxPing: CA_ValueServer
		{
			idc=103;
			x=0.400534;
			y="(0.416549 + -2*0.0500)";
			w=0.1;
		};
		class CA_TextMinPlayers: CA_TextServer
		{
			x=0.159803;
			y="(0.416549 + -1*0.0500)";
			text="$STR_DISP_FILTER_MINPLAYERS";
		};
		class CA_ValueMinPlayers: CA_ValueMaxPing
		{
			idc=104;
			x=0.400534;
			y="(0.416549 + -1*0.0500)";
		};
		class CA_TextMaxPlayers: CA_TextServer
		{
			x=0.159803;
			y="(0.416549 + 0*0.0500)";
			text="$STR_DISP_FILTER_MAXPLAYERS";
		};
		class CA_ValueMaxPlayers: CA_ValueMaxPing
		{
			idc=105;
			x=0.400534;
			y="(0.416549 + 0*0.0500)";
		};
		class CA_TextMission: CA_TextServer
		{
			x=0.159803;
			y="(0.416549 + 1*0.0500)";
			text="$STR_DISP_FILTER_MISSION";
		};
		class ValueMission: CA_ValueServer
		{
			idc=102;
			x=0.400534;
			y="(0.416549 + 1*0.0500)";
		};
		class CA_TextFilterType: CA_TextServer
		{
			x=0.159803;
			y="(0.416549 + 2*0.0500)";
			text="$STR_DISP_ARCGRP_TYPE";
		};
		class CA_FilterType: RscCombo
		{
			idc=109;
			x=0.400534;
			y="(0.416549 + 2*0.0500)";
			w=0.30000001;
		};
		class CA_TextExpansionsType: CA_TextServer
		{
			x=0.159803;
			y="(0.416549 + 3*0.0500)";
			text="$STR_DISP_EXPANSIONS";
		};
		class CA_FilterExpansions: RscXListBox
		{
			idc=111;
			x=0.400534;
			y="(0.416549 + 3*0.0500)";
			w=0.30000001;
		};
		class CA_TextHideFull: CA_TextServer
		{
			x=0.159803;
			y="(0.416549 + 4*0.0500)";
			text="$STR_FILTER_FULL_TEXT";
		};
		class CA_FullServers: RscXListBox
		{
			idc=106;
			x=0.400534;
			y="(0.416549 + 4*0.0500)";
			w=0.30000001;
		};
		class CA_TextPassworded: CA_TextServer
		{
			x=0.159803;
			y="(0.416549 + 5*0.0500)";
			text="$STR_FILTER_PASSWORDED_TEXT";
		};
		class CA_PasswordedServers: CA_FullServers
		{
			idc=107;
			x=0.400534;
			y="(0.416549 + 5*0.0500)";
		};
		class CA_TextBattlEye: CA_TextServer
		{
			x=0.159803;
			y="(0.416549 + 6*0.0500)";
			text="$STR_FILTER_BATTLEYE_TEXT";
		};
		class CA_BEServers: CA_FullServers
		{
			idc=110;
			x=0.400534;
			y="(0.416549 + 6*0.0500)";
			w=0.30000001;
		};
		class CA_Filter_Default: RscShortcutButton
		{
			idc=108;
			shortcuts[]=
			{
				"0x00050000+2"
			};
			x=0.33950001;
			y=0.76249999;
			text="$STR_DISP_DEFAULT";
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			h=0.07;
			class TextPos
			{
				left=0.039999999;
				top=0.0070000002;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0099999998;
				top=0.0099999998;
				right=0.0099999998;
				bottom=0.0099999998;
			};
		};
		class CA_Filter_Ok: RscShortcutButton
		{
			idc=1;
			shortcuts[]=
			{
				"0x00050000+0",
				28,
				57,
				156
			};
			x=0.52499998;
			y=0.76249999;
			text="$STR_DISP_OK";
			default=1;
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			h=0.07;
			class TextPos
			{
				left=0.059999999;
				top=0.0070000002;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0099999998;
				top=0.0099999998;
				right=0.0099999998;
				bottom=0.0099999998;
			};
		};
		class CA_Filter_Cancel: RscShortcutButton
		{
			idc=2;
			shortcuts[]=
			{
				"0x00050000+1"
			};
			x=0.15700001;
			y=0.76249999;
			text="$STR_DISP_CANCEL";
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			h=0.07;
			class TextPos
			{
				left=0.050000001;
				top=0.0070000002;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0099999998;
				top=0.0099999998;
				right=0.0099999998;
				bottom=0.0099999998;
			};
		};
	};
};
class RscDisplayIPAddress: RscStandardDisplay
{
	class controlsBackground
	{
		class MainbackFadedOrigins: RscPicture
		{
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			colorText[]={1,1,1,1};
			text="\ori\ui\fon_co.paa";
		};
		delete MainbackFaded1;
		class MainbackFaded1_ori: RscPicture
		{
			idc=1106;
			x=0.045000002;
			y=0.17;
			w=0.627451;
			h=0.83660102;
			colorText[]={1,1,1,0.25};
			text="\ori\ui\ui_menu_fon_ca.paa";
		};
		delete MainbackFaded2;
		class MainbackFaded2_ori: RscPicture
		{
			idc=1107;
			x=0.092;
			y=0.17;
			w=0.627451;
			h=0.83660102;
			colorText[]={1,1,1,0.5};
			text="\ori\ui\ui_menu_fon_ca.paa";
		};
		delete Mainback;
		class Mainback_ori: RscPicture
		{
			idc=1104;
			x=0.138;
			y=0.17;
			w=0.627451;
			h=0.83660102;
			text="\ori\ui\ui_menu_fon_ca.paa";
		};
	};
	class controls
	{
		class CA_IPTitle: CA_Title
		{
			x=0.18000001;
			y=0.192;
			text="$STR_DISP_IP_TITLE";
		};
		class CA_TextAddress: RscText
		{
			x=0.160706;
			y=0.27962801;
			w=0.169119;
			text="$STR_DISP_IP_ADDRESS";
		};
		class CA_ValueAddress: RscEdit
		{
			idc=101;
			x=0.26177999;
			y=0.27962801;
			w=0.18000001;
			h=0.039216001;
		};
		class CA_TextPort: CA_TextAddress
		{
			y=0.328648;
			text="$STR_DISP_IP_PORT";
		};
		class CA_ValuePort: CA_ValueAddress
		{
			idc=102;
			y=0.328648;
			w=0.110295;
		};
		class ButtonContinue: RscShortcutButton
		{
			idc=1;
			default=1;
			shortcuts[]=
			{
				"0x00050000+0",
				28,
				57,
				156
			};
			x=0.26177999;
			y=0.39864799;
			text="$STR_DISP_OK";
			w=0.153825;
			h=0.07;
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			class TextPos
			{
				left=0.050000001;
				top=0.0049999999;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0099999998;
				top=0.0099999998;
				right=0.0099999998;
				bottom=0.0099999998;
			};
		};
		class ButtonCancel: RscShortcutButton
		{
			idc=2;
			default=0;
			shortcuts[]=
			{
				"0x00050000+1"
			};
			x=0.27000001;
			y=0.88249999;
			text="$STR_DISP_BACK";
			h=0.07;
			w=0.153825;
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			class TextPos
			{
				left=0.039999999;
				top=0.0049999999;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0099999998;
				top=0.0099999998;
				right=0.0099999998;
				bottom=0.0099999998;
			};
		};
	};
};
class dStronghold
{
	class RscPictureK
	{
		type=0;
		style=48;
		colorText[]={0.75,0.75,0.75,1};
		colorBackground[]={0,0,0,0};
		font="Bitstream";
		sizeEx=0.025;
		soundClick[]=
		{
			"",
			0.2,
			1
		};
		soundEnter[]=
		{
			"",
			0.2,
			1
		};
		soundEscape[]=
		{
			"",
			0.2,
			1
		};
		soundPush[]=
		{
			"",
			0.2,
			1
		};
		w=0.27500001;
		h=0.039999999;
		text="";
	};
	class RscButtonK
	{
		type=1;
		style=2;
		colorText[]={0,0,0,1};
		font="TahomaB";
		sizeEx=0.050000001;
		soundPush[]=
		{
			"",
			0.2,
			1
		};
		soundClick[]=
		{
			"\ca\ui\data\sound\new1",
			0.2,
			1
		};
		soundEscape[]=
		{
			"\ca\ui\data\sound\new1",
			0.2,
			1
		};
		default=0;
		text="";
		action="";
		colorActive[]={0,0,0,0};
		colorDisabled[]={0,0,0,0.1};
		colorBackground[]={0,0,0,0.30000001};
		colorBackgroundActive[]={0,0,0,0.40000001};
		colorBackgroundDisabled[]={0,0,0,0.30000001};
		colorFocused[]={0.83999997,1,0.55000001,1};
		colorShadow[]={1,1,1,0.1};
		colorBorder[]={0,0,0,0.1};
		offsetX=0;
		offsetY=0;
		offsetPressedX=0;
		offsetPressedY=0;
		borderSize=0;
		soundEnter[]=
		{
			"",
			0.15000001,
			1
		};
		period=0;
	};
	class Ori_Button
	{
		type=16;
		style=0;
		default=0;
		x=0.1;
		y=0.1;
		w=0.183825;
		h=0.104575;
		color[]={0.54299998,0.57419997,0.4102,1};
		color2[]={0.94999999,0.94999999,0.94999999,1};
		colorBackground[]={1,1,1,1};
		colorbackground2[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.25};
		periodFocus=1.2;
		periodOver=0.80000001;
		class HitZone
		{
			left=0.0040000002;
			top=0.0089999996;
			right=0.0040000002;
			bottom=0.0089999996;
		};
		class ShortcutPos
		{
			left=0.0145;
			top=0.026000001;
			w=0.039215699;
			h=0.052287601;
		};
		class TextPos
		{
			left=0.0049999999;
			top=0.0099999998;
			right=0.0049999999;
			bottom=0.0049999999;
		};
		textureNoShortcut="";
		animTextureNormal="\ori\ui\knopka_normal.paa";
		animTextureDisabled="\ori\ui\knopka_normal.paa";
		animTextureOver="\ori\ui\knopka_hover.paa";
		animTextureFocused="\ori\ui\knopka_hover.paa";
		animTexturePressed="\ori\ui\knopka_press.paa";
		animTextureDefault="\ori\ui\knopka_normal.paa";
		period=0.40000001;
		font="Zeppelin32";
		size=0.050000001;
		sizeEx=0.050000001;
		text="";
		soundEnter[]=
		{
			"",
			0.090000004,
			1
		};
		soundPush[]=
		{
			"",
			0.090000004,
			1
		};
		soundClick[]=
		{
			"",
			0.07,
			1
		};
		soundEscape[]=
		{
			"",
			0.090000004,
			1
		};
		action="";
		toolTip="";
		class Attributes
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
		class AttributesImage
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
	};
	class RscListBoxK
	{
		type=5;
		canDrag=0;
		style="0 + 0x10";
		font="Zeppelin32";
		sizeEx=0.042210001;
		rowHeight=0.029999999;
		colorBackground[]={0.80000001,0.80000001,1,0.69999999};
		colorText[]={1,1,1,0.75};
		colorScrollbar[]={0.94999999,0.94999999,0.94999999,1};
		colorSelect[]={0.94999999,0.94999999,0.94999999,1};
		colorSelect2[]={0.94999999,0.94999999,0.94999999,1};
		colorSelectBackground[]={0.60000002,0.83920002,0.47060001,1};
		colorSelectBackground2[]={0.60000002,0.83920002,0.47060001,1};
		columns[]={0.1,0.69999999,0.1,0.1};
		period=0;
		maxHistoryDelay=1;
		autoScrollSpeed=-1;
		autoScrollDelay=5;
		autoScrollRewind=0;
		soundSelect[]=
		{
			"\ca\ui\data\sound\new1",
			0.090000004,
			1
		};
		class ScrollBar
		{
			color[]={1,1,1,0.60000002};
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.30000001};
			thumb="\ca\ui\data\igui_scrollbar_thumb_ca.paa";
			arrowFull="\ca\ui\data\igui_arrow_top_active_ca.paa";
			arrowEmpty="\ca\ui\data\igui_arrow_top_ca.paa";
			border="\ca\ui\data\igui_border_scroll_ca.paa";
		};
	};
	class RscTextK
	{
		type=0;
		style=2;
		colorText[]={0,1,0.5,1};
		font="TahomaB";
		sizeEx=0.079999998;
		x=0;
		y=0;
		w=0.1;
		h=0.2;
	};
	name="dStronghold";
	movingEnable=0;
	idd=10001;
	controlsBackground[]=
	{
		"bg"
	};
	objects[]={};
	class controls
	{
		class listboxA: RscListBoxK
		{
			idc=10002;
			x="0.247 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.165 * safezoneW";
			h="0.181 * safezoneH";
		};
		class listboxA2: RscListBoxK
		{
			idc=10003;
			x="0.45 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.165 * safezoneW";
			h="0.181 * safezoneH";
		};
		class but_del: Ori_Button
		{
			idc=-1;
			x="0.245 * safezoneW + safezoneX";
			y="0.478 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.04 * safezoneH";
			size=0.045000002;
			sizeEx=0.045000002;
			text="REMOVE";
			action="_index = lbCurSel 10002; if(_index > -1) then { selected_sl = []; selected_sl_n = []; selected_sl set [count selected_sl, playersID_arr select _index]; selected_sl_n set [count selected_sl_n, playersID_arr_n select _index]; playersID_arr = playersID_arr - selected_sl; playersID_arr_n = playersID_arr_n - selected_sl_n; playersID_arr2 set [count playersID_arr2, selected_sl select 0]; playersID_arr2_n set [count playersID_arr2_n, selected_sl_n select 0]; _text = lbText [10002, _index]; lbAdd [10003, _text]; lbDelete [10002, _index]; selected_sl = []; selected_sl_n = []; };";
		};
		class but_add: Ori_Button
		{
			idc=-1;
			x="0.45 * safezoneW + safezoneX";
			y="0.478 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.04 * safezoneH";
			size=0.045000002;
			sizeEx=0.045000002;
			text="ADD";
			action="_index = lbCurSel 10003; if(_index > -1) then { selected_sl = []; selected_sl_n = []; selected_sl set [count selected_sl, playersID_arr2 select _index]; selected_sl_n set [count selected_sl_n, playersID_arr2_n select _index]; hint format[""%1\n%2\n"",selected_sl,selected_sl_n]; playersID_arr2 = playersID_arr2 - selected_sl; playersID_arr2_n = playersID_arr2_n - selected_sl_n; playersID_arr set [count playersID_arr, selected_sl select 0]; playersID_arr_n set [count playersID_arr_n, selected_sl_n select 0]; _text = lbText [10003, _index];  lbAdd [10002, _text]; lbDelete [10003, _index]; selected_sl = []; selected_sl_n = []; };";
		};
		class but_ok: Ori_Button
		{
			idc=-1;
			x="0.54 * safezoneW + safezoneX";
			y="0.54 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.04 * safezoneH";
			size=0.045000002;
			sizeEx=0.045000002;
			text="OK";
			action="_vsego = count playersID_arr; if(_vsego > 3) then { NaDobavku = [] + playersID_arr; ctrlSetText [10004, ""OK""]; closeDialog 0; } else { NaDobavku = []; ctrlSetText [10004, ""Minimum 4 people""]; };";
		};
		class zagolvok: RscTextK
		{
			idc=-1;
			x="0.305 * safezoneW + safezoneX";
			y="0.20 * safezoneH + safezoneY";
			w="0.27 * safezoneW";
			h="0.04 * safezoneH";
			size=0.064999998;
			sizeEx="0.065 * (safezoneW + safezoneX)";
			text="Stronghold Team";
			colorText[]={0,0,0,0.89999998};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok_team: RscTextK
		{
			idc=-1;
			x="0.24 * safezoneW + safezoneX";
			y="0.24 * safezoneH + safezoneY";
			w="0.17 * safezoneW";
			h="0.04 * safezoneH";
			text="Members";
			size=0.045000002;
			sizeEx=0.045000002;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok_new: RscTextK
		{
			idc=-1;
			x="0.45 * safezoneW + safezoneX";
			y="0.24 * safezoneH + safezoneY";
			w="0.17 * safezoneW";
			h="0.04 * safezoneH";
			text="New members";
			size=0.045000002;
			sizeEx=0.045000002;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok_error: RscTextK
		{
			idc=10004;
			x="0.305 * safezoneW + safezoneX";
			y="0.53 * safezoneH + safezoneY";
			w="0.17 * safezoneW";
			h="0.04 * safezoneH";
			text="";
			size=0.035;
			sizeEx=0.035;
			colorText[]={1,1,1,0.75};
			colorBackground[]={0,0.12800001,0,0};
		};
	};
	class bg: RscPictureK
	{
		idc=-1;
		x="0.20 * safezoneW + safezoneX";
		y="0.20 * safezoneH + safezoneY";
		w="0.47 * safezoneW";
		h="0.40 * safezoneH";
		text="\ori\ui\fon.paa";
		colorBackground[]={0,0.12800001,0,1};
	};
};
class KeypadHouse
{
	idd=20900;
	movingEnable=0;
	controlsBackground[]={};
	controls[]=
	{
		"B1",
		"B2",
		"B3",
		"B4",
		"B5",
		"B6",
		"B7",
		"B8",
		"B9",
		"B0",
		"BEnter",
		"BAbort",
		"KeypadImage",
		"NumberDisplay"
	};
	objects[]={};
	class B1
	{
		idc=-1;
		type=1;
		style=2;
		moving=0;
		x=0.44999999;
		y=0.46000001;
		h=0.059999999;
		w=0.039999999;
		font="Zeppelin32";
		sizeEx=0.050000001;
		action="CODEINPUT set [count CODEINPUT, 1]; if ((count CODEINPUT) ==7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 1];};";
		text="";
		default=0;
		colorText[]={0,0,0,1};
		colorFocused[]={0.1,0.1,0.1,0.1};
		colorShadow[]={0,0,0,0};
		colorBorder[]={0.5,0.5,0.5,0};
		colorBackground[]={0.69999999,0.69999999,0.69999999,1};
		colorBackgroundActive[]={0.1,0.1,0.1,0.30000001};
		colorDisabled[]={1,0,0,1};
		colorBackgroundDisabled[]={0.5,0.5,0.5,0};
		borderSize=0.015;
		offsetX=0.0049999999;
		offsetY=0.0049999999;
		offsetPressedX=0.0020000001;
		offsetPressedY=0.0020000001;
		soundEnter[]=
		{
			"",
			0,
			1
		};
		soundPush[]=
		{
			"",
			0,
			1
		};
		soundClick[]=
		{
			"",
			0,
			1
		};
		soundEscape[]=
		{
			"",
			0,
			1
		};
	};
	class B2: B1
	{
		x=0.51999998;
		text="";
		action="CODEINPUT set [count CODEINPUT, 2]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 2];};";
	};
	class B3: B1
	{
		x=0.58999997;
		text="";
		action="CODEINPUT set [count CODEINPUT, 3]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 3];};";
	};
	class B4: B1
	{
		y=0.56999999;
		text="";
		action="CODEINPUT set [count CODEINPUT, 4]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 4];};";
	};
	class B5: B4
	{
		x=0.51999998;
		text="";
		action="CODEINPUT set [count CODEINPUT, 5]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 5];};";
	};
	class B6: B4
	{
		x=0.58999997;
		text="";
		action="CODEINPUT set [count CODEINPUT, 6]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 6];};";
	};
	class B7: B1
	{
		y=0.67000002;
		text="";
		action="CODEINPUT set [count CODEINPUT, 7]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 7];};";
	};
	class B8: B7
	{
		x=0.51999998;
		text="";
		action="CODEINPUT set [count CODEINPUT, 8]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 8];};";
	};
	class B9: B7
	{
		x=0.58999997;
		text="";
		action="CODEINPUT set [count CODEINPUT, 9]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 9];};";
	};
	class B0: B8
	{
		y=0.76999998;
		text="";
		action="CODEINPUT set [count CODEINPUT, 0]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = []; } else { ctrlSetText [1099, (ctrlText 1099) + str 0]; };";
	};
	class BEnter: B9
	{
		y=0.76999998;
		text="";
		action="CODE = ctrlText (findDisplay 20900 displayCtrl 1099); closeDialog 0;";
	};
	class BAbort: B7
	{
		y=0.76999998;
		text="";
		action="CODE = """"; CODEINPUT = []; closeDialog 0;";
	};
	class KeypadImage
	{
		idc=-1;
		type=0;
		style=48;
		colorText[]={};
		colorBackground[]={};
		font="Zeppelin32";
		sizeEx=0.023;
		x=0.34999999;
		y=0.2;
		w=0.40000001;
		h=0.80000001;
		text="\ori\base_buildings\data\pin_machine_co.paa";
	};
	class NumberDisplay
	{
		idc=1099;
		type=0;
		style=0;
		colorText[]={1,0,0,1};
		colorBackground[]={1,1,1,0};
		font="TahomaB";
		sizeEx=0.071999997;
		x=0.44;
		y=0.28;
		w=0.20999999;
		h=0.1;
		text="";
	};
};
class ZadanieOrigins
{
	class RscPictureZ
	{
		type=0;
		style=48;
		colorText[]={0.75,0.75,0.75,1};
		colorBackground[]={0,0,0,0};
		font="Bitstream";
		sizeEx=0.025;
		soundClick[]=
		{
			"",
			0.2,
			1
		};
		soundEnter[]=
		{
			"",
			0.2,
			1
		};
		soundEscape[]=
		{
			"",
			0.2,
			1
		};
		soundPush[]=
		{
			"",
			0.2,
			1
		};
		w=0.27500001;
		h=0.039999999;
		text="";
	};
	class Ori_B_Zadanie
	{
		type=16;
		style=0;
		default=0;
		x=0.1;
		y=0.1;
		w=0.183825;
		h=0.104575;
		color[]={0.54299998,0.57419997,0.4102,1};
		color2[]={0.94999999,0.94999999,0.94999999,1};
		colorBackground[]={1,1,1,1};
		colorbackground2[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.25};
		periodFocus=1.2;
		periodOver=0.80000001;
		class HitZone
		{
			left=0.0040000002;
			top=0.0089999996;
			right=0.0040000002;
			bottom=0.0089999996;
		};
		class ShortcutPos
		{
			left=0.0145;
			top=0.026000001;
			w=0.039215699;
			h=0.052287601;
		};
		class TextPos
		{
			left=0.0049999999;
			top=0.0099999998;
			right=0.0049999999;
			bottom=0.0049999999;
		};
		textureNoShortcut="";
		animTextureNormal="\ori\ui\power_normal_ca.paa";
		animTextureDisabled="\ori\ui\power_normal_ca.paa";
		animTextureOver="\ori\ui\power_hover_ca.paa";
		animTextureFocused="\ori\ui\power_hover_ca.paa";
		animTexturePressed="\ori\ui\power_down_ca.paa";
		animTextureDefault="\ori\ui\power_normal_ca.paa";
		period=0.40000001;
		font="Zeppelin32";
		size=0.050000001;
		sizeEx=0.050000001;
		text="";
		soundEnter[]=
		{
			"",
			0.090000004,
			1
		};
		soundPush[]=
		{
			"",
			0.090000004,
			1
		};
		soundClick[]=
		{
			"",
			0.07,
			1
		};
		soundEscape[]=
		{
			"",
			0.090000004,
			1
		};
		action="";
		toolTip="";
		class Attributes
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
		class AttributesImage
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
	};
	class RscListBoxZ
	{
		type=5;
		canDrag=0;
		style="0 + 0x10";
		font="Zeppelin32";
		sizeEx=0.03221;
		rowHeight=0.029999999;
		colorBackground[]={0.80000001,0.80000001,1,0.30000001};
		color[]={1,1,1,1};
		colorText[]={1,1,1,0.64999998};
		colorScrollbar[]={0.94999999,0.94999999,0.94999999,1};
		colorSelect[]={0.94999999,0.94999999,0.94999999,1};
		colorSelect2[]={0.94999999,0.94999999,0.94999999,1};
		colorSelectBackground[]={0.60000002,0.83920002,0.47060001,0.30000001};
		colorSelectBackground2[]={0.60000002,0.83920002,0.47060001,0.30000001};
		columns[]={0.02,0.77999997,0.1};
		period=0;
		maxHistoryDelay=1;
		autoScrollSpeed=-1;
		autoScrollDelay=5;
		autoScrollRewind=0;
		soundSelect[]=
		{
			"\ca\ui\data\sound\new1",
			0.090000004,
			1
		};
		class ScrollBar
		{
			color[]={1,1,1,0.60000002};
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.30000001};
			thumb="\ca\ui\data\igui_scrollbar_thumb_ca.paa";
			arrowFull="\ca\ui\data\igui_arrow_top_active_ca.paa";
			arrowEmpty="\ca\ui\data\igui_arrow_top_ca.paa";
			border="\ca\ui\data\igui_border_scroll_ca.paa";
		};
	};
	class RscTextZ
	{
		type=0;
		style=2;
		colorText[]={0,1,0.5,1};
		colorBackground[]={1,0,0,0.5};
		font="TahomaB";
		sizeEx=0.050000001;
		x=0;
		y=0;
		w=0.1;
		h=0.2;
	};
	class RscTextZ2
	{
		type=0;
		idc=-1;
		access=0;
		lineSpacing=1;
		style="16+0x200";
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,0.75};
		font="Zeppelin32";
		size=0.028999999;
		sizeEx=0.028000001;
		text="";
		class ScrollBar
		{
			color[]={1,1,1,0.60000002};
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.30000001};
			thumb="\ca\ui\data\igui_scrollbar_thumb_ca.paa";
			arrowFull="\ca\ui\data\igui_arrow_top_active_ca.paa";
			arrowEmpty="\ca\ui\data\igui_arrow_top_ca.paa";
			border="\ca\ui\data\igui_border_scroll_ca.paa";
		};
	};
	movingEnable=0;
	name="ZadanieOrigins";
	idd=10055;
	enableSimulation=1;
	controlsBackground[]=
	{
		"bg"
	};
	objects[]={};
	class controls
	{
		class listZadaniy: RscListBoxZ
		{
			idc=10056;
			x="0.165 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.20 * safezoneW";
			h="0.181 * safezoneH";
		};
		class TextZadaniy: RscTextZ2
		{
			idc=10057;
			x="0.364 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.365 * safezoneW";
			h="0.419 * safezoneH";
			text="tut text";
		};
		class ZakrZadan: Ori_B_Zadanie
		{
			idc=-1;
			x="0.64 * safezoneW + safezoneX";
			y="0.16 * safezoneH + safezoneY";
			w="0.10 * safezoneW";
			h="0.03 * safezoneH";
			size=0.045000002;
			sizeEx=0.045000002;
			text="";
			action="closeDialog 0;";
		};
		class zagolvok_zadanie: RscTextZ
		{
			idc=-1;
			x="0.184 * safezoneW + safezoneX";
			y="0.24 * safezoneH + safezoneY";
			w="0.17 * safezoneW";
			h="0.04 * safezoneH";
			text="Curent Missions:";
			size=0.045000002;
			sizeEx=0.045000002;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok_descr: RscTextZ
		{
			idc=-1;
			x="0.45 * safezoneW + safezoneX";
			y="0.24 * safezoneH + safezoneY";
			w="0.17 * safezoneW";
			h="0.04 * safezoneH";
			text="Description:";
			size=0.045000002;
			sizeEx=0.045000002;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
	};
	class bg: RscPictureZ
	{
		idc=-1;
		x="0.15 * safezoneW + safezoneX";
		y="0.15 * safezoneH + safezoneY";
		w="0.6 * safezoneW";
		h="0.57 * safezoneH";
		text="\ori\ui\pager_ca.paa";
		colorBackground[]={0,0.12800001,0,1};
	};
};
class OriginsExchange5
{
	class RscPictureZ
	{
		type=0;
		style=48;
		colorText[]={0.75,0.75,0.75,1};
		colorBackground[]={0,0,0,0};
		font="Bitstream";
		sizeEx=0.025;
		soundClick[]=
		{
			"",
			0.2,
			1
		};
		soundEnter[]=
		{
			"",
			0.2,
			1
		};
		soundEscape[]=
		{
			"",
			0.2,
			1
		};
		soundPush[]=
		{
			"",
			0.2,
			1
		};
		w=0.27500001;
		h=0.039999999;
		text="";
	};
	class Ori_B_Zadanie
	{
		type=16;
		style=0;
		default=0;
		x=0.1;
		y=0.1;
		w=0.183825;
		h=0.104575;
		color[]={0.54299998,0.57419997,0.4102,1};
		color2[]={0.94999999,0.94999999,0.94999999,1};
		colorBackground[]={1,1,1,1};
		colorbackground2[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.25};
		periodFocus=1.2;
		periodOver=0.80000001;
		class HitZone
		{
			left=0.0040000002;
			top=0.0089999996;
			right=0.0040000002;
			bottom=0.0089999996;
		};
		class ShortcutPos
		{
			left=0.0145;
			top=0.026000001;
			w=0.039215699;
			h=0.052287601;
		};
		class TextPos
		{
			left=0.0049999999;
			top=0.0099999998;
			right=0.0049999999;
			bottom=0.0049999999;
		};
		textureNoShortcut="";
		animTextureNormal="\ori\ui\power_normal_ca.paa";
		animTextureDisabled="\ori\ui\power_normal_ca.paa";
		animTextureOver="\ori\ui\power_hover_ca.paa";
		animTextureFocused="\ori\ui\power_hover_ca.paa";
		animTexturePressed="\ori\ui\power_down_ca.paa";
		animTextureDefault="\ori\ui\power_normal_ca.paa";
		period=0.40000001;
		font="Zeppelin32";
		size=0.050000001;
		sizeEx=0.050000001;
		text="";
		soundEnter[]=
		{
			"",
			0.090000004,
			1
		};
		soundPush[]=
		{
			"",
			0.090000004,
			1
		};
		soundClick[]=
		{
			"",
			0.07,
			1
		};
		soundEscape[]=
		{
			"",
			0.090000004,
			1
		};
		action="";
		toolTip="";
		class Attributes
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
		class AttributesImage
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
	};
	class Ori_Button
	{
		type=16;
		idc=-1;
		style=0;
		default=0;
		x=0.1;
		y=0.1;
		w=0.183825;
		h=0.104575;
		color[]={0.54299998,0.57419997,0.4102,1};
		color2[]={0.94999999,0.94999999,0.94999999,1};
		colorBackground[]={1,1,1,1};
		colorbackground2[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.25};
		periodFocus=1.2;
		periodOver=0.80000001;
		class HitZone
		{
			left=0.015;
			top=0.001;
			right=0.045000002;
			bottom=0.001;
		};
		class ShortcutPos
		{
			left=0.0145;
			top=0.026000001;
			w=0.039215699;
			h=0.052287601;
		};
		class TextPos
		{
			left=0.0049999999;
			top=0.0099999998;
			right=0.0049999999;
			bottom=0.0049999999;
		};
		textureNoShortcut="";
		animTextureNormal="";
		animTextureDisabled="";
		animTextureOver="";
		animTextureFocused="";
		animTexturePressed="";
		animTextureDefault="";
		period=0.40000001;
		font="Zeppelin32";
		size=0.039999999;
		sizeEx=0.039999999;
		text="";
		soundEnter[]=
		{
			"",
			0.090000004,
			1
		};
		soundPush[]=
		{
			"",
			0.090000004,
			1
		};
		soundClick[]=
		{
			"",
			0.07,
			1
		};
		soundEscape[]=
		{
			"",
			0.090000004,
			1
		};
		action="";
		toolTip="";
		class Attributes
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
		class AttributesImage
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="left";
			shadow=1;
		};
	};
	class RscListBoxZ
	{
		type=5;
		canDrag=0;
		style="0 + 0x10";
		font="Zeppelin32";
		sizeEx=0.03221;
		rowHeight=0.029999999;
		colorBackground[]={0.80000001,0.80000001,1,0.30000001};
		color[]={1,1,1,1};
		colorText[]={1,1,1,0.64999998};
		colorScrollbar[]={0.94999999,0.94999999,0.94999999,1};
		colorSelect[]={0.94999999,0.94999999,0.94999999,1};
		colorSelect2[]={0.94999999,0.94999999,0.94999999,1};
		colorSelectBackground[]={0.60000002,0.83920002,0.47060001,0.30000001};
		colorSelectBackground2[]={0.60000002,0.83920002,0.47060001,0.30000001};
		columns[]={0.02,0.77999997,0.1};
		period=0;
		maxHistoryDelay=1;
		autoScrollSpeed=-1;
		autoScrollDelay=5;
		autoScrollRewind=0;
		soundSelect[]=
		{
			"\ca\ui\data\sound\new1",
			0.090000004,
			1
		};
		class ScrollBar
		{
			color[]={1,1,1,0.60000002};
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.30000001};
			thumb="\ca\ui\data\igui_scrollbar_thumb_ca.paa";
			arrowFull="\ca\ui\data\igui_arrow_top_active_ca.paa";
			arrowEmpty="\ca\ui\data\igui_arrow_top_ca.paa";
			border="\ca\ui\data\igui_border_scroll_ca.paa";
		};
	};
	class RscTextZ
	{
		type=0;
		style=2;
		colorText[]={0,1,0.5,1};
		colorBackground[]={1,0,0,0.5};
		font="TahomaB";
		sizeEx=0.050000001;
		x=0;
		y=0;
		w=0.1;
		h=0.2;
	};
	class RscTextZ2
	{
		type=0;
		idc=-1;
		access=0;
		lineSpacing=1;
		style="16+0x200";
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,0.75};
		font="Zeppelin32";
		size=0.028999999;
		sizeEx=0.028000001;
		text="";
		class ScrollBar
		{
			color[]={1,1,1,0.60000002};
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.30000001};
			thumb="\ca\ui\data\igui_scrollbar_thumb_ca.paa";
			arrowFull="\ca\ui\data\igui_arrow_top_active_ca.paa";
			arrowEmpty="\ca\ui\data\igui_arrow_top_ca.paa";
			border="\ca\ui\data\igui_border_scroll_ca.paa";
		};
	};
	movingEnable=1;
	name="OriginsExchange5";
	idd=72055;
	enableSimulation=1;
	controlsBackground[]=
	{
		"bg",
		"TraderIcon",
		"value1bg",
		"value2bg",
		"value1",
		"value2"
	};
	enableDisplay=1;
	class controls
	{
		class listItems: RscListBoxZ
		{
			idc=72056;
			x="0.287 * safezoneW + safezoneX";
			y="0.12 * safezoneH + safezoneY";
			w="0.155 * safezoneW";
			h="0.34 * safezoneH";
		};
		class listItems2: RscListBoxZ
		{
			idc=72058;
			x="0.564 * safezoneW + safezoneX";
			y="0.125 * safezoneH + safezoneY";
			w="0.155 * safezoneW";
			h="0.34 * safezoneH";
		};
		class listItems3: RscListBoxZ
		{
			idc=72057;
			x="0.286 * safezoneW + safezoneX";
			y="0.545 * safezoneH + safezoneY";
			w="0.155 * safezoneW";
			h="0.34 * safezoneH";
		};
		class listItems4: RscListBoxZ
		{
			idc=72059;
			x="0.564 * safezoneW + safezoneX";
			y="0.545 * safezoneH + safezoneY";
			w="0.155 * safezoneW";
			h="0.34 * safezoneH";
		};
		class zagolvok1: RscTextZ
		{
			idc=-1;
			x="0.275 * safezoneW + safezoneX";
			y="0.07 * safezoneH + safezoneY";
			w="0.17 * safezoneW";
			h="0.04 * safezoneH";
			text="Your items:";
			size=0.045000002;
			sizeEx=0.045000002;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok2: RscTextZ
		{
			idc=-1;
			x="0.56 * safezoneW + safezoneX";
			y="0.075 * safezoneH + safezoneY";
			w="0.17 * safezoneW";
			h="0.04 * safezoneH";
			text="Trader's items:";
			size=0.045000002;
			sizeEx=0.045000002;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok3: RscTextZ
		{
			idc=-1;
			x="0.28 * safezoneW + safezoneX";
			y="0.9 * safezoneH + safezoneY";
			w="0.17 * safezoneW";
			h="0.04 * safezoneH";
			text="You change:";
			size=0.045000002;
			sizeEx=0.045000002;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok4: RscTextZ
		{
			idc=-1;
			x="0.56 * safezoneW + safezoneX";
			y="0.9 * safezoneH + safezoneY";
			w="0.17 * safezoneW";
			h="0.04 * safezoneH";
			text="Trader changes:";
			size=0.045000002;
			sizeEx=0.045000002;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok5: RscTextZ
		{
			idc=72061;
			x="0.410 * safezoneW + safezoneX";
			y="0.01 * safezoneH + safezoneY";
			w="0.20 * safezoneW";
			h="0.06 * safezoneH";
			text="";
			size=0.059999999;
			sizeEx=0.07;
			colorText[]={0,0,0,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok7: RscTextZ
		{
			idc=-1;
			x="0.405 * safezoneW + safezoneX";
			y="0.33 * safezoneH + safezoneY";
			w="0.20 * safezoneW";
			h="0.06 * safezoneH";
			text="";
			size=0.059999999;
			sizeEx=0.039999999;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class zagolvok8: RscTextZ
		{
			idc=-1;
			x="0.405 * safezoneW + safezoneX";
			y="0.37 * safezoneH + safezoneY";
			w="0.20 * safezoneW";
			h="0.06 * safezoneH";
			text="";
			size=0.059999999;
			sizeEx=0.039999999;
			colorText[]={0.75,0.75,0.75,0.80000001};
			colorBackground[]={0,0.12800001,0,0};
		};
		class but_ok: Ori_Button
		{
			access=1;
			idc=72060;
			x="0.453 * safezoneW + safezoneX";
			y="0.7 * safezoneH + safezoneY";
			w="0.10 * safezoneW";
			h="0.045 * safezoneH";
			size=0.045000002;
			sizeEx=0.045000002;
			animTextureNormal="\ori\ui\knopka_normal2.paa";
			animTextureDisabled="\ori\ui\knopka_normal2.paa";
			animTextureOver="\ori\ui\knopka_hover2.paa";
			animTextureFocused="\ori\ui\knopka_hover2.paa";
			animTexturePressed="\ori\ui\knopka_press2.paa";
			animTextureDefault="\ori\ui\knopka_normal2.paa";
			text="CHANGE";
			action="CODEINPUT = []; closeDialog 0;";
		};
	};
	class TraderIcon: RscPictureZ
	{
		idc=72064;
		x="0.46 * safezoneW + safezoneX";
		y="0.11 * safezoneH + safezoneY";
		w="0.09 * safezoneW";
		h="0.25 * safezoneH";
		text="";
		colorBackground[]={0,0.12800001,0,1};
	};
	class bg: RscPictureZ
	{
		idc=-1;
		x="0.255 * safezoneW + safezoneX";
		y="0.01 * safezoneH + safezoneY";
		w="0.50 * safezoneW";
		h="0.96 * safezoneH";
		text="\ori\ui\apooriginstraders.paa";
		colorBackground[]={0,0.12800001,0,1};
	};
	class value1bg: RscPictureZ
	{
		idc=-1;
		x="0.284 * safezoneW + safezoneX";
		y="0.49 * safezoneH + safezoneY";
		w="0.272 * safezoneW";
		h="0.025 * safezoneH";
		text="\ori\ui\ui_messagebox_middle_ca.paa";
		colorBackground[]={0,0.12800001,0,1};
	};
	class value2bg: RscPictureZ
	{
		idc=-1;
		x="0.561 * safezoneW + safezoneX";
		y="0.491 * safezoneH + safezoneY";
		w="0.275 * safezoneW";
		h="0.025 * safezoneH";
		text="\ori\ui\ui_messagebox_middle_ca.paa";
		colorBackground[]={0,0.12800001,0,1};
	};
	class value1: RscPictureZ
	{
		idc=72062;
		x="0.286 * safezoneW + safezoneX";
		y="0.49 * safezoneH + safezoneY";
		w="0 * safezoneW";
		h="0.022 * safezoneH";
		text="#(argb,8,8,3)color(1,1,1,0.4)";
	};
	class value2: RscPictureZ
	{
		idc=72063;
		x="0.563 * safezoneW + safezoneX";
		y="0.491 * safezoneH + safezoneY";
		w="0 * safezoneW";
		h="0.022 * safezoneH";
		text="#(argb,8,8,3)color(1,1,1,0.4)";
	};
};
class dOriSkills
{
	class RscControlsGroup
	{
		class VScrollbar
		{
			color[]={1,1,1,1};
			width=0.021;
			autoScrollSpeed=-1;
			autoScrollDelay=5;
			autoScrollRewind=0;
			shadow=0;
		};
		class HScrollbar
		{
			color[]={1,1,1,1};
			height=0;
			shadow=0;
		};
		class ScrollBar
		{
			color[]={1,1,1,0.60000002};
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.30000001};
			shadow=0;
			thumb="\ca\ui\data\ui_scrollbar_thumb_ca.paa";
			arrowFull="\ca\ui\data\ui_arrow_top_active_ca.paa";
			arrowEmpty="\ca\ui\data\ui_arrow_top_ca.paa";
			border="\ca\ui\data\ui_border_scroll_ca.paa";
		};
		class Controls
		{
		};
		type=15;
		idc=-1;
		x=0;
		y=0;
		w=1;
		h=1;
		shadow=0;
		style="16+0x200+0x02";
		sizeEx=0.015;
		size=0.015;
	};
	class RscPictureK
	{
		type=0;
		style=48;
		colorText[]={0.75,0.75,0.75,1};
		colorBackground[]={0,0,0,0};
		font="TahomaB";
		sizeEx=0.025;
		lineSpacing=0;
		fixedWidth=0;
		soundClick[]=
		{
			"",
			0.2,
			1
		};
		soundEnter[]=
		{
			"",
			0.2,
			1
		};
		soundEscape[]=
		{
			"",
			0.2,
			1
		};
		soundPush[]=
		{
			"",
			0.2,
			1
		};
		w=0.27500001;
		h=0.039999999;
		text="";
	};
	class RscButtonK
	{
		type=1;
		style=2;
		colorText[]={0,0,0,1};
		font="TahomaB";
		sizeEx=0.050000001;
		soundPush[]=
		{
			"",
			0.2,
			1
		};
		soundClick[]=
		{
			"\ca\ui\data\sound\new1",
			0.2,
			1
		};
		soundEscape[]=
		{
			"\ca\ui\data\sound\new1",
			0.2,
			1
		};
		default=0;
		text="";
		action="";
		colorActive[]={0,0,0,0};
		colorDisabled[]={0,0,0,0.1};
		colorBackground[]={0,0,0,0.30000001};
		colorBackgroundActive[]={0,0,0,0.40000001};
		colorBackgroundDisabled[]={0,0,0,0.30000001};
		colorFocused[]={0.83999997,1,0.55000001,1};
		colorShadow[]={1,1,1,0.1};
		colorBorder[]={0,0,0,0.1};
		offsetX=0;
		offsetY=0;
		offsetPressedX=0;
		offsetPressedY=0;
		borderSize=0;
		soundEnter[]=
		{
			"",
			0.15000001,
			1
		};
		period=0;
		toolTip="";
	};
	class Ori_Button
	{
		type=16;
		style=0;
		default=0;
		x=0.1;
		y=0.1;
		w=0.183825;
		h=0.104575;
		color[]={0.54299998,0.57419997,0.4102,1};
		color2[]={0.94999999,0.94999999,0.94999999,1};
		colorBackground[]={1,1,1,1};
		colorbackground2[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.25};
		periodFocus=1.2;
		periodOver=0.80000001;
		class HitZone
		{
			left=0.0040000002;
			top=0.0089999996;
			right=0.0040000002;
			bottom=0.0089999996;
		};
		class ShortcutPos
		{
			left=0.0145;
			top=0.026000001;
			w=0.039215699;
			h=0.052287601;
		};
		class TextPos
		{
			left=0.0049999999;
			top=0.0049999999;
			right=0.0049999999;
			bottom=0.0049999999;
		};
		textureNoShortcut="";
		animTextureNormal="\ori\ui\knopka_normal.paa";
		animTextureDisabled="\ori\ui\knopka_normal.paa";
		animTextureOver="\ori\ui\knopka_hover.paa";
		animTextureFocused="\ori\ui\knopka_hover.paa";
		animTexturePressed="\ori\ui\knopka_press.paa";
		animTextureDefault="\ori\ui\knopka_normal.paa";
		period=0.40000001;
		font="Zeppelin32";
		size=0.050000001;
		sizeEx=0.050000001;
		text="";
		soundEnter[]=
		{
			"",
			0.090000004,
			1
		};
		soundPush[]=
		{
			"",
			0.090000004,
			1
		};
		soundClick[]=
		{
			"",
			0.07,
			1
		};
		soundEscape[]=
		{
			"",
			0.090000004,
			1
		};
		action="";
		toolTip="";
		class Attributes
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
		class AttributesImage
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
	};
	class RscListBoxK
	{
		type=5;
		canDrag=0;
		style="0 + 0x10";
		font="Zeppelin32";
		sizeEx=0.042210001;
		rowHeight=0.029999999;
		colorBackground[]={0.80000001,0.80000001,1,0.69999999};
		colorText[]={1,1,1,0.75};
		colorScrollbar[]={0.94999999,0.94999999,0.94999999,1};
		colorSelect[]={0.94999999,0.94999999,0.94999999,1};
		colorSelect2[]={0.94999999,0.94999999,0.94999999,1};
		colorSelectBackground[]={0.60000002,0.83920002,0.47060001,1};
		colorSelectBackground2[]={0.60000002,0.83920002,0.47060001,1};
		columns[]={0.1,0.69999999,0.1,0.1};
		period=0;
		maxHistoryDelay=1;
		autoScrollSpeed=-1;
		autoScrollDelay=5;
		autoScrollRewind=0;
		soundSelect[]=
		{
			"\ca\ui\data\sound\new1",
			0.090000004,
			1
		};
		class ScrollBar
		{
			color[]={1,1,1,0.60000002};
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.30000001};
			thumb="\ca\ui\data\igui_scrollbar_thumb_ca.paa";
			arrowFull="\ca\ui\data\igui_arrow_top_active_ca.paa";
			arrowEmpty="\ca\ui\data\igui_arrow_top_ca.paa";
			border="\ca\ui\data\igui_border_scroll_ca.paa";
		};
	};
	class RscTextK
	{
		type=0;
		colorText[]={0,1,0.5,1};
		font="Bitstream";
		shadow=2;
		sizeEx=0.079999998;
		x=0;
		y=0;
		w=0.1;
		h=0.2;
		style=2;
		text="";
	};
	idd=73000;
	name="dOriSkills";
	class controls
	{
		class pmed_b1: RscButtonK
		{
			idc=73021;
			x="0.49178 * safezoneW + safezoneX";
			y="0.1807 * safezoneH + safezoneY";
			w="0.035* safezoneW";
			h="0.03* safezoneH";
			text="Help";
			sizeEx=0.035;
			colorText[]={1,0.50999999,0,0.85000002};
		};
		class z_med: RscTextK
		{
			idc=73023;
			type=0;
			style="16+0x200";
			x="0.1995 * safezoneW + safezoneX";
			y="0.5669 * safezoneH + safezoneY";
			w="0.6 * safezoneW";
			h="0.1 * safezoneH";
			size=0.025;
			lineSpacing=1;
			sizeEx=0.025;
			colorText[]={0.75,0.75,0.75,0.69999999};
			colorBackground[]={0,0.12800001,0,0};
		};
		class pmed_1: RscPictureK
		{
			idc=73001;
			x="0.3679 * safezoneW + safezoneX";
			y="0.321 * safezoneH + safezoneY";
			w="0.045* safezoneW";
			h="0.045* safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pmed_1done: pmed_1
		{
			idc=73002;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmed_1pr_bar: RscPictureK
		{
			idc=73003;
			x="0.3882 * safezoneW + safezoneX";
			y="0.3176 * safezoneH + safezoneY";
			w="0.0435 * safezoneW";
			h="0.051 * safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="";
			colorText[]={0,0.69999999,0,1};
		};
		class pmed_2: RscPictureK
		{
			idc=73004;
			x="0.4105 * safezoneW + safezoneX";
			y="0.321 * safezoneH + safezoneY";
			w="0.045 * safezoneW";
			h="0.045 * safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pmed_2done: pmed_2
		{
			idc=73005;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmed_2pr_bar: pmed_1pr_bar
		{
			idc=73006;
			x="0.4306 * safezoneW + safezoneX";
			y="0.3176 * safezoneH + safezoneY";
		};
		class pmed_3: RscPictureK
		{
			idc=73007;
			x="0.4531 * safezoneW + safezoneX";
			y="0.321 * safezoneH + safezoneY";
			w="0.045 * safezoneW";
			h="0.045 * safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pmed_3done: pmed_3
		{
			idc=73008;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmed_3pr_bar: pmed_1pr_bar
		{
			idc=73009;
			x="0.473 * safezoneW + safezoneX";
			y="0.3176 * safezoneH + safezoneY";
		};
		class pmed_4: RscPictureK
		{
			idc=73010;
			x="0.3679 * safezoneW + safezoneX";
			y="0.3709 * safezoneH + safezoneY";
			w="0.045 * safezoneW";
			h="0.045 * safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pmed_4done: pmed_4
		{
			idc=73011;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmed_4pr_bar: pmed_1pr_bar
		{
			idc=73012;
			x="0.3882 * safezoneW + safezoneX";
			y="0.3677 * safezoneH + safezoneY";
		};
		class pmed_5: RscPictureK
		{
			idc=73013;
			x="0.4105 * safezoneW + safezoneX";
			y="0.3709 * safezoneH + safezoneY";
			w="0.045 * safezoneW";
			h="0.045 * safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pmed_5done: pmed_5
		{
			idc=73014;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmed_5pr_bar: pmed_1pr_bar
		{
			idc=73015;
			x="0.4306 * safezoneW + safezoneX";
			y="0.3673 * safezoneH + safezoneY";
		};
		class pmed_6: RscPictureK
		{
			idc=73016;
			x="0.4531 * safezoneW + safezoneX";
			y="0.3709 * safezoneH + safezoneY";
			w="0.045 * safezoneW";
			h="0.045 * safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pmed_6done: pmed_6
		{
			idc=73017;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmed_6pr_bar: pmed_1pr_bar
		{
			idc=73018;
			x="0.473 * safezoneW + safezoneX";
			y="0.3673 * safezoneH + safezoneY";
		};
		class Med_knopka: RscPictureK
		{
			idc=73170;
			x="0.382367 * safezoneW + safezoneX";
			y="0.21 * safezoneH + safezoneY";
			w="0.105 * safezoneW";
			h="0.105 * safezoneH";
			text="\ori\ui\icons_medic.paa";
			style="0x0C+ 0x30 + 0x800";
			colorText[]={1,1,1,1};
			colorBackground[]={1,1,1,1};
		};
		class pmed_lvl: Med_knopka
		{
			idc=73019;
			text="";
		};
		class Mech_knopka: Med_knopka
		{
			idc=73171;
			x="0.562299 * safezoneW + safezoneX";
			text="\ori\ui\icons_mechanic.paa";
		};
		class pmech_lvl: Mech_knopka
		{
			idc=73020;
			text="";
		};
		class mButRes: Ori_Button
		{
			idc=73026;
			text="Research";
			x="0.3956 * safezoneW + safezoneX";
			y="0.4582 * safezoneH + safezoneY";
			w="0.08 * safezoneW";
			h="0.03 * safezoneH";
			sizeEx=0.0099999998;
			size=0.039999999;
		};
		class bgResearch: RscPictureK
		{
			idc=73028;
			x="0.180926 * safezoneW + safezoneX";
			y="0.493829 * safezoneH + safezoneY";
			w="0.7* safezoneW";
			h="0.17 * safezoneH";
			text="";
			colorBackground[]={1,0.1,0.1,1};
			size=0.039999999;
			sizeEx=0.039999999;
		};
		class Research_b1: RscPictureK
		{
			idc=73029;
			x="0.192631 * safezoneW + safezoneX";
			y="0.539391 * safezoneH + safezoneY";
			w="0.105 * safezoneW";
			h="0.105 * safezoneH";
			text="";
			style="0x0C+ 0x30 + 0x800";
			colorBackground[]={1,0.1,0.1,1};
		};
		class Research_items1: RscPictureK
		{
			idc=73030;
			x="0.290218 * safezoneW + safezoneX";
			y="0.537269 * safezoneH + safezoneY";
			w="0.13* safezoneW";
			h="0.11* safezoneH";
			text="";
			colorBackground[]={0.69999999,0.69999999,0.69999999,0.69999999};
			colorText[]={0.69999999,0.69999999,0.69999999,0.69999999};
		};
		class Research_b2: RscPictureK
		{
			idc=73031;
			x="0.413872 * safezoneW + safezoneX";
			y="0.539391 * safezoneH + safezoneY";
			w="0.105 * safezoneW";
			h="0.105 * safezoneH";
			text="";
			style="0x0C+ 0x30 + 0x800";
			colorBackground[]={1,0.1,0.1,1};
		};
		class Research_items2: RscPictureK
		{
			idc=73032;
			x="0.510758 * safezoneW + safezoneX";
			y="0.537269 * safezoneH + safezoneY";
			w="0.13* safezoneW";
			h="0.11* safezoneH";
			text="";
			colorBackground[]={0.69999999,0.69999999,0.69999999,0.69999999};
			colorText[]={0.69999999,0.69999999,0.69999999,0.69999999};
		};
		class Research_b3: RscPictureK
		{
			idc=73033;
			x="0.634411 * safezoneW + safezoneX";
			y="0.539391 * safezoneH + safezoneY";
			w="0.105 * safezoneW";
			h="0.105 * safezoneH";
			text="";
			style="0x0C+ 0x30 + 0x800";
			colorBackground[]={1,0.1,0.1,1};
		};
		class Research_items3: RscPictureK
		{
			idc=73034;
			x="0.731298 * safezoneW + safezoneX";
			y="0.537269 * safezoneH + safezoneY";
			w="0.13* safezoneW";
			h="0.11* safezoneH";
			text="";
			colorBackground[]={0.69999999,0.69999999,0.69999999,0.69999999};
			colorText[]={0.69999999,0.69999999,0.69999999,0.69999999};
		};
		class bgResearch2: RscPictureK
		{
			idc=73109;
			x="0.180926 * safezoneW + safezoneX";
			y="0.651537 * safezoneH + safezoneY";
			w="0.7* safezoneW";
			h="0.17 * safezoneH";
			text="\ori\ui\research_longer2.paa";
			colorBackground[]={1,0.1,0.1,1};
			size=0.039999999;
			sizeEx=0.039999999;
		};
		class Research2_b1: RscPictureK
		{
			idc=73110;
			x="0.192631 * safezoneW + safezoneX";
			y="0.698383 * safezoneH + safezoneY";
			w="0.105 * safezoneW";
			h="0.105 * safezoneH";
			text="";
			style="0x0C+ 0x30 + 0x800";
			colorBackground[]={1,0.1,0.1,1};
		};
		class Research2_items1: RscPictureK
		{
			idc=73111;
			x="0.290218 * safezoneW + safezoneX";
			y="0.696201 * safezoneH + safezoneY";
			w="0.13* safezoneW";
			h="0.11* safezoneH";
			text="";
			colorBackground[]={0.69999999,0.69999999,0.69999999,0.69999999};
			colorText[]={0.69999999,0.69999999,0.69999999,0.69999999};
		};
		class Research2_b2: RscPictureK
		{
			idc=73112;
			x="0.413872 * safezoneW + safezoneX";
			y="0.698383 * safezoneH + safezoneY";
			w="0.105 * safezoneW";
			h="0.105 * safezoneH";
			text="";
			style="0x0C+ 0x30 + 0x800";
			colorBackground[]={1,0.1,0.1,1};
		};
		class Research2_items2: RscPictureK
		{
			idc=73113;
			x="0.510758 * safezoneW + safezoneX";
			y="0.696201 * safezoneH + safezoneY";
			w="0.13* safezoneW";
			h="0.11* safezoneH";
			text="";
			colorBackground[]={0.69999999,0.69999999,0.69999999,0.69999999};
			colorText[]={0.69999999,0.69999999,0.69999999,0.69999999};
		};
		class Research2_b3: RscPictureK
		{
			idc=73114;
			x="0.634411 * safezoneW + safezoneX";
			y="0.698383 * safezoneH + safezoneY";
			w="0.105 * safezoneW";
			h="0.105 * safezoneH";
			text="";
			style="0x0C+ 0x30 + 0x800";
			colorBackground[]={1,0.1,0.1,1};
		};
		class Research2_items3: RscPictureK
		{
			idc=73115;
			x="0.731298 * safezoneW + safezoneX";
			y="0.696201 * safezoneH + safezoneY";
			w="0.13* safezoneW";
			h="0.11* safezoneH";
			text="";
			colorBackground[]={0.69999999,0.69999999,0.69999999,0.69999999};
			colorText[]={0.69999999,0.69999999,0.69999999,0.69999999};
		};
		class pr_1: RscPictureK
		{
			idc=73035;
			x="0.286021 * safezoneW + safezoneX";
			y="0.543 * safezoneH + safezoneY";
			w="0.046* safezoneW";
			h="0.046* safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pr_1done: pr_1
		{
			idc=73036;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr_1pr_bar: RscPictureK
		{
			idc=73037;
			x="0.300725 * safezoneW + safezoneX";
			y="0.539 * safezoneH + safezoneY";
			w="0.056* safezoneW";
			h="0.056* safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="";
			colorText[]={0,0.69999999,0,1};
		};
		class pr_2: pr_1
		{
			idc=73038;
			x="0.32943 * safezoneW + safezoneX";
			y="0.543 * safezoneH + safezoneY";
			w="0.046* safezoneW";
			h="0.046* safezoneH";
		};
		class pr_2done: pr_2
		{
			idc=73039;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr_2pr_bar: pr_1pr_bar
		{
			idc=73040;
			x="0.344134 * safezoneW + safezoneX";
			y="0.539 * safezoneH + safezoneY";
			w="0.056* safezoneW";
			h="0.056* safezoneH";
			text="";
		};
		class pr_3: pr_1
		{
			idc=73041;
			x="0.372138 * safezoneW + safezoneX";
			y="0.543 * safezoneH + safezoneY";
		};
		class pr_3done: pr_3
		{
			idc=73042;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr_3pr_bar: pr_1pr_bar
		{
			idc=73043;
			x="0.386791 * safezoneW + safezoneX";
			y="0.539 * safezoneH + safezoneY";
			text="";
		};
		class pr_4: pr_1
		{
			idc=73044;
			y="0.597 * safezoneH + safezoneY";
		};
		class pr_4done: pr_4
		{
			idc=73045;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr_4pr_bar: pr_1pr_bar
		{
			idc=73046;
			y="0.5925 * safezoneH + safezoneY";
			text="";
		};
		class pr_5: pr_2
		{
			idc=73047;
			y="0.597 * safezoneH + safezoneY";
		};
		class pr_5done: pr_5
		{
			idc=73048;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr_5pr_bar: pr_2pr_bar
		{
			idc=73049;
			y="0.5925 * safezoneH + safezoneY";
			text="";
		};
		class pr_6: pr_3
		{
			idc=73050;
			y="0.597 * safezoneH + safezoneY";
		};
		class pr_6done: pr_6
		{
			idc=73051;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr_6pr_bar: pr_3pr_bar
		{
			idc=73052;
			y="0.5925 * safezoneH + safezoneY";
			text="";
		};
		class pr2_1: pr_1
		{
			idc=73053;
			x="0.50726 * safezoneW + safezoneX";
		};
		class pr2_1done: pr2_1
		{
			idc=73054;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr2_1pr_bar: pr_1pr_bar
		{
			idc=73055;
			x="0.521964 * safezoneW + safezoneX";
		};
		class pr2_2: pr_1
		{
			idc=73056;
			x="0.550669 * safezoneW + safezoneX";
		};
		class pr2_2done: pr2_2
		{
			idc=73057;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr2_2pr_bar: pr_2pr_bar
		{
			idc=73058;
			x="0.565373 * safezoneW + safezoneX";
		};
		class pr2_3: pr_1
		{
			idc=73059;
			x="0.593377 * safezoneW + safezoneX";
		};
		class pr2_3done: pr2_3
		{
			idc=73060;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr2_3pr_bar: pr_3pr_bar
		{
			idc=73061;
			x="0.60803 * safezoneW + safezoneX";
		};
		class pr2_4: pr2_1
		{
			idc=73062;
			y="0.597 * safezoneH + safezoneY";
		};
		class pr2_4done: pr2_4
		{
			idc=73063;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr2_4pr_bar: pr2_1pr_bar
		{
			idc=73064;
			y="0.5925 * safezoneH + safezoneY";
		};
		class pr2_5: pr2_2
		{
			idc=73065;
			y="0.597 * safezoneH + safezoneY";
		};
		class pr2_5done: pr2_5
		{
			idc=73066;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr2_5pr_bar: pr2_2pr_bar
		{
			idc=73067;
			y="0.5925 * safezoneH + safezoneY";
		};
		class pr2_6: pr2_3
		{
			idc=73068;
			y="0.597 * safezoneH + safezoneY";
		};
		class pr2_6done: pr2_6
		{
			idc=73069;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr2_6pr_bar: pr2_3pr_bar
		{
			idc=73070;
			y="0.5925 * safezoneH + safezoneY";
		};
		class pr3_1: pr_1
		{
			idc=73071;
			x="0.727799 * safezoneW + safezoneX";
		};
		class pr3_1done: pr3_1
		{
			idc=73072;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr3_1pr_bar: pr_3pr_bar
		{
			idc=73073;
			x="0.742503 * safezoneW + safezoneX";
		};
		class pr3_2: pr_1
		{
			idc=73074;
			x="0.771208 * safezoneW + safezoneX";
		};
		class pr3_2done: pr3_2
		{
			idc=73075;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr3_2pr_bar: pr_3pr_bar
		{
			idc=73076;
			x="0.785912 * safezoneW + safezoneX";
		};
		class pr3_3: pr_1
		{
			idc=73077;
			x="0.813916 * safezoneW + safezoneX";
		};
		class pr3_3done: pr3_3
		{
			idc=73078;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr3_3pr_bar: pr_3pr_bar
		{
			idc=73079;
			x="0.828569 * safezoneW + safezoneX";
		};
		class pr3_4: pr3_1
		{
			idc=73080;
			y="0.597 * safezoneH + safezoneY";
		};
		class pr3_4done: pr3_4
		{
			idc=73081;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr3_4pr_bar: pr3_1pr_bar
		{
			idc=73082;
			y="0.5925 * safezoneH + safezoneY";
			text="";
		};
		class pr3_5: pr3_2
		{
			idc=73083;
			y="0.597 * safezoneH + safezoneY";
		};
		class pr3_5done: pr3_5
		{
			idc=73084;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr3_5pr_bar: pr3_2pr_bar
		{
			idc=73085;
			y="0.5925 * safezoneH + safezoneY";
		};
		class pr3_6: pr3_3
		{
			idc=73086;
			y="0.597 * safezoneH + safezoneY";
		};
		class pr3_6done: pr3_6
		{
			idc=73087;
			text="";
			colorText[]={1,1,1,1};
		};
		class pr3_6pr_bar: pr3_3pr_bar
		{
			idc=73088;
			y="0.5925 * safezoneH + safezoneY";
		};
		class pmech_b1: RscButtonK
		{
			idc=73089;
			x="0.673132 * safezoneW + safezoneX";
			y="0.1807 * safezoneH + safezoneY";
			w="0.035* safezoneW";
			h="0.03* safezoneH";
			text="Help";
			sizeEx=0.035;
			colorText[]={1,0.50999999,0,0.85000002};
		};
		class pmech_1: RscPictureK
		{
			idc=73090;
			x="0.549232 * safezoneW + safezoneX";
			y="0.321 * safezoneH + safezoneY";
			w="0.045* safezoneW";
			h="0.045* safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pmech_1done: pmech_1
		{
			idc=73091;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmech_1pr_bar: RscPictureK
		{
			idc=73092;
			x="0.569532 * safezoneW + safezoneX";
			y="0.3176 * safezoneH + safezoneY";
			w="0.0435 * safezoneW";
			h="0.051 * safezoneH";
			style="0x0C+ 0x30 + 0x800";
			colorText[]={0,0.69999999,0,1};
		};
		class pmech_2: RscPictureK
		{
			idc=73093;
			x="0.591832 * safezoneW + safezoneX";
			y="0.321 * safezoneH + safezoneY";
			w="0.045 * safezoneW";
			h="0.045 * safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pmech_2done: pmech_2
		{
			idc=73094;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmech_2pr_bar: pmech_1pr_bar
		{
			idc=73095;
			x="0.611932 * safezoneW + safezoneX";
			y="0.3176 * safezoneH + safezoneY";
		};
		class pmech_3: RscPictureK
		{
			idc=73096;
			x="0.634432 * safezoneW + safezoneX";
			y="0.321 * safezoneH + safezoneY";
			w="0.045 * safezoneW";
			h="0.045 * safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class pmech_3done: pmech_3
		{
			idc=73097;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmech_3pr_bar: pmech_1pr_bar
		{
			idc=73098;
			x="0.654332 * safezoneW + safezoneX";
			y="0.3176 * safezoneH + safezoneY";
		};
		class pmech_4: pmech_1
		{
			idc=73099;
			y="0.3709 * safezoneH + safezoneY";
		};
		class pmech_4done: pmech_4
		{
			idc=73100;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmech_4pr_bar: pmech_1pr_bar
		{
			idc=73101;
			y="0.3677 * safezoneH + safezoneY";
		};
		class pmech_5: pmech_2
		{
			idc=73102;
			y="0.3709 * safezoneH + safezoneY";
		};
		class pmech_5done: pmech_5
		{
			idc=73103;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmech_5pr_bar: pmech_2pr_bar
		{
			idc=73104;
			y="0.3673 * safezoneH + safezoneY";
		};
		class pmech_6: pmech_3
		{
			idc=73105;
			y="0.3709 * safezoneH + safezoneY";
		};
		class pmech_6done: pmech_6
		{
			idc=73106;
			text="";
			colorText[]={1,1,1,1};
		};
		class pmech_6pr_bar: pmech_3pr_bar
		{
			idc=73107;
			y="0.3673 * safezoneH + safezoneY";
		};
		class mechButRes: Ori_Button
		{
			idc=73108;
			text="Research";
			x="0.576932 * safezoneW + safezoneX";
			y="0.4582 * safezoneH + safezoneY";
			w="0.08 * safezoneW";
			h="0.03 * safezoneH";
			sizeEx=0.0099999998;
			size=0.039999999;
		};
		class prD2_1: RscPictureK
		{
			idc=73116;
			x="0.286021 * safezoneW + safezoneX";
			y="0.702094 * safezoneH + safezoneY";
			w="0.046* safezoneW";
			h="0.046* safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="\ori\ui\unknown.paa";
			colorText[]={1,1,1,0.60000002};
		};
		class prD2_1done: prD2_1
		{
			idc=73117;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD2_1pr_bar: RscPictureK
		{
			idc=73118;
			x="0.300725 * safezoneW + safezoneX";
			y="0.697981 * safezoneH + safezoneY";
			w="0.056* safezoneW";
			h="0.056* safezoneH";
			style="0x0C+ 0x30 + 0x800";
			text="";
			colorText[]={0,0.69999999,0,1};
		};
		class prD2_2: prD2_1
		{
			idc=73119;
			x="0.32943 * safezoneW + safezoneX";
			w="0.046* safezoneW";
			h="0.046* safezoneH";
		};
		class prD2_2done: prD2_2
		{
			idc=73120;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD2_2pr_bar: prD2_1pr_bar
		{
			idc=73121;
			x="0.344134 * safezoneW + safezoneX";
		};
		class prD2_3: prD2_1
		{
			idc=73122;
			x="0.372138 * safezoneW + safezoneX";
		};
		class prD2_3done: prD2_3
		{
			idc=73123;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD2_3pr_bar: prD2_1pr_bar
		{
			idc=73124;
			x="0.386791 * safezoneW + safezoneX";
		};
		class prD2_4: prD2_1
		{
			idc=73125;
			y="0.757615 * safezoneH + safezoneY";
		};
		class prD2_4done: prD2_4
		{
			idc=73126;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD2_4pr_bar: prD2_1pr_bar
		{
			idc=73127;
			y="0.752988 * safezoneH + safezoneY";
		};
		class prD2_5: prD2_2
		{
			idc=73128;
			y="0.757615 * safezoneH + safezoneY";
		};
		class prD2_5done: prD2_5
		{
			idc=73129;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD2_5pr_bar: prD2_2pr_bar
		{
			idc=73130;
			y="0.752988 * safezoneH + safezoneY";
		};
		class prD2_6: prD2_3
		{
			idc=73131;
			y="0.757615 * safezoneH + safezoneY";
		};
		class prD2_6done: prD2_6
		{
			idc=73132;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD2_6pr_bar: prD2_3pr_bar
		{
			idc=73133;
			y="0.752988 * safezoneH + safezoneY";
		};
		class prD22_1: prD2_1
		{
			idc=73134;
			x="0.50726 * safezoneW + safezoneX";
		};
		class prD22_1done: prD22_1
		{
			idc=73135;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD22_1pr_bar: prD2_1pr_bar
		{
			idc=73136;
			x="0.521964 * safezoneW + safezoneX";
		};
		class prD22_2: prD2_1
		{
			idc=73137;
			x="0.550669 * safezoneW + safezoneX";
		};
		class prD22_2done: prD22_2
		{
			idc=73138;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD22_2pr_bar: prD2_2pr_bar
		{
			idc=73139;
			x="0.565373 * safezoneW + safezoneX";
		};
		class prD22_3: prD2_1
		{
			idc=73140;
			x="0.593377 * safezoneW + safezoneX";
		};
		class prD22_3done: prD22_3
		{
			idc=73141;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD22_3pr_bar: prD2_3pr_bar
		{
			idc=73142;
			x="0.60803 * safezoneW + safezoneX";
		};
		class prD22_4: prD22_1
		{
			idc=73143;
			y="0.757615 * safezoneH + safezoneY";
		};
		class prD22_4done: prD22_4
		{
			idc=73144;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD22_4pr_bar: prD22_1pr_bar
		{
			idc=73145;
			y="0.752988 * safezoneH + safezoneY";
		};
		class prD22_5: prD22_2
		{
			idc=73146;
			y="0.757615 * safezoneH + safezoneY";
		};
		class prD22_5done: prD22_5
		{
			idc=73147;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD22_5pr_bar: prD22_2pr_bar
		{
			idc=73148;
			y="0.752988 * safezoneH + safezoneY";
		};
		class prD22_6: prD22_3
		{
			idc=73149;
			y="0.757615 * safezoneH + safezoneY";
		};
		class prD22_6done: prD22_6
		{
			idc=73150;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD22_6pr_bar: prD22_3pr_bar
		{
			idc=73151;
			y="0.752988 * safezoneH + safezoneY";
		};
		class prD23_1: prD2_1
		{
			idc=73152;
			x="0.727799 * safezoneW + safezoneX";
		};
		class prD23_1done: prD23_1
		{
			idc=73153;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD23_1pr_bar: prD2_3pr_bar
		{
			idc=73154;
			x="0.742503 * safezoneW + safezoneX";
		};
		class prD23_2: prD2_1
		{
			idc=73155;
			x="0.771208 * safezoneW + safezoneX";
		};
		class prD23_2done: prD23_2
		{
			idc=73156;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD23_2pr_bar: prD2_3pr_bar
		{
			idc=73157;
			x="0.785912 * safezoneW + safezoneX";
		};
		class prD23_3: prD2_1
		{
			idc=73158;
			x="0.813916 * safezoneW + safezoneX";
		};
		class prD23_3done: prD23_3
		{
			idc=73159;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD23_3pr_bar: prD2_3pr_bar
		{
			idc=73160;
			x="0.828569 * safezoneW + safezoneX";
		};
		class prD23_4: prD23_1
		{
			idc=73161;
			y="0.757615 * safezoneH + safezoneY";
		};
		class prD23_4done: prD23_4
		{
			idc=73162;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD23_4pr_bar: prD23_1pr_bar
		{
			idc=73163;
			y="0.752988 * safezoneH + safezoneY";
		};
		class prD23_5: prD23_2
		{
			idc=73164;
			y="0.757615 * safezoneH + safezoneY";
		};
		class prD23_5done: prD23_5
		{
			idc=73165;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD23_5pr_bar: prD23_2pr_bar
		{
			idc=73166;
			y="0.752988 * safezoneH + safezoneY";
		};
		class prD23_6: prD23_3
		{
			idc=73167;
			y="0.757615 * safezoneH + safezoneY";
		};
		class prD23_6done: prD23_6
		{
			idc=73168;
			text="";
			colorText[]={1,1,1,1};
		};
		class prD23_6pr_bar: prD23_3pr_bar
		{
			idc=73169;
			y="0.752988 * safezoneH + safezoneY";
		};
		class bgHelp: RscPictureK
		{
			idc=73022;
			x="0.18* safezoneW + safezoneX";
			y="0.23* safezoneH + safezoneY";
			w="0.91 * safezoneW";
			h="0.63 * safezoneH";
			colorText[]={0.89999998,0.89999998,0.89999998,1};
			colorBackground[]={1,0.1,0.1,1};
		};
		class MyControls: RscControlsGroup
		{
			idc=73025;
			x="(safeZoneX + (SafezoneW * 0.178))";
			y="(safeZoneY + (SafezoneH * 0.24))";
			w="0.68 * safezoneW";
			h="0.45 * safezoneH";
			class Controls
			{
				class z_medHelp: RscTextK
				{
					idc=73024;
					type=13;
					style="16+0x200+0x02";
					x=0.050000001;
					y=0.050000001;
					w="0.63 * safezoneW";
					h="1.5 * safezoneH";
					text="";
					size=0.028000001;
					lineSpacing=1;
					sizeEx=0.028000001;
					colorText[]={0.75,0.75,0.75,0.30000001};
					colorBackground[]={0,0.12800001,0,0};
				};
			};
		};
	};
	class controlsBackground
	{
		class bg: RscPictureK
		{
			idc=-1;
			x="0.18* safezoneW + safezoneX";
			y="0.10* safezoneH + safezoneY";
			w="0.7 * safezoneW";
			h="0.85 * safezoneH";
			text="\ori\ui\skilldialog_raw_grey.paa";
			colorText[]={0.89999998,0.89999998,0.89999998,1};
			colorBackground[]={1,1,1,0.80000001};
		};
	};
};
class RscButtonActionMenu: RscButton
{
	SizeEx=0.02674;
	colorBackground[]={0.44,0.69999999,0.44,1};
	colorBackgroundActive[]={0.23999999,0.5,0.23999999,1};
	colorBackgroundDisabled[]={1,1,1,0};
	colorFocused[]={0.2,0.5,0.2,1};
	colorShadow[]={1,1,1,0};
	borderSize=0;
	w="0.115 * safezoneW";
	h="0.025 * safezoneH";
};
class RscDisplayGenderSelect
{
	class RscPictureK
	{
		type=0;
		idc=-1;
		style=48;
		colorText[]={0.75,0.75,0.75,1};
		colorBackground[]={0,0,0,0};
		font="Bitstream";
		sizeEx=0.025;
		soundClick[]=
		{
			"",
			0.2,
			1
		};
		soundEnter[]=
		{
			"",
			0.2,
			1
		};
		soundEscape[]=
		{
			"",
			0.2,
			1
		};
		soundPush[]=
		{
			"",
			0.2,
			1
		};
		w=0.27500001;
		h=0.039999999;
		text="";
	};
	class Ori_Button
	{
		type=16;
		idc=-1;
		style=0;
		default=0;
		x=0.1;
		y=0.1;
		w=0.183825;
		h=0.104575;
		color[]={0.54299998,0.57419997,0.4102,1};
		color2[]={0.94999999,0.94999999,0.94999999,1};
		colorBackground[]={1,1,1,1};
		colorbackground2[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.25};
		periodFocus=1.2;
		periodOver=0.80000001;
		class HitZone
		{
			left=0.015;
			top=0.001;
			right=0.045000002;
			bottom=0.001;
		};
		class ShortcutPos
		{
			left=0.0145;
			top=0.026000001;
			w=0.039215699;
			h=0.052287601;
		};
		class TextPos
		{
			left=0.0049999999;
			top=0.0099999998;
			right=0.0049999999;
			bottom=0.0049999999;
		};
		textureNoShortcut="";
		animTextureNormal="";
		animTextureDisabled="";
		animTextureOver="";
		animTextureFocused="";
		animTexturePressed="";
		animTextureDefault="";
		period=0.40000001;
		font="Zeppelin32";
		size=0.050000001;
		sizeEx=0.050000001;
		text="";
		soundEnter[]=
		{
			"",
			0.090000004,
			1
		};
		soundPush[]=
		{
			"",
			0.090000004,
			1
		};
		soundClick[]=
		{
			"",
			0.07,
			1
		};
		soundEscape[]=
		{
			"",
			0.090000004,
			1
		};
		action="";
		toolTip="";
		class Attributes
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="center";
			shadow=1;
		};
		class AttributesImage
		{
			font="Zeppelin32";
			color="#E5E5E5";
			align="left";
			shadow=1;
		};
	};
	class RscTextK
	{
		type=0;
		idc=-1;
		style=2;
		colorText[]={0,1,0.5,1};
		font="TahomaB";
		sizeEx=0.079999998;
		x=0;
		y=0;
		w=0.1;
		h=0.2;
	};
	class RscTextK2
	{
		type=0;
		idc=-1;
		access=0;
		lineSpacing=1;
		style=16;
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,0.75};
		font="Zeppelin32";
		size=0.028999999;
		sizeEx=0.028000001;
		text="";
	};
	idd=6902;
	enableDisplay=1;
	controlsBackground[]=
	{
		"bg"
	};
	class controls
	{
		class but_left: Ori_Button
		{
			access=0;
			x="0.247 * safezoneW + safezoneX";
			y="0.8 * safezoneH + safezoneY";
			w="0.09 * safezoneW";
			h="0.09 * safezoneH";
			size=0.045000002;
			sizeEx=0.045000002;
			textureNoShortcut="";
			animTextureNormal="\ori\ui\left_normal.paa";
			animTextureDisabled="\ori\ui\left_normal.paa";
			animTextureOver="\ori\ui\left_normal.paa";
			animTextureFocused="\ori\ui\left_normal.paa";
			animTexturePressed="\ori\ui\left_press.paa";
			animTextureDefault="\ori\ui\left_normal.paa";
			text="";
			action="if(counter==0) then { counter=maxcounter; } else { counter=counter-1;}; _text_t = localize (workingar_d select counter); ctrlSetText [5151, ((workingar select counter) select 0)]; ctrlSetText [5152, _text_t]; dayz_selectGender = ((workingar select counter) select 1);";
		};
		class but_right: Ori_Button
		{
			access=0;
			x="0.388 * safezoneW + safezoneX";
			y="0.8 * safezoneH + safezoneY";
			w="0.09 * safezoneW";
			h="0.09 * safezoneH";
			size=0.045000002;
			sizeEx=0.045000002;
			animTextureNormal="\ori\ui\right_normal.paa";
			animTextureDisabled="\ori\ui\right_normal.paa";
			animTextureOver="\ori\ui\right_normal.paa";
			animTextureFocused="\ori\ui\right_normal.paa";
			animTexturePressed="\ori\ui\right_press.paa";
			animTextureDefault="\ori\ui\right_normal.paa";
			text="";
			action="if(counter==maxcounter) then { counter=0; } else { counter=counter+1;}; _text_t = localize (workingar_d select counter); ctrlSetText [5151, ((workingar select counter) select 0)]; ctrlSetText [5152, _text_t]; dayz_selectGender = ((workingar select counter) select 1);";
		};
		class but_sman: Ori_Button
		{
			access=0;
			x="0.478 * safezoneW + safezoneX";
			y="0.152 * safezoneH + safezoneY";
			w="0.09 * safezoneW";
			h="0.09 * safezoneH";
			size=0.045000002;
			sizeEx=0.045000002;
			animTextureNormal="\ori\ui\man_normal.paa";
			animTextureDisabled="\ori\ui\man_normal.paa";
			animTextureOver="\ori\ui\man_hover.paa";
			animTextureFocused="\ori\ui\man_normal.paa";
			animTexturePressed="\ori\ui\man_press.paa";
			animTextureDefault="\ori\ui\man_normal.paa";
			text="";
			action="workingar = orig_mans; workingar_d = mans_desc; maxcounter = 11; counter=0; ctrlSetText [5151, ((workingar select counter) select 0)]; _text_t = localize (workingar_d select counter); ctrlSetText [5152, _text_t]; dayz_selectGender = ((workingar select counter) select 1);";
		};
		class but_swoman: Ori_Button
		{
			access=0;
			x="0.571 * safezoneW + safezoneX";
			y="0.152 * safezoneH + safezoneY";
			w="0.09 * safezoneW";
			h="0.09 * safezoneH";
			size=0.045000002;
			sizeEx=0.045000002;
			animTextureNormal="\ori\ui\baba_normal.paa";
			animTextureDisabled="\ori\ui\baba_normal.paa";
			animTextureOver="\ori\ui\baba_hover.paa";
			animTextureFocused="\ori\ui\baba_normal.paa";
			animTexturePressed="\ori\ui\baba_press.paa";
			animTextureDefault="\ori\ui\baba_normal.paa";
			text="";
			action="workingar = orig_womans; workingar_d = womans_desc; maxcounter = 6; counter=0; ctrlSetText [5151, ((workingar select counter) select 0)]; _text_t = localize (workingar_d select counter); ctrlSetText [5152, _text_t]; dayz_selectGender = ((workingar select counter) select 1);";
		};
		class but_ok: Ori_Button
		{
			access=0;
			x="0.479 * safezoneW + safezoneX";
			y="0.687 * safezoneH + safezoneY";
			w="0.25 * safezoneW";
			h="0.055 * safezoneH";
			size=0.055;
			sizeEx=0.045000002;
			animTextureNormal="\ori\ui\knopka_normal2.paa";
			animTextureDisabled="\ori\ui\knopka_normal2.paa";
			animTextureOver="\ori\ui\knopka_hover2.paa";
			animTextureFocused="\ori\ui\knopka_hover2.paa";
			animTexturePressed="\ori\ui\knopka_press2.paa";
			animTextureDefault="\ori\ui\knopka_normal2.paa";
			text="Let's go...";
			action="closeDialog 0;";
		};
		class text: RscTextK2
		{
			idc=5152;
			x="0.481 * safezoneW + safezoneX";
			y="0.241 * safezoneH + safezoneY";
			w="0.29 * safezoneW";
			h="0.42 * safezoneH";
			text="";
		};
		class skinp: RscPictureK
		{
			idc=5151;
			x="0.2515 * safezoneW + safezoneX";
			y="0.1722 * safezoneH + safezoneY";
			w="0.1908 * safezoneW";
			h="0.6135 * safezoneH";
			text="";
			colorBackground[]={0,0.12800001,0,1};
		};
		class skloS: RscPictureK
		{
			x="0.2515 * safezoneW + safezoneX";
			y="0.1722 * safezoneH + safezoneY";
			w="0.1908 * safezoneW";
			h="0.6135 * safezoneH";
			text="\ori\ui\sloj_steklo.paa";
		};
		class zagolvok: RscTextK
		{
			x="0.385 * safezoneW + safezoneX";
			y="0.077 * safezoneH + safezoneY";
			w="0.27 * safezoneW";
			h="0.04 * safezoneH";
			size=0.064999998;
			sizeEx="0.065 * (safezoneW + safezoneX)";
			text="Choose survivor";
			colorText[]={0,0,0,0.89999998};
			colorBackground[]={0,0.12800001,0,0};
		};
	};
	class bg: RscPictureK
	{
		x="0.21 * safezoneW + safezoneX";
		y="0.07 * safezoneH + safezoneY";
		w="0.6 * safezoneW";
		h="0.84 * safezoneH";
		text="\ori\ui\fon2.paa";
		colorBackground[]={0,0.12800001,0,1};
	};
};
class RscDisplaySpawnlocationSelect
{
	idd=6903;
	enableDisplay=1;
	class controls
	{
		class RscSelectedRegion1: RscActiveText
		{
			idc=-1;
			style=48;
			text="\ori\ui\ui_kameni_co.paa";
			x="0.19 * safezoneW + safezoneX";
			y="0.05 * safezoneH + safezoneY";
			w="0.190 * safezoneW";
			h="0.390 * safezoneH";
			color[]={0.5,0.5,0.5,1};
			colorActive[]={1,1,1,1};
			action="closeDialog 0;dayz_selectRegion = 0;";
		};
		class RscSelectedRegion2: RscActiveText
		{
			idc=-1;
			style=48;
			text="\ori\ui\ui_mitrovice_co.paa";
			x="0.40 * safezoneW + safezoneX";
			y="0.05 * safezoneH + safezoneY";
			w="0.190 * safezoneW";
			h="0.390 * safezoneH";
			color[]={0.5,0.5,0.5,1};
			colorActive[]={1,1,1,1};
			action="closeDialog 0;dayz_selectRegion = 1;";
		};
		class RscSelectedRegionR: RscActiveText
		{
			idc=-1;
			style=48;
			text="\ori\ui\ui_random_co.paa";
			x="0.61 * safezoneW + safezoneX";
			y="0.05 * safezoneH + safezoneY";
			w="0.190 * safezoneW";
			h="0.390 * safezoneH";
			color[]={0.5,0.5,0.5,1};
			colorActive[]={1,1,1,1};
			action="closeDialog 0;dayz_selectRegion = 2;";
		};
		class RscSelectedRegion4: RscActiveText
		{
			idc=-1;
			style=48;
			text="\ori\ui\ui_seven_co.paa";
			x="0.19 * safezoneW + safezoneX";
			y="0.46 * safezoneH + safezoneY";
			w="0.190 * safezoneW";
			h="0.390 * safezoneH";
			color[]={0.5,0.5,0.5,1};
			colorActive[]={1,1,1,1};
			action="closeDialog 0;dayz_selectRegion = 3;";
		};
		class RscSelectedRegion5: RscActiveText
		{
			idc=-1;
			style=48;
			text="\ori\ui\ui_byelov_co.paa";
			x="0.40 * safezoneW + safezoneX";
			y="0.46 * safezoneH + safezoneY";
			w="0.190 * safezoneW";
			h="0.390 * safezoneH";
			color[]={0.5,0.5,0.5,1};
			colorActive[]={1,1,1,1};
			action="closeDialog 0;dayz_selectRegion = 4;";
		};
		class RscSelectedRegion6: RscActiveText
		{
			idc=-1;
			style=48;
			text="\ori\ui\ui_etanovsk_co.paa";
			x="0.61 * safezoneW + safezoneX";
			y="0.46 * safezoneH + safezoneY";
			w="0.190 * safezoneW";
			h="0.390 * safezoneH";
			color[]={0.5,0.5,0.5,1};
			colorActive[]={1,1,1,1};
			action="closeDialog 0;dayz_selectRegion = 5;";
		};
	};
};
class DZ_ItemInteraction
{
	idd=6901;
	movingEnable=0;
	class controlsBackground
	{
	};
	class objects
	{
	};
	class controls
	{
	};
};
class RscTitles
{
	class Default
	{
		idd=-1;
		movingEnable=0;
		duration=4;
	};
	class playerKillScore
	{
		idd=6902;
		movingEnable=0;
		duration=5;
		name="playerKillScore";
		onLoad="uiNamespace setVariable ['DAYZ_GUI_kills', _this select 0];";
		class ControlsBackground
		{
			class RscPicture_1201: RscPictureGUI
			{
				idc=1400;
				text="\z\addons\dayz_code\gui\stats_kills_human_ca.paa";
				x="0.044687 * safezoneW + safezoneX";
				y="0.934779 * safezoneH + safezoneY";
				w=0.059999999;
				h=0.079999998;
			};
			class RscPicture_1200: RscPictureGUI
			{
				idc=1401;
				text="\z\addons\dayz_code\gui\stats_kills_zombie_ca.paa";
				x="0.044687 * safezoneW + safezoneX";
				y="0.876025 * safezoneH + safezoneY";
				w=0.059999999;
				h=0.079999998;
			};
		};
		class Controls
		{
			class RscText1: RscStructuredTextGUI
			{
				idc=1410;
				text="0";
				x="(0.044687 * safezoneW + safezoneX) - 0.01";
				y="0.934779 * safezoneH + safezoneY";
				w=0.079999998;
				h=0.079999998;
			};
			class RscText2: RscStructuredTextGUI
			{
				idc=1411;
				text="0";
				x="(0.044687 * safezoneW + safezoneX) - 0.01";
				y="0.876025 * safezoneH + safezoneY";
				w=0.079999998;
				h=0.079999998;
			};
		};
	};
	class playerStatusWaiting
	{
		idd=6901;
		movingEnable=0;
		duration=100000;
		name="playerStatusWaiting";
		onLoad="uiNamespace setVariable ['DAYZ_GUI_waiting', _this select 0];";
		class ControlsBackground
		{
			class RscText_1402: RscPicture
			{
				idc=1402;
				text="#(argb,8,8,3)color(1,1,1,1)";
				x="0.48 * safezoneW + safezoneX";
				y="0.42 * safezoneH + safezoneY";
				w="0.052 * safezoneW";
				h="0.133 * safezoneH";
				colorText[]={1,1,1,1};
			};
			class RscText_1400: RscPicture
			{
				idc=1400;
				text="#(argb,8,8,3)color(1,1,1,1)";
				x="0.48 * safezoneW + safezoneX";
				y="0.42 * safezoneH + safezoneY";
				w="0.052 * safezoneW";
				h=0;
				colorText[]={0,0,0,1};
			};
		};
		class Controls
		{
			class RscPicture_1401: RscPictureGUI
			{
				idc=1401;
				text="\z\addons\dayz_code\gui\status_waiting_ca.paa";
				x="0.434999 * safezoneW + safezoneX";
				y="0.392207 * safezoneH + safezoneY";
				w="0.141 * safezoneW";
				h="0.188013 * safezoneH";
				colorText[]={0.38,0.63,0.25999999,1};
			};
		};
	};
	class playerStatusGUI
	{
		idd=6900;
		movingEnable=0;
		duration=100000;
		name="statusBorder";
		onLoad="uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
		class ControlsBackground
		{
			class RscPicture_1200: RscPictureGUI
			{
				idc=1200;
				text="\z\addons\dayz_code\gui\status_blood_border_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.859 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1201: RscPictureGUI
			{
				idc=1201;
				text="\z\addons\dayz_code\gui\status_food_border_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.929 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1202: RscPictureGUI
			{
				idc=1202;
				text="\z\addons\dayz_code\gui\status_thirst_border_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.789 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1203: RscPictureGUI
			{
				idc=1203;
				text="\z\addons\dayz_code\gui\status_fracture_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.439 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.5};
			};
			class RscPicture_1204: RscPictureGUI
			{
				idc=1204;
				text="\z\addons\dayz_code\gui\status_connection_ca.paa";
				x="0.89 * safezoneW + safezoneX";
				y="0.439 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.30000001};
			};
			class RscPicture_1205: RscPictureGUI
			{
				idc=1205;
				text="\ori\ui\gui\ico_quest_yellow.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.369 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1206: RscPictureGUI
			{
				idc=1206;
				text="\ori\ui\gui\st_humanity_survivor.paa";
				x="0.9 * safezoneW + safezoneX";
				y="0.089 * safezoneH + safezoneY";
				w="0.037 * safezoneW";
				h="0.047 * safezoneH";
				colorText[]={1,1,1,0.69999999};
			};
			class RscPicture_1207: RscPictureGUI
			{
				idc=1207;
				text="\z\addons\dayz_code\gui\status_combat_border_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.649 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1208: RscPictureGUI
			{
				idc=1208;
				text="\z\addons\dayz_code\gui\status_temp_outside_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.719 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1209: RscPictureGUI
			{
				idc=1209;
				text="\ori\ui\gui\st_humanity_hero.paa";
				x="0.892 * safezoneW + safezoneX";
				y="0.126 * safezoneH + safezoneY";
				w="0.037 * safezoneW";
				h="0.047 * safezoneH";
				colorText[]={1,1,1,0.75};
			};
			class RscPicture_1210: RscPictureGUI
			{
				idc=1210;
				text="\ori\ui\gui\st_humanity_bandit.paa";
				x="0.909 * safezoneW + safezoneX";
				y="0.157 * safezoneH + safezoneY";
				w="0.037 * safezoneW";
				h="0.047 * safezoneH";
				colorText[]={1,1,1,0.75};
			};
			class RscPicture_1211: RscPictureGUI
			{
				idc=1211;
				text="\ori\ui\gui\zombie.paa";
				x="0.945 * safezoneW + safezoneX";
				y="0.1755 * safezoneH + safezoneY";
				w="0.037 * safezoneW";
				h="0.047 * safezoneH";
				colorText[]={1,1,1,0.75};
			};
			class RscPicture_1501: RscPictureGUI
			{
				idc=1501;
				x="0.945313 * safezoneW + safezoneX";
				y="0.95 * safezoneH + safezoneY";
				w=0.039999999;
				h=0.053332999;
			};
			class RscPicture_1502: RscPictureGUI
			{
				idc=1502;
				x="0.945313 * safezoneW + safezoneX";
				y="0.816666 * safezoneH + safezoneY";
				w=0.039999999;
				h=0.053332999;
			};
			class RscPicture_1212: RscPictureGUI
			{
				idc=1212;
				text="\ori\ui\gui\apo_weight_icon_border_ca.paa";
				x="0.96 * safezoneW + safezoneX";
				y="0.581 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1213: RscPictureGUI
			{
				idc=1213;
				text="\ori\ui\gui\apo_weight_indicator_border_ca.paa";
				x="0.944235 * safezoneW + safezoneX";
				y="0.581 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1214: RscPictureGUI
			{
				idc=1214;
				text="\ori\ui\icon_dream_stroke.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.509 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1712: RscPictureGUI
			{
				idc=1712;
				text="\ori\ui\ori_apo_bone_timer_border_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.439 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.5};
			};
		};
		class Controls
		{
			class ori_srv_logo: RscPictureGUI
			{
				idc=73173;
				text="\ori\ui\Origins_logo_ca.paa";
				x="0.005 * safezoneW + safezoneX";
				y="0.89 * safezoneH + safezoneY";
				w="0.07 * safezoneW";
				h="0.12 * safezoneH";
				colorText[]={1,1,1,0.38};
			};
			class ori_msg_w: RscStructuredText
			{
				idc=73172;
				type=13;
				style="0x00 + 16";
				text="";
				x="0.5 * safezoneW + safezoneX";
				y="0.1 * safezoneH + safezoneY";
				w="0.3 * safezoneW";
				h="0.4 * safezoneH";
				colorBackground[]={0,0,0,0};
				colorText[]={1,1,1,0};
				size=0.029999999;
				sizeEx=0.029999999;
				class Attributes
				{
					font="TahomaB";
					color="#FFFFFF";
					align="left";
					valign="middle";
					shadow=0;
					shadowColor="#ff0000";
					size="1";
				};
			};
			class RscPicture_1300: RscPictureGUI
			{
				idc=1300;
				text="\z\addons\dayz_code\gui\status_blood_inside_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.859 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
			};
			class RscPicture_1301: RscPictureGUI
			{
				idc=1301;
				text="\z\addons\dayz_code\gui\status_food_inside_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.929 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
			};
			class RscPicture_1302: RscPictureGUI
			{
				idc=1302;
				text="\z\addons\dayz_code\gui\status_thirst_inside_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.789 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
			};
			class RscPicture_1303: RscPictureGUI
			{
				idc=1303;
				text="\z\addons\dayz_code\gui\status_bleeding_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.859 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.5};
			};
			class RscPicture_1304: RscPictureGUI
			{
				idc=1304;
				text="";
				x="0.935313 * safezoneW + safezoneX";
				y="0.3 * safezoneH + safezoneY";
				w=0.059999999;
				h=0.079999998;
			};
			class RscPicture_1305: RscPictureGUI
			{
				idc=1305;
				text="";
				x="0.935313 * safezoneW + safezoneX";
				y="0.37 * safezoneH + safezoneY";
				w=0.059999999;
				h=0.079999998;
			};
			class RscPicture_1306: RscPictureGUI
			{
				idc=1306;
				text="\z\addons\dayz_code\gui\status_temp_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.719 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
			};
			class RscPicture_1307: RscPictureGUI
			{
				idc=1307;
				text="\z\addons\dayz_code\gui\status_combat_inside_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.649 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
			};
			class RscPicture_1308: RscPictureGUI
			{
				idc=1308;
				text="\ori\ui\gui\status_humanity_inside_survivor.paa";
				x="0.929 * safezoneW + safezoneX";
				y="0.08 * safezoneH + safezoneY";
				w="0.068 * safezoneW";
				h="0.088 * safezoneH";
				colorText[]={1,1,1,1};
			};
			class RscText_1309: RscTextGUIK
			{
				idc=1309;
				text="0";
				x="0.876 * safezoneW + safezoneX";
				y="0.097 * safezoneH + safezoneY";
				w="0.037 * safezoneW";
				h="0.047 * safezoneH";
				colorText[]={1,1,1,0.75};
			};
			class RscText_1310: RscTextGUIK
			{
				idc=1310;
				text="0";
				x="0.874 * safezoneW + safezoneX";
				y="0.129 * safezoneH + safezoneY";
				w="0.037 * safezoneW";
				h="0.047 * safezoneH";
				colorText[]={1,1,1,0.75};
			};
			class RscText_1311: RscTextGUIK
			{
				idc=1311;
				text="0";
				x="0.8905 * safezoneW + safezoneX";
				y="0.1672 * safezoneH + safezoneY";
				w="0.037 * safezoneW";
				h="0.047 * safezoneH";
				colorText[]={1,1,1,0.75};
			};
			class RscText_1312: RscTextGUIK
			{
				idc=1312;
				text="0";
				x="0.945 * safezoneW + safezoneX";
				y="0.203 * safezoneH + safezoneY";
				w="0.037 * safezoneW";
				h="0.047 * safezoneH";
				colorText[]={1,1,1,0.75};
			};
			class RscPicture_1313: RscPictureGUI
			{
				idc=1313;
				text="\ori\ui\gui\status_humanity_border.paa";
				x="0.929 * safezoneW + safezoneX";
				y="0.09 * safezoneH + safezoneY";
				w="0.068 * safezoneW";
				h="0.085 * safezoneH";
				colorText[]={1,1,1,0.30000001};
			};
			class RscText_1314: RscTextGUIK
			{
				idc=1314;
				text="2500";
				x="0.944 * safezoneW + safezoneX";
				y="0.14 * safezoneH + safezoneY";
				w="0.037 * safezoneW";
				h="0.047 * safezoneH";
				size=0.0275;
				sizeEx=0.0275;
				colorText[]={1,1,1,0.85000002};
			};
			class RscPicture_1315: RscPictureGUI
			{
				idc=1315;
				text="\ori\ui\gui\apo_weight_icon_ca.paa";
				x="0.96 * safezoneW + safezoneX";
				y="0.581 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.60000002};
			};
			class RscPicture_1316: RscPictureGUI
			{
				idc=1316;
				text="\ori\ui\gui\apo_weight_indicator_ca.paa";
				x="0.944235 * safezoneW + safezoneX";
				y="0.581 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.60000002};
			};
			class RscPicture_1317: RscPictureGUI
			{
				idc=1317;
				text="\ori\ui\icon_dream_1.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.509 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.69999999};
			};
			class RscPicture_1701: RscPictureGUI
			{
				idc=1701;
				x="0.945313 * safezoneW + safezoneX";
				y="0.95 * safezoneH + safezoneY";
				w=0.039999999;
				h=0.053332999;
			};
			class RscPicture_1702: RscPictureGUI
			{
				idc=1702;
				x="0.945313 * safezoneW + safezoneX";
				y="0.816666 * safezoneH + safezoneY";
				w=0.039999999;
				h=0.053332999;
			};
			class RscPicture_1703: RscPictureGUI
			{
				idc=1703;
				text="\ori\ui\ori_plus.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.929 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
			};
			class RscPicture_1704: RscPictureGUI
			{
				idc=1704;
				text="\ori\ui\ori_plus.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.789 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
			};
			class RscPicture_1705: RscPictureGUI
			{
				idc=1705;
				text="\ori\ui\ori_bolezni_1.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.859 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.40000001};
			};
			class RscPicture_1706: RscPicture_1705
			{
				idc=1706;
				text="\ori\ui\ori_bolezni_2.paa";
			};
			class RscPicture_1707: RscPicture_1705
			{
				idc=1707;
				text="\ori\ui\ori_bolezni_3.paa";
			};
			class RscPicture_1708: RscPicture_1705
			{
				idc=1708;
				text="\ori\ui\ori_bolezni_4.paa";
			};
			class RscPicture_1709: RscPicture_1705
			{
				idc=1709;
				text="\ori\ui\ori_bolezni_5.paa";
			};
			class RscPicture_1710: RscPictureGUI
			{
				idc=1710;
				text="\ori\ui\ori_plus.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.719 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.60000002};
			};
			class RscPicture_1711: RscPictureGUI
			{
				idc=1711;
				text="\ori\ui\ori_apo_bone_timer_7_ca.paa";
				x="0.954235 * safezoneW + safezoneX";
				y="0.439 * safezoneH + safezoneY";
				w="0.0435 * safezoneW";
				h="0.0535 * safezoneH";
				colorText[]={1,1,1,0.60000002};
			};
			class RscPicture_1713: RscPicture_1705
			{
				idc=1713;
				text="\ori\ui\ori_apo_blood_up_ca.paa";
			};
		};
	};
};
class RscDisplayDebriefing
{
	onLoad="ctrlActivate ((_this select 0) displayCtrl 2);";
};
class RscIGUIShortcutButton: RscShortcutButton
{
	w=0.183825;
	h=0.052287601;
	style=2;
	color[]={1,1,1,1};
	color2[]={1,1,1,0.85000002};
	colorBackground[]={1,1,1,1};
	colorbackground2[]={1,1,1,0.85000002};
	colorDisabled[]={1,1,1,0.40000001};
	class HitZone
	{
		left=0.0020000001;
		top=0.003;
		right=0.0020000001;
		bottom=0.016000001;
	};
	class ShortcutPos
	{
		left=-0.0060000001;
		top=-0.0070000002;
		w=0.039215699;
		h=0.052287601;
	};
	class TextPos
	{
		left=0.02;
		top=0;
		right=0.0020000001;
		bottom=0.016000001;
	};
	font="TahomaB";
	period=0;
	periodFocus=0;
	periodOver=0;
	animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
	animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
	animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
	animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
	animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
	animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
	class Attributes
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align="center";
		shadow=1;
	};
};
class RscGearShortcutButton: RscShortcutButton
{
	w=0.039215699;
	h=0.052287601;
	style=2;
	color[]={1,1,1,1};
	color2[]={1,1,1,0.85000002};
	colorBackground[]={1,1,1,1};
	colorbackground2[]={1,1,1,0.85000002};
	colorDisabled[]={1,1,1,0.40000001};
	class HitZone
	{
		left=0;
		top=0;
		right=0;
		bottom=0;
	};
	class ShortcutPos
	{
		left=-0.0060000001;
		top=-0.0070000002;
		w=0.039215699;
		h=0.052287601;
	};
	class TextPos
	{
		left=0.003;
		top=0.001;
		right=0;
		bottom=0;
	};
	sizeEx=0.1;
	animTextureNormal="\ori\ui\gear\igui_gear_normal_ca.paa";
	animTextureDisabled="\ori\ui\gear\igui_gear_disabled_ca.paa";
	animTextureOver="\ori\ui\gear\igui_gear_over_ca.paa";
	animTextureFocused="\ori\ui\gear\igui_gear_focus_ca.paa";
	animTexturePressed="\ori\ui\gear\igui_gear_down_ca.paa";
	animTextureDefault="\ori\ui\gear\igui_gear_normal_ca.paa";
	class Attributes
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align="center";
		shadow=0;
	};
};
class RscDisplayGear
{
	idd=106;
	enableDisplay=1;
	onUnload="[_this,'gearSync'] call handleGear;";
	class controls
	{
		class CA_Filter_Icon: RscPicture
		{
			idc=148;
			style="0x30 + 0x800";
			x=0.039999999;
			y=0.54409802;
			w=0.458;
			h=0.075000003;
			text="\ca\ui\data\igui_gear_filter_1_ca.paa";
		};
		class CA_Filter_Left_Icon: RscPicture
		{
			idc=1301;
			style="0x30 + 0x800";
			x=0.050000001;
			y=0.54509801;
			w=0.035999998;
			h=0.075000003;
			text="\ca\ui\data\arrow_left_ca.paa";
		};
		class CA_Filter_Right_Icon: RscPicture
		{
			idc=1302;
			style="0x30 + 0x800";
			x=0.45300001;
			y=0.54509801;
			w=0.035999998;
			h=0.075000003;
			text="\ca\ui\data\arrow_right_ca.paa";
		};
		class CA_Filter_Arrow_Left: RscButton
		{
			idc=150;
			colorText[]={1,1,1,0};
			colorDisabled[]={1,1,1,0};
			colorBackground[]={1,1,1,0};
			colorBackgroundDisabled[]={1,1,1,0};
			colorBackgroundActive[]={1,1,1,0};
			colorShadow[]={1,1,1,0};
			colorFocused[]={1,1,1,0};
			x=0.041000001;
			y=0.54509801;
			w=0.056000002;
			h=0.075000003;
			text="";
		};
		class CA_Filter_Arrow_Right: RscButton
		{
			idc=151;
			colorText[]={1,1,1,0};
			colorDisabled[]={1,1,1,0};
			colorBackground[]={1,1,1,0};
			colorBackgroundDisabled[]={1,1,1,0};
			colorBackgroundActive[]={1,1,1,0};
			colorShadow[]={1,1,1,0};
			colorFocused[]={1,1,1,0};
			x=0.44299999;
			y=0.54509801;
			w=0.056000002;
			h=0.075000003;
			text="";
		};
		class CA_Filter_Icon1: RscButton
		{
			idc=149;
			colorText[]={1,1,1,0};
			colorDisabled[]={1,1,1,0};
			colorBackground[]={1,1,1,0};
			colorBackgroundDisabled[]={1,1,1,0};
			colorBackgroundActive[]={1,1,1,0};
			colorShadow[]={1,1,1,0};
			colorFocused[]={1,1,1,0};
			x=0.098999999;
			y=0.54509801;
			w=0.34099999;
			h=0.072999999;
			text="";
		};
		class Gear_Title: CA_IGUI_Title
		{
			idc=1001;
			x=0.047634002;
			y=-0.0010294101;
			text="Gear";
		};
		class Unit_Title: RscText
		{
			idc=101;
			style=2;
			x=0.50241899;
			y=0.0492156;
			w=0.456;
		};
		class Available_items_Text: RscText
		{
			idc=156;
			x=0.0433014;
			y=0.052696601;
			w=0.389709;
			h=0.029412;
		};
		class CA_ItemName: Available_items_Text
		{
			idc=1101;
			x=0.041670401;
			y=0.627451;
			text="Gear of the unit:";
		};
		class CA_Money: RscText
		{
			idc=1102;
			style=1;
			show=0;
			x=-2.5040901;
			y=-2.8578401;
			w=0.228;
			text="Money:";
		};
		class CA_Money_Value: RscText
		{
			idc=1103;
			x=-2.7279401;
			y=-2.8578401;
			w=0.228;
			text="0";
		};
		class ListboxArrows: RscControlsGroup
		{
			x=0.039999999;
			y=0.089244701;
			w=0.47999999;
			h=0.449;
			idc=155;
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,1,1,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,1,1,0};
				height=0.001;
			};
			class Controls
			{
				class CA_B_Add: RscGearShortcutButton
				{
					idc=146;
					x=-2;
					style=2048;
					onSetFocus="[_this,'onFocus'] call handleGear;";
					onButtonClick="[_this,'onLBListSelChanged'] call handleGear;";
					text="&lt;";
				};
				class Available_items: RscIGUIListNBox
				{
					idc=105;
					columns[]={0.075000003,0.175,0.81,0.67000002};
					drawSideArrows=1;
					idcRight=147;
					idcLeft=146;
					colorPlayerItem[]={0.87840003,0.84710002,0.65100002,1};
					colorSelectBackground[]={0.5,0.5,0.5,1};
					colorSelectBackground2[]={0.5,0.5,0.5,1};
					onKeyDown="[_this,'onKeyDown',0,107,0,107] call handleGear;";
					onLBSelChanged="[_this,'onLBSelChanged'] call handleGear;";
					onLBListSelChanged="[_this,'onLBListSelChanged'] call handleGear;";
					onKillFocus="[_this,'onKillFocus'] call handleGear;";
					x=0;
					y=0;
					w=0.46000001;
					h=0.449;
					canDrag=1;
				};
				class CA_B_Remove: CA_B_Add
				{
					idc=147;
					x=-2;
					onSetFocus="[_this,'onFocus'] call handleGear;";
					onButtonClick="[_this,'onLBListSelChanged'] call handleGear;";
					text="&gt;";
				};
			};
		};
		class CA_CustomDescription: RscStructuredText
		{
			idc=1106;
			x=0.041496899;
			y=0.66364098;
			w=0.458;
			h=0.152;
			colorText[]={0.94999999,0.94999999,0.94999999,1};
			class Attributes
			{
				font="Zeppelin32";
				color="#F2F2F2";
				align="left";
				shadow=1;
			};
		};
		class CA_Item_Picture: RscPicture
		{
			idc=1104;
			style="0x30 + 0x800";
			x=0.330883;
			y=0.785541;
			w=0.156863;
			h=0.104575;
			text="";
		};
		class G_Interaction: RscControlsGroup
		{
			idc=6902;
			x=0.50300002;
			y="0.250 * safezoneH";
			w="0.143 * safezoneW";
			h=0;
			onMouseMoving="[_this,'gearOffMenu'] call handleGear;";
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,1,1,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,1,1,0};
				height=0.001;
			};
			class Controls
			{
				class RscButton_1600: RscButtonActionMenu
				{
					idc=1600;
					text="";
					x=0;
					y="0 * safezoneH";
				};
				class RscButton_1601: RscButtonActionMenu
				{
					idc=1601;
					text="";
					x=0;
					y="0.025 * safezoneH";
				};
				class RscButton_1602: RscButtonActionMenu
				{
					idc=1602;
					text="";
					x=0;
					y="0.05 * safezoneH";
				};
				class RscButton_1603: RscButtonActionMenu
				{
					idc=1603;
					text="";
					x=0;
					y="0.075 * safezoneH";
				};
				class RscButton_1604: RscButtonActionMenu
				{
					idc=1604;
					text="";
					x=0;
					y="0.1 * safezoneH";
				};
				class RscButton_1605: RscButtonActionMenu
				{
					idc=1605;
					text="";
					x=0;
					y="0.125 * safezoneH";
				};
				class RscButton_1606: RscButtonActionMenu
				{
					idc=1606;
					text="";
					x=0;
					y="0.15 * safezoneH";
				};
				class RscButton_1607: RscButtonActionMenu
				{
					idc=1607;
					text="";
					x=0;
					y="0.175 * safezoneH";
				};
				class RscButton_1608: RscButtonActionMenu
				{
					idc=1608;
					text="";
					x=0;
					y="0.2 * safezoneH";
				};
				class RscButton_1609: RscButtonActionMenu
				{
					idc=1609;
					text="";
					x=0;
					y="0.225 * safezoneH";
				};
			};
		};
		class G_GearItems: RscControlsGroup
		{
			idc=160;
			x=0.50199997;
			y=0.090000004;
			w=0.463;
			h=0.77600002;
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,1,1,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,1,1,0};
				height=0.001;
			};
			class Controls
			{
				class CA_Gear_slot_primary: RscActiveText
				{
					idc=107;
					x="0.502 - 0.502";
					y="0.244 - 0.09";
					w=0.17200001;
					h=0.15099999;
					style="0x30 + 0x800";
					onMouseButtonDown="[_this,'selectSlot'] call handleGear;";
					soundDoubleClick[]=
					{
						"",
						0.1,
						1
					};
					color[]={1,1,1,1};
					colorBackground[]={0.68000001,0.68000001,0.68000001,0.75};
					colorBackgroundSelected[]={0.68000001,0.68000001,0.68000001,0.75};
					colorFocused[]={0,0,0,0};
					canDrag=1;
				};
				class CA_Gear_slot_secondary: CA_Gear_slot_primary
				{
					idc=108;
					x="0.6763 - 0.502";
					y="0.398 - 0.09";
					w=0.1117;
					h=0.15000001;
				};
				class CA_Gear_slot_item1: CA_Gear_slot_primary
				{
					idc=109;
					x="0.790 - 0.502";
					y="0.244 - 0.09";
					w=0.055;
					h=0.074000001;
				};
				class CA_Gear_slot_item2: CA_Gear_slot_item1
				{
					idc=110;
					x="0.847 - 0.502";
					y="0.244 - 0.09";
				};
				class CA_Gear_slot_item3: CA_Gear_slot_item1
				{
					idc=111;
					x="0.904366 - 0.502";
					y="0.244 - 0.09";
				};
				class CA_Gear_slot_item4: CA_Gear_slot_item1
				{
					idc=112;
					x="0.790 - 0.502";
					y="0.321 - 0.09";
				};
				class CA_Gear_slot_item5: CA_Gear_slot_item1
				{
					idc=113;
					x="0.847 - 0.502";
					y="0.321 - 0.09";
				};
				class CA_Gear_slot_item6: CA_Gear_slot_item1
				{
					idc=114;
					x="0.904366 - 0.502";
					y="0.321 - 0.09";
				};
				class CA_Gear_slot_item7: CA_Gear_slot_item1
				{
					idc=115;
					x="0.790 - 0.502";
					y="0.398 - 0.09";
				};
				class CA_Gear_slot_item8: CA_Gear_slot_item7
				{
					idc=116;
					x="0.847 - 0.502";
					y="0.398 - 0.09";
				};
				class CA_Gear_slot_item9: CA_Gear_slot_item7
				{
					idc=117;
					x="0.904366 - 0.502";
					y="0.398 - 0.09";
				};
				class CA_Gear_slot_item10: CA_Gear_slot_item7
				{
					idc=118;
					x="0.790 - 0.502";
					y="0.474 - 0.09";
				};
				class CA_Gear_slot_item11: CA_Gear_slot_item7
				{
					idc=119;
					x="0.847 - 0.502";
					y="0.474 - 0.09";
				};
				class CA_Gear_slot_item12: CA_Gear_slot_item7
				{
					idc=120;
					x="0.904366 - 0.502";
					y="0.474 - 0.09";
				};
				class CA_Gear_slot_handgun: CA_Gear_slot_primary
				{
					idc=121;
					x="0.560 - 0.502";
					y="0.551 - 0.09";
					w=0.113;
					h=0.15000001;
				};
				class CA_Gear_slot_handgun_item1: CA_Gear_slot_item1
				{
					idc=122;
					x="0.676 - 0.502";
					y="0.551 - 0.09";
					w=0.055;
					h=0.074000001;
				};
				class CA_Gear_slot_handgun_item2: CA_Gear_slot_handgun_item1
				{
					idc=123;
					x="0.733 - 0.502";
					y="0.551 - 0.09";
				};
				class CA_Gear_slot_handgun_item3: CA_Gear_slot_handgun_item1
				{
					idc=124;
					x="0.790 - 0.502";
				};
				class CA_Gear_slot_handgun_item4: CA_Gear_slot_handgun_item1
				{
					idc=125;
					x="0.847 - 0.502";
				};
				class CA_Gear_slot_handgun_item5: CA_Gear_slot_handgun_item1
				{
					idc=126;
					x="0.676 - 0.502";
					y="0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item6: CA_Gear_slot_handgun_item5
				{
					idc=127;
					x="0.733 - 0.502";
					y="0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item7: CA_Gear_slot_handgun_item5
				{
					idc=128;
					x="0.790 - 0.502";
					y="0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item8: CA_Gear_slot_handgun_item5
				{
					idc=129;
					x="0.847 - 0.502";
					y="0.628 - 0.09";
				};
				class CA_Gear_slot_special1: CA_Gear_slot_item1
				{
					idc=130;
					x="0.502 - 0.502";
					y="0.09 - 0.09";
					w=0.113;
					h=0.15000001;
				};
				class CA_Gear_slot_special2: CA_Gear_slot_special1
				{
					idc=131;
					x="0.847 - 0.502";
					y="0.09 - 0.09";
					w=0.113;
					h=0.15000001;
				};
				class CA_Gear_slot_inventory1: CA_Gear_slot_special1
				{
					idc=134;
					x="0.560 - 0.502";
					y="0.705 - 0.09";
					w=0.055;
					h=0.074000001;
				};
				class CA_Gear_slot_inventory2: CA_Gear_slot_inventory1
				{
					idc=135;
					x="0.6175 - 0.502";
					y="0.705 - 0.09";
				};
				class CA_Gear_slot_inventory3: CA_Gear_slot_inventory1
				{
					idc=136;
					x="0.676 - 0.502";
					y="0.705 - 0.09";
				};
				class CA_Gear_slot_inventory4: CA_Gear_slot_inventory1
				{
					idc=137;
					x="0.733 - 0.502";
					y="0.705 - 0.09";
				};
				class CA_Gear_slot_inventory5: CA_Gear_slot_inventory1
				{
					idc=138;
					x="0.790 - 0.502";
					y="0.705 - 0.09";
				};
				class CA_Gear_slot_inventory6: CA_Gear_slot_inventory1
				{
					idc=139;
					x="0.847 - 0.502";
					y="0.705 - 0.09";
				};
				class CA_Gear_slot_inventory7: CA_Gear_slot_inventory1
				{
					idc=140;
					x="0.560 - 0.502";
					y="0.782 - 0.09";
				};
				class CA_Gear_slot_inventory8: CA_Gear_slot_inventory7
				{
					idc=141;
					x="0.6175 - 0.502";
					y="0.782 - 0.09";
				};
				class CA_Gear_slot_inventory9: CA_Gear_slot_inventory7
				{
					idc=142;
					x="0.676 - 0.502";
					y="0.782 - 0.09";
				};
				class CA_Gear_slot_inventory10: CA_Gear_slot_inventory7
				{
					idc=143;
					x="0.733 - 0.502";
					y="0.782 - 0.09";
				};
				class CA_Gear_slot_inventory11: CA_Gear_slot_inventory7
				{
					idc=144;
					x="0.790 - 0.502";
					y="0.782 - 0.09";
				};
				class CA_Gear_slot_inventory12: CA_Gear_slot_inventory7
				{
					idc=145;
					x="0.847 - 0.502";
					y="0.782 - 0.09";
				};
				class CA_Gear_slot_inventory13: CA_Gear_slot_inventory7
				{
					idc=1122;
					x=10.1;
					y=10.1;
				};
				class bSmena1: RscActiveText
				{
					idc=510;
					style="0x30 + 0x800";
					text="\ori\ui\gear\ui_arrow_normal2_ca.paa";
					x="0.502 - 0.502";
					y="0.39 - 0.09";
					w=0.1735;
					h=0.045000002;
					color[]={1,1,1,0.5};
					colorActive[]={1,1,1,0.80000001};
					onMouseButtonDown="[_this,'selectSlot'] call handleGear;";
				};
				class CA_Gear_slot_shouder: RscActiveText
				{
					idc=511;
					style="0x30 + 0x800";
					x="0.502 - 0.502";
					y="0.43 - 0.09";
					w=0.17299999;
					h=0.119;
					color[]={1,1,1,0.81999999};
					colorActive[]={1,1,1,0.81999999};
				};
				class OriMedB: RscActiveText
				{
					idc=512;
					style="0x30 + 0x800";
					text="";
					x="0.502 - 0.502";
					y="0.552 - 0.09";
					w=0.055;
					h=0.15000001;
					color[]={1,1,1,0.69999999};
					colorActive[]={1,1,1,0.89999998};
					onMouseButtonDown="[_this,'selectSlot'] call handleGear;";
				};
				class OriVest: CA_Gear_slot_primary
				{
					idc=513;
					style="0x30 + 0x800";
					text="";
					x="0.678 - 0.502";
					y="0.245 - 0.09";
					w=0.109;
					h=0.15000001;
					color[]={1,1,1,0.5};
					colorActive[]={1,1,1,0.80000001};
					onMouseButtonDown="[_this,'selectSlot'] call handleGear;";
				};
				class OriMechB: RscActiveText
				{
					idc=85023;
					style="0x30 + 0x800";
					text="";
					x="0.502 - 0.502";
					y="0.705 - 0.09";
					w=0.055;
					h=0.15000001;
					color[]={1,1,1,0.69999999};
					colorActive[]={1,1,1,0.89999998};
					onMouseButtonDown="[_this,'selectSlot'] call handleGear;";
				};
			};
		};
		class G_sMedBItems: RscControlsGroup
		{
			idc=514;
			x=0.977;
			y=0.47299999;
			w=0.056000002;
			h=0.57599998;
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,1,1,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,1,1,0};
				height=0.001;
			};
			class Controls
			{
				class OriMedB_slide1: RscActiveText
				{
					idc=515;
					style="0x30 + 0x800";
					text="";
					x="0";
					y="0";
					w=0.056000002;
					h=0.075999998;
					color[]={1,1,1,0.80000001};
					colorActive[]={1,1,1,0.89999998};
					onMouseButtonDown="[_this,'selectSlot'] call handleGear;";
					canDrag=1;
				};
				class OriMedB_slide2: OriMedB_slide1
				{
					idc=516;
					y="0.076";
				};
				class OriMedB_slide3: OriMedB_slide1
				{
					idc=517;
					y="0.152";
				};
				class OriMedB_slide4: OriMedB_slide1
				{
					idc=518;
					y="0.228";
				};
				class OriMedB_slide5: OriMedB_slide1
				{
					idc=519;
					y="0.304";
				};
				class OriMedB_slide6: OriMedB_slide1
				{
					idc=520;
					y="0.381";
				};
			};
		};
		class G_sMechBItems: RscControlsGroup
		{
			idc=85025;
			x=0.977;
			y=0.47299999;
			w=0.056000002;
			h=0.57599998;
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,1,1,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,1,1,0};
				height=0.001;
			};
			class Controls
			{
				class OriMechB_slide1: RscActiveText
				{
					idc=85026;
					style="0x30 + 0x800";
					text="";
					x="0";
					y="0";
					w=0.056000002;
					h=0.075999998;
					color[]={1,1,1,0.80000001};
					colorActive[]={1,1,1,0.89999998};
					onMouseButtonDown="[_this,'selectSlot'] call handleGear;";
					canDrag=1;
				};
				class OriMechB_slide2: OriMechB_slide1
				{
					idc=85027;
					y="0.076";
				};
				class OriMechB_slide3: OriMechB_slide1
				{
					idc=85028;
					y="0.152";
				};
				class OriMechB_slide4: OriMechB_slide1
				{
					idc=85029;
					y="0.228";
				};
				class OriMechB_slide5: OriMechB_slide1
				{
					idc=85030;
					y="0.304";
				};
				class OriMechB_slide6: OriMechB_slide1
				{
					idc=85031;
					y="0.381";
				};
			};
		};
		class BagItemsGroup: RscControlsGroup
		{
			x=0.50199997;
			y=0.090000004;
			w=0.463;
			h=0.77600002;
			idc=159;
			magW=0.055;
			magH=0.074000001;
			weaponW=0.226;
			weaponH=0.15000001;
			gunW=0.113;
			gunH=0.15000001;
			spacing=0.0020000001;
			text="";
			color[]={1,1,1,1};
			colorBackground[]={1,1,1,1};
			colorBackgroundSelected[]={1,1,1,1};
			colorFocused[]={1,1,1,1};
			soundPush[]=
			{
				"",
				0.1,
				1
			};
			soundClick[]=
			{
				"",
				0.1,
				1
			};
			soundDoubleClick[]=
			{
				"",
				0.1,
				1
			};
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,1,1,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,1,1,0};
				height=0.001;
			};
			class ScrollBar
			{
				color[]={1,1,1,0.60000002};
				colorActive[]={1,1,1,1};
				colorDisabled[]={1,1,1,0.30000001};
				thumb="\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull="\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty="\ca\ui\data\ui_arrow_top_ca.paa";
				border="\ca\ui\data\ui_border_scroll_ca.paa";
			};
			class Controls
			{
			};
		};
		class Break_7: RscLineBreak
		{
		};
		class ButtonFilters: RscIGUIShortcutButton
		{
			idc=148;
			shortcuts[]=
			{
				"0x00050000 + 3"
			};
			x=0.333336;
			y=0.89130002;
			text="Filter";
		};
		class ButtonRearm: RscIGUIShortcutButton
		{
			idc=132;
			shortcuts[]=
			{
				"0x00050000 + 2"
			};
			x=0.55474299;
			y=0.89130002;
			w=0;
			h=0;
			text="Rearm";
		};
		class ButtonOpenBag: RscIGUIShortcutButton
		{
			idc=157;
			shortcuts[]=
			{
				"0x00050000 + 2"
			};
			x=0.55474299;
			y=0.89130002;
			text="Open bag";
		};
		class ButtonCloseBag: RscIGUIShortcutButton
		{
			idc=158;
			shortcuts[]=
			{
				"0x00050000 + 2"
			};
			x=0.55474299;
			y=0.89130002;
			text="Close bag";
		};
		class ButtonContinue: RscIGUIShortcutButton
		{
			idc=1;
			shortcuts[]=
			{
				"0x00050000 + 0",
				28,
				57,
				156
			};
			x=0.76615;
			y=0.89130002;
			default=1;
		};
		class ButtonClose: RscIGUIShortcutButton
		{
			idc=2;
			shortcuts[]=
			{
				"0x00050000 + 1"
			};
			x=0.046;
			y=0.89109999;
			text="Close";
		};
	};
	class Filters
	{
		class All
		{
			name="All";
			mask=-1;
			image="\ori\ui\gear\igui_gear_filter_1_ca.paa";
		};
		class Primary
		{
			name="Primary";
			mask=769;
			image="\ori\ui\gear\igui_gear_filter_2_ca.paa";
		};
		class Secondary
		{
			name="Secondary";
			mask=516;
			image="\ori\ui\gear\igui_gear_filter_3_ca.paa";
		};
		class HandGun
		{
			name="HandGun";
			mask=18;
			image="\ori\ui\gear\igui_gear_filter_4_ca.paa";
		};
		class Items
		{
			name="Items";
			mask=135168;
			image="\ori\ui\gear\igui_gear_filter_5_ca.paa";
		};
	};
	movingEnable=1;
	emptyGun="\ori\ui\gear\ui_gear_gun_gs_ca.paa";
	emptySec="\ori\ui\gear\ui_gear_sec_gs_small_ca.paa";
	emptyEq="\ori\ui\gear\ui_gear_eq_gs_ca.paa";
	emptyMag="\ori\ui\gear\ui_gear_mag_gs_ca.paa";
	emptyMag2="\ori\ui\gear\ui_gear_mag2_gs_ca.paa";
	emptyHGun="\ori\ui\gear\ui_gear_hgun_gs_ca.paa";
	emptyHGunMag="\ori\ui\gear\ui_gear_hgunmag_gs_ca.paa";
	onLoad="[_this,'initDialog'] call handleGear;";
	class ControlsBackground
	{
		class Mainback: RscPicture
		{
			idc=1005;
			x=0.039999999;
			y=0.0099999998;
			w=1.2549;
			h=1.6732;
			moving=1;
			text="\ori\ui\gear\igui_background_gear_ca.paa";
		};
		class Ori_slot_bkW_bg: RscPicture
		{
			idc=85011;
			x="0.502";
			y="0.43";
			w=0.17299999;
			h=0.119;
			text="";
		};
		class Ori_slot_vestH_bg: RscPicture
		{
			idc=85012;
			x="0.676";
			y="0.093";
			w=0.112;
			h=0.1455;
			text="\ori\ui\gear\ui_gear_helmet_ca.paa";
			colorText[]={0.88,0.88,0.88,0.60000002};
		};
		class CA_Gear_slot_vest_bg: RscPicture
		{
			idc=85013;
			x="0.677";
			y="0.2445";
			w=0.111;
			h=0.152;
			text="";
		};
		class CA_Gear_slot_vest2_bg: RscPicture
		{
			idc=85014;
			x="0.781";
			y="0.246";
			w=0.003;
			h=0.15000001;
			text="";
		};
		class CA_Gear_slot_medb_bg: RscPicture
		{
			idc=85015;
			x="0.503";
			y="0.552";
			w=0.055;
			h=0.15000001;
			text="";
		};
		class CA_Gear_slot_medbs_bg: RscPicture
		{
			idc=85016;
			x="0.965";
			y="0.397";
			w=0.071999997;
			h=0.537;
			text="";
		};
		class CA_Gear_slot_medbs1_bg: RscPicture
		{
			idc=85017;
			x="0.977";
			y="0.4736";
			w=0.055;
			h=0.072999999;
			text="";
		};
		class CA_Gear_slot_medbs2_bg: CA_Gear_slot_medbs1_bg
		{
			idc=85018;
			y="0.5498";
		};
		class CA_Gear_slot_medbs3_bg: CA_Gear_slot_medbs1_bg
		{
			idc=85019;
			y="0.6258";
		};
		class CA_Gear_slot_medbs4_bg: CA_Gear_slot_medbs1_bg
		{
			idc=85020;
			y="0.7018";
		};
		class CA_Gear_slot_medbs5_bg: CA_Gear_slot_medbs1_bg
		{
			idc=85021;
			y="0.7780";
		};
		class CA_Gear_slot_medbs6_bg: CA_Gear_slot_medbs1_bg
		{
			idc=85022;
			y="0.8548";
		};
		class CA_Gear_slot_mechb_bg: RscPicture
		{
			idc=85024;
			x="0.503";
			y="0.705";
			w=0.055;
			h=0.15000001;
			text="";
		};
	};
};
class RscShortcutButtonMainOri: RscShortcutButton
{
	idc=-1;
	style=0;
	default=0;
	w=0.3137255;
	h=0.1045752;
	color[]={0.87840003,0.84710002,0.65100002,1};
	colorDisabled[]={1,1,1,0.25};
	class HitZone
	{
		left=0;
		top=0;
		right=0;
		bottom=0;
	};
	class ShortcutPos
	{
		left=0.020400001;
		top=0.026000001;
		w=0.039215699;
		h=0.052287601;
	};
	class TextPos
	{
		left=0.079999998;
		top=0.034000002;
		right=0.0049999999;
		bottom=0.0049999999;
	};
	animTextureNormal="\ori\ui\ui_knopka_menu_normal_ca.paa";
	animTextureDisabled="\ori\ui\ui_knopka_menu_disabled_ca.paa";
	animTextureOver="\ori\ui\ui_knopka_menu_over_ca.paa";
	animTextureFocused="\ori\ui\ui_knopka_menu_focus_ca.paa";
	animTexturePressed="\ori\ui\ui_knopka_menu_down_ca.paa";
	animTextureDefault="\ori\ui\ui_knopka_menu_normal_ca.paa";
	period=0.5;
	font="Zeppelin32";
	size=0.039209999;
	sizeEx=0.039209999;
	text="";
	soundEnter[]=
	{
		"\ca\ui\data\sound\onover",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\ca\ui\data\sound\new1",
		0,
		0
	};
	soundClick[]=
	{
		"\ca\ui\data\sound\onclick",
		0.07,
		1
	};
	soundEscape[]=
	{
		"\ca\ui\data\sound\onescape",
		0.090000004,
		1
	};
	action="";
	class Attributes
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align="left";
		shadow=0;
	};
	class AttributesImage
	{
		font="Zeppelin32";
		color="#E5E5E5";
		align=0;
	};
};
class RscDisplayMPInterrupt: RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback: RscPicture
		{
			text="\ori\ui\ui_menu_fon_ca.paa";
		};
		class ORI_Logo: RscPictureKeepAspect
		{
			x=0.057999998;
			y=0.403;
			w=0.30000001;
			h=0.30000001;
			text="\ori\ui\origins_logo_ca.paa";
		};
	};
	class controls
	{
		delete CA_B_REVERT;
		delete CA_B_Respawn;
		class CA_B_SAVE: RscShortcutButtonMainOri
		{
			onButtonClick="";
			text="";
		};
		class CA_B_Skip: CA_B_SAVE
		{
			onButtonClick="";
			text="";
		};
		class CA_B_Options: CA_B_SAVE
		{
			y="0.2537 + 0.101903 * 0";
		};
		class CA_B_Abort: CA_B_SAVE
		{
			y="0.2537 + 0.101903 * 1";
			w=0.0031372551;
			h=0.001045752;
		};
		class Paused_Title: CA_Title
		{
			colorText[]={0.94999999,0.94999999,0.94999999,0.69999999};
		};
		class MissionTitle: RscText
		{
			colorText[]={0.94999999,0.94999999,0.94999999,0.69999999};
		};
		class DifficultyTitle: RscText
		{
			colorText[]={0.94999999,0.94999999,0.94999999,0.69999999};
		};
		class ButtonCancel: RscShortcutButton
		{
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_over_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_focus_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			x=0.17749999;
			y=0.87989998;
			w=0.153825;
			h=0.079999998;
			period=0;
			class TextPos
			{
				left=0.045000002;
				top=0.0099999998;
				right=0.0049999999;
				bottom=0.0049999999;
			};
		};
	};
};
class RscDisplayDSinterface: RscStandardDisplay
{
	onLoad="ctrlActivate ((_this select 0) displayCtrl 2);";
};
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	class controlsBackground
	{
		delete SidesBack;
		delete SidesBorder;
		delete ValueRolesBack;
		delete ValueRolesBorder;
		class TextBack: RscPicture
		{
			x="SafeZoneX";
			y="SafeZoneY";
			w="SafeZoneW";
			h="SafeZoneH";
			colorbackground[]={0,0,0,1};
			text="\ori\ui\fon_co.paa";
		};
		delete MP_roles_TitleBorder;
		class MP_roles_TitleBorder_Ori: RscPicture
		{
			colorbackground[]={0,0,0,0};
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(02/100) * SafeZoneH + SafeZoneY";
			w="(96/100) * SafeZoneW";
			h="(06/100) * SafeZoneH";
			text="\ori\ui\mp_topfon.paa";
		};
		class Origins_Slogo: RscPictureKeepAspect
		{
			x="(0.7/100) * SafeZoneW + SafeZoneX";
			y="(0.1/100) * SafeZoneH + SafeZoneY";
			w="(10/100) * SafeZoneW";
			h="(7.5/100) * SafeZoneH";
			text="\ori\ui\origins_logo_ca.paa";
		};
		delete TextBorder;
		delete TextBack1;
		class ValuePoolBack: RscText
		{
			x="(20/100) * SafeZoneW + SafeZoneX";
			y="(12.5/100) * SafeZoneH + SafeZoneY";
			w="(78/100) * SafeZoneW";
			h="(76/100) * SafeZoneH";
			colorBackground[]={0.42352,0.42352,0.42352,0.43000001};
		};
		class ValuePoolBorder: RscText
		{
			style=64;
			colorText[]={0,0,0,1};
			x="(20/100) * SafeZoneW + SafeZoneX";
			y="(12.5/100) * SafeZoneH + SafeZoneY";
			w="(78/100) * SafeZoneW";
			h="(76/100) * SafeZoneH";
		};
	};
	class controls
	{
		delete CA_B_East;
		delete CA_B_Guerrila;
		delete CA_B_Civilian;
		delete CA_ValueRoles;
		delete CA_B_DSinterface;
		delete TextMission;
		delete ValueMission;
		delete TextIsland;
		delete ValueIsland;
		delete CA_TextDescription;
		delete CA_ValueDescription;
		class TextSide: RscText
		{
			y="(9.5/100) * SafeZoneH + SafeZoneY";
		};
		class TextPool: RscText
		{
			style=0;
			x="(20/100) * SafeZoneW + SafeZoneX";
			y="(9.5/100) * SafeZoneH + SafeZoneY";
		};
		class CA_MP_roles_Title: CA_Title
		{
			idc=1001;
			style=2;
			x="(02/100) * SafeZoneW + SafeZoneX";
			y="(02/100) * SafeZoneH + SafeZoneY";
			w="(96/100) * SafeZoneW";
			h="(06/100) * SafeZoneH";
			font="TahomaB";
			sizeEx=0.059065361;
			colorText[]={0,0,0,0.89999998};
			colorBackground[]=
			{
				"49/255",
				"36/255",
				"25/255",
				"0/255"
			};
			text="$STR_DISP_MPSETUP_TITLE";
		};
		class OriginsSurv: RscPictureKeepAspect
		{
			w="(12.7/100) * SafeZoneW";
			h="(12.7/100) * SafeZoneH";
			x="(4.15/100) * SafeZoneW + SafeZoneX";
			y="(15/100) * SafeZoneH + SafeZoneY";
			text="\ori\ui\flag_origins_ca.paa";
		};
		delete CA_B_West;
		class CA_B_WestOri: RscActiveText
		{
			x="(4.15/100) * SafeZoneW + SafeZoneX";
			y="(15/100) * SafeZoneH + SafeZoneY";
			w="(12.7/100) * SafeZoneW";
			h="(8/100) * SafeZoneH";
			style="0x02 + 0x100 + 0x40";
			type=11;
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.15000001};
			colorShade[]={1,1,1,1};
			colorText[]={1,1,1,1};
			pictureWidth=1;
			pictureHeight=1;
			textHeight=0.34999999;
			sideDisabled="ori\ui\flag_origins_pustoj_ca.paa";
			sideToggle="ori\ui\flag_origins_pustoj_ca.paa";
			idc=104;
			color[]={1,1,1,1};
			text="SURVIVORS";
			picture="\ori\ui\flag_origins_pustoj_ca.paa";
		};
		class CA_ValuePool: RscIGUIListBox
		{
			x="(20/100) * SafeZoneW + SafeZoneX";
			y="(12.5/100) * SafeZoneH + SafeZoneY";
			w="(78/100) * SafeZoneW";
			h="(72/100) * SafeZoneH";
			rows=25;
			canDrag=0;
		};
		class CA_ButtonContinue: RscShortcutButton
		{
			idc=1;
			default=1;
			shortcuts[]=
			{
				"0x00050000+0",
				28,
				57,
				156
			};
			x="(83/100) * SafeZoneW + SafeZoneX";
			y="(93/100) * SafeZoneH + SafeZoneY";
			text="$STR_DISP_OK";
			font="TahomaB";
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			h=0.07;
			class TextPos
			{
				left=0.07;
				top=0.0070000002;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0040000002;
				top=0.0040000002;
				right=0.0040000002;
				bottom=0.0040000002;
			};
		};
		class CA_ButtonCancel: RscShortcutButton
		{
			idc=2;
			default=0;
			shortcuts[]=
			{
				"0x00050000+1"
			};
			x="(68/100) * SafeZoneW + SafeZoneX";
			y="(93/100) * SafeZoneH + SafeZoneY";
			w=0.203825;
			text="$STR_DISP_BACK";
			font="TahomaB";
			period=0;
			periodFocus=0;
			periodOver=0;
			animTextureNormal="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureDisabled="\ori\ui\esc_knopka_normal_ca.paa";
			animTextureOver="\ori\ui\esc_knopka_focus_ca.paa";
			animTextureFocused="\ori\ui\esc_knopka_default_ca.paa";
			animTexturePressed="\ori\ui\esc_knopka_down_ca.paa";
			animTextureDefault="\ori\ui\esc_knopka_default_ca.paa";
			h=0.07;
			class TextPos
			{
				left=0.050000001;
				top=0.0070000002;
				right=0.0049999999;
				bottom=0.0049999999;
			};
			class HitZone
			{
				left=0.0040000002;
				top=0.0040000002;
				right=0.0040000002;
				bottom=0.0040000002;
			};
		};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Animal;
	class Pastor;
	class Fin;
	class DZAnimal: Animal
	{
		scope=0;
		side=1;
		accuracy=0.25;
		boneHead="head";
		bonePrimaryWeapon="head";
		triggerAnim="";
		picture="";
		icon="\Ca\animals2\data\mapicon_animals_ca.paa";
		mapSize=10;
		weaponSlots=0;
		fsmFormation="";
		fsmDanger="";
		agentTasks[]={};
		moves="CfgMovesAnimal";
		memoryPointHeadAxis="head_axis";
		woman=0;
		faceType="Default";
		boneLEye="l_eye";
		boneREye="r_eye";
		boneLEyelidUp="eye_upl";
		boneREyelidUp="eye_upr";
		boneLEyelidDown="eye_lwl";
		boneREyelidDown="eye_lwr";
		boneLPupil="l_pupila";
		boneRPupil="r_pupila";
		memoryPointAim="aimPoint";
		memoryPointCameraTarget="camera";
		extCameraPosition[]={0,0.5,-2.5};
		class EventHandlers
		{
		};
		class Wounds
		{
			tex[]={};
			mat[]={};
		};
		class VariablesScalar
		{
		};
		class VariablesString
		{
		};
	};
	class DZ_Pastor: Pastor
	{
		scope=2;
		model="\ca\animals2\Dogs\Pastor\Pastor";
		displayName="Alsatian";
		moves="CfgMovesDogDZ";
		gestures="CfgGesturesDogDZ";
		fsmDanger="";
		fsmFormation="";
	};
	class DZ_Fin: Fin
	{
		scope=2;
		model="\ca\animals2\Dogs\Fin\Fin";
		displayName="Fin";
		moves="CfgMovesDogDZ";
		gestures="CfgGesturesDogDZ";
		fsmDanger="";
		fsmFormation="";
	};
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class UH1Wreck_Ori: House
	{
		scope=1;
		faction="rth_copter_class";
		model="\ori\wrecks\uh1wreck_Ori.p3d";
		icon="\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize=15;
		displayName="Crashed UH-1Y";
		vehicleClass="Wrecks";
	};
	class Strategic;
	class NonStrategic;
	class Land_A_FuelStation_Feed: Strategic
	{
		model="\ca\structures\House\A_FuelStation\A_FuelStation_Feed";
		transportFuel=0;
		nameSound="fuelstation";
	};
	class Land_Ind_MalyKomin: House
	{
		scope=1;
		armor=100;
		featureSize=40;
		model="\Ca\buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\ca\Buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin_ruins";
				position="";
				intensity=1;
				interval=0.050000001;
				lifeTime=1;
			};
		};
		ladders[]=
		{
			
			{
				"start",
				"end"
			}
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class Land_Rail_Semafor: House
	{
		scope=1;
		model="\CA\Structures\Rail\Rail_Misc\rail_Semafor";
		destrType="DestructTree";
		class MarkerLights
		{
			class GreenStill
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class Land_Rail_Zavora: House
	{
		scope=1;
		model="\CA\Structures\Rail\Rail_Misc\rail_Zavora";
		destrType="DestructTree";
		class MarkerLights
		{
			class WhiteBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class Land_majak: House
	{
		scope=1;
		model="\ca\buildings\majak";
		displayName="Lighthouse";
		animated=1;
		ladders[]=
		{
			
			{
				"start",
				"end"
			}
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\ca\buildings\ruins\majak_ruins.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		armor=1000;
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
		class Reflectors
		{
			class MainLight
			{
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				position="";
				direction="";
				hitpoint="";
				selection="";
				size=0;
				brightness=0;
				period[]={0,1};
			};
		};
	};
	class Land_majak2: Land_majak
	{
		model="\ca\buildings\majak2";
		class Reflectors
		{
			class MainLight
			{
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				position="";
				direction="";
				hitpoint="";
				selection="";
				size=0;
				brightness=0;
				period[]={0,1};
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\ca\buildings\ruins\majak_ruins.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class Land_Vysilac_FM: House
	{
		scope=1;
		armor=150;
		destrType="DestructBuilding";
		ladders[]=
		{
			
			{
				"start",
				"end"
			}
		};
		model="\ca\buildings\Vysilac_FM";
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
		class Destruction
		{
			animations[]=
			{
				
				{
					"ca\buildings\rtm\vysilac_fm.rtm",
					0.5,
					3
				}
			};
		};
		displayName="Radio 1";
	};
	class Land_telek1: House
	{
		scope=1;
		armor=600;
		destrType="DestructBuilding";
		model="\ca\buildings\telek1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\ca\buildings\ruins\telek1_ruins.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
		displayName="Telek 1";
		ladders[]=
		{
			
			{
				"start1",
				"end1"
			},
			
			{
				"start2",
				"end2"
			},
			
			{
				"start3",
				"end3"
			}
		};
	};
	class Land_komin: House
	{
		ladders[]=
		{
			
			{
				"start",
				"end"
			}
		};
		model="\ca\buildings\komin";
		armor=300;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\ca\buildings\ruins\komin_ruins.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class Land_Stoplight01: House
	{
		scope=1;
		model="\ca\buildings\Misc\stoplight01";
		armor=50;
		class MarkerLights
		{
			class YellowTopBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
			class YellowLowBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class Land_Stoplight02: Land_Stoplight01
	{
		model="\ca\buildings\Misc\stoplight02";
		class MarkerLights
		{
			class YellowTopBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class Land_NavigLight: House
	{
		scope=1;
		displayName="";
		model="\ca\buildings\Misc\NavigLight";
		armor=50;
		class MarkerLights
		{
			class WhiteStill
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class Land_runway_edgelight: House
	{
		scope=1;
		displayName="";
		model="\ca\buildings\Misc\runway_edgelight";
		armor=20;
		class MarkerLights
		{
			class RedStill
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class Land_VASICore: NonStrategic
	{
		scope=1;
		animated=0;
		reversed=0;
		vehicleClass="Objects";
		icon="";
		model="";
		displayName="VASI";
		accuracy=0.2;
		typicalCargo[]={};
		destrType="DestructBuilding";
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		cost=0;
		armor=100;
		mapSize=6.4000001;
		simulation="house";
	};
	class Land_HouseB_Tenement: House
	{
		armor=180;
		model="\Ca\Structures\House\HouseBT\HouseB_Tenement";
		scope=1;
		featureSize=50;
		class HitPoints
		{
			class Hit1
			{
				armor=0.15000001;
				material=-1;
				name="dam 1";
				visual="damT1";
				passThrough=0;
				convexComponent="dam 1";
				class DestructionEffects
				{
					class Dust
					{
						simulation="particles";
						type="HousePartDust";
						position="";
						intensity=1;
						interval=1;
						lifeTime=0.0099999998;
					};
					class Dust2: Dust
					{
						type="HousePartDustLong";
					};
					class Walls: Dust
					{
						type="HousePartWall";
					};
				};
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
		class AnimationSources
		{
			class Lights_1
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Lights_2: Lights_1
			{
			};
		};
	};
	class Land_Mil_ControlTower: House
	{
		scope=1;
		armor=400;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\Ca\Structures\Mil\Mil_ControlTower_ruins.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		class HitPoints
		{
			class Hit1
			{
				armor=0.25;
				material=-1;
				name="dam 1";
				visual="damT1";
				passThrough=1;
				convexComponent="dam 1";
				class DestructionEffects
				{
					class Dust
					{
						simulation="particles";
						type="HousePartDust";
						position="";
						intensity=1;
						interval=1;
						lifeTime=0.0099999998;
					};
					class Dust2: Dust
					{
						type="HousePartDustLong";
					};
					class Walls: Dust
					{
						type="HousePartWall";
					};
				};
			};
			class Hit2
			{
				armor=0.25;
				material=-1;
				name="dam 2";
				visual="damT2";
				passThrough=1;
				convexComponent="dam 2";
				class DestructionEffects
				{
					class Dust
					{
						simulation="particles";
						type="HousePartDust";
						position="";
						intensity=1;
						interval=1;
						lifeTime=0.0099999998;
					};
					class Dust2: Dust
					{
						type="HousePartDustLong";
					};
					class Walls: Dust
					{
						type="HousePartWall";
					};
				};
			};
			class Hit3
			{
				armor=0.25;
				material=-1;
				name="dam 3";
				visual="damT3";
				passThrough=1;
				convexComponent="dam 3";
				class DestructionEffects
				{
					class Dust
					{
						simulation="particles";
						type="HousePartDust";
						position="";
						intensity=1;
						interval=1;
						lifeTime=0.0099999998;
					};
					class Dust2: Dust
					{
						type="HousePartDustLong";
					};
					class Walls: Dust
					{
						type="HousePartWall";
					};
				};
			};
			class Hit4
			{
				armor=0.25;
				material=-1;
				name="dam 4";
				visual="damT4";
				passThrough=1;
				convexComponent="dam 4";
				class DestructionEffects
				{
					class Dust
					{
						simulation="particles";
						type="HousePartDust";
						position="";
						intensity=1;
						interval=1;
						lifeTime=0.0099999998;
					};
					class Dust2: Dust
					{
						type="HousePartDustLong";
					};
					class Walls: Dust
					{
						type="HousePartWall";
					};
				};
			};
			class Hit5
			{
				armor=0.25;
				material=-1;
				name="dam 5";
				visual="damT5";
				passThrough=1;
				convexComponent="dam 5";
				class DestructionEffects
				{
					class Dust
					{
						simulation="particles";
						type="HousePartDust";
						position="";
						intensity=1;
						interval=1;
						lifeTime=0.0099999998;
					};
					class Dust2: Dust
					{
						type="HousePartDustLong";
					};
					class Walls: Dust
					{
						type="HousePartWall";
					};
				};
			};
			class Hit6
			{
				armor=0.25;
				material=-1;
				name="dam 6";
				visual="damT6";
				passThrough=1;
				convexComponent="dam 6";
				class DestructionEffects
				{
					class Dust
					{
						simulation="particles";
						type="HousePartDust";
						position="";
						intensity=1;
						interval=1;
						lifeTime=0.0099999998;
					};
					class Dust2: Dust
					{
						type="HousePartDustLong";
					};
					class Walls: Dust
					{
						type="HousePartWall";
					};
				};
			};
			class Hitglass
			{
				armor=0.00050000002;
				material=-1;
				name="dam glass";
				visual="damTglass";
				passThrough=0;
				convexComponent="dam glass";
			};
			class Hittower
			{
				armor=0.00050000002;
				material=-1;
				name="dam tower";
				visual="damTtower";
				passThrough=0;
				convexComponent="dam tower";
			};
		};
		replaceDamagedHitpoints[]=
		{
			"Hit1",
			"Hit2",
			"Hit3",
			"Hit4",
			"Hit5",
			"Hit6"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CA\Structures\Mil\Data\Mil_ControlTower_windows1.rvmat",
				"CA\Structures\Mil\Data\destruct_half_Mil_ControlTower_windows1.rvmat",
				"CA\Structures\Mil\Data\destruct_full_Mil_ControlTower_windows1.rvmat"
			};
		};
		model="\CA\Structures\Mil\Mil_ControlTower";
		ladders[]=
		{
			
			{
				"start1",
				"end1"
			},
			
			{
				"start2",
				"end2"
			}
		};
		class AnimationSources
		{
			class dvere_spodni_R
			{
				animPeriod=1;
				initPhase=0;
				source="user";
			};
			class dvere_spodni_L
			{
				animPeriod=1;
				initPhase=1;
				source="user";
			};
			class dvere_vrchni
			{
				animPeriod=1;
				initPhase=1;
				source="user";
			};
			class HitTower
			{
				source="Hit";
				hitpoint="HitTower";
				raw=1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault="<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
				displayName="Open door";
				position="Dvere_spodni_R_osa";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase ""Dvere_spodni_R"" < 0.5";
				statement="this animate [""Dvere_spodni_R"", 1];this animate [""Dvere_spodni_L"", 1]";
			};
			class CloseDoors1: OpenDoors1
			{
				displayNameDefault="<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
				displayName="Close door";
				condition="this animationPhase ""Dvere_spodni_R"" >= 0.5";
				statement="this animate [""Dvere_spodni_R"", 0];this animate [""Dvere_spodni_L"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault="<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
				displayName="Open door";
				position="Dvere_Vrchni_osa";
				radius=2;
				onlyForPlayer=0;
				condition="this animationPhase ""dvere_vrchni"" < 0.5";
				statement="this animate [""dvere_vrchni"", 1]";
			};
			class CloseDoors3: OpenDoors3
			{
				displayNameDefault="<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
				displayName="Close door";
				condition="this animationPhase ""dvere_vrchni"" >= 0.5";
				statement="this animate [""dvere_vrchni"", 0]";
			};
		};
		actionBegin1="OpenDoors1";
		actionEnd1="OpenDoors1";
		actionBegin2="OpenDoors3";
		actionEnd2="OpenDoors3";
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
		replaceDamaged="Land_Mil_ControlTower_dam";
	};
	class Land_NAV_Lighthouse: House
	{
		scope=1;
		armor=500;
		featureSize=15;
		model="\Ca\Structures\NAV\NAV_Lighthouse";
		ladders[]=
		{
			
			{
				"start1",
				"end1"
			}
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
		class Reflectors
		{
			class MainLight
			{
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				position="";
				direction="";
				hitpoint="";
				selection="";
				size=0;
				brightness=0;
				period[]={0,1};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ca\structures\nav\data\nav_lighthouse_multi.rvmat",
				"ca\structures\nav\data\destruct_half_nav_lighthouse_multi.rvmat",
				"ca\structures\nav\data\destruct_full_nav_lighthouse_multi.rvmat",
				"ca\structures\nav\data\nav_lighthouse_windows.rvmat",
				"ca\structures\nav\data\destruct_half_lighthouse_windows.rvmat",
				"ca\structures\nav\data\destruct_full_lighthouse_windows.rvmat"
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class Land_NAV_Lighthouse2: Land_NAV_Lighthouse
	{
		model="\Ca\Structures\NAV\NAV_Lighthouse2";
		class Reflectors: Reflectors
		{
			class MainLight: MainLight
			{
				period[]={0,1};
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class Land_A_Crane_02b: House
	{
		scope=1;
		armor=110;
		featureSize=30;
		model="\ca\buildings2\A_Crane_02\A_Crane_02b";
		destrType="DestructBuilding";
		ladders[]=
		{
			
			{
				"start3",
				"end3"
			},
			
			{
				"start4",
				"end4"
			},
			
			{
				"start5",
				"end5"
			},
			
			{
				"start6",
				"end6"
			}
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
		class Destruction
		{
			animations[]=
			{
				
				{
					"ca\buildings2\A_Crane_02\data\anim\crane.rtm",
					0.5,
					3
				}
			};
		};
	};
	class Land_Farm_WTower: House
	{
		scope=1;
		armor=100;
		model="\CA\buildings2\Farm_WTower\Farm_WTower";
		class MarkerLights
		{
			class RedBlinking
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\Ca\buildings2\Farm_WTower\Farm_WTower_ruins";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class Land_A_TVTower_Mid: House
	{
		scope=1;
		destrType="DestructNo";
		model="\ca\Structures\A_TVTower\A_TVTower_Mid";
		featureSize=150;
		class MarkerLights
		{
			class RedStill
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class Land_A_TVTower_Top: House
	{
		scope=1;
		destrType="DestructNo";
		model="\ca\Structures\A_TVTower\A_TVTower_Top";
		featureSize=150;
		class MarkerLights
		{
			class RedLight
			{
				name="";
				color[]={0,0,0,0};
				ambient[]={0,0,0,0};
				brightness=0;
				blinking=0;
			};
		};
	};
	class GraveCrossHelmet_DZ: NonStrategic
	{
		scope=2;
		model="\ca\buildings\Misc\hrobecek_krizekhelma.p3d";
		vehicleClass="Dead_bodies";
		destrType="DestructTree";
		armor=10;
		accuracy=500;
		displayName="Survival RIP";
	};
};
class CfgNonAIVehicles
{
	access=0;
	class StreetLamp
	{
		colorDiffuse[]={0.89999998,0.80000001,0.60000002};
		colorAmbient[]={0.02,0.02,0.02};
		brightness=0.15000001;
	};
	class StreetLamp_BaseWeakYellow: StreetLamp
	{
		colorDiffuse[]={0.5,0.40000001,0.1,0};
		colorAmbient[]={0.2,0.15000001,0.050000001,0};
		brightness=0.1;
	};
	class StreetLamp_BaseMediumOrange: StreetLamp
	{
		colorDiffuse[]={0.60000002,0.34999999,0,0};
		colorAmbient[]={0.2,0.1,0,0};
		brightness=0.2;
	};
	class StreetLamp_BaseMediumPale: StreetLamp
	{
		colorDiffuse[]={0.60000002,0.69999999,0.80000001,0};
		colorAmbient[]={0.059999999,0.07,0.1,0};
		brightness=0.15000001;
	};
	class StreetLamp_BaseStrongPale: StreetLamp
	{
		colorDiffuse[]={0.60000002,0.69999999,0.85000002,0};
		colorAmbient[]={0.07,0.1,0.15000001,0};
		brightness=0.33000001;
	};
	class Land_lampa_sidl: StreetLamp_BaseMediumOrange
	{
		colorDiffuse[]={0.60000002,0.34999999,0,0};
		colorAmbient[]={0.2,0.1,0,0};
		brightness=0.079999998;
		scope=2;
		model="\ca\buildings\Misc\lampa_sidl";
	};
	class Land_lampa_sidl_2: StreetLamp_BaseMediumOrange
	{
		colorDiffuse[]={0.60000002,0.34999999,0,0};
		colorAmbient[]={0.2,0.1,0,0};
		brightness=0.16;
		scope=2;
		model="\ca\buildings\Misc\lampa_sidl_2";
	};
	class Land_lampa_sidl_3: StreetLamp_BaseMediumOrange
	{
		colorDiffuse[]={0.60000002,0.34999999,0,0};
		colorAmbient[]={0.2,0.1,0,0};
		brightness=0.23999999;
		scope=2;
		model="\ca\buildings\Misc\lampa_sidl_3";
	};
	class Land_lampa_ind: StreetLamp_BaseWeakYellow
	{
		colorDiffuse[]={0.5,0.40000001,0.1,0};
		colorAmbient[]={0.2,0.15000001,0.050000001,0};
		brightness=0.1;
		scope=2;
		model="\ca\buildings\Misc\lampa_ind";
	};
	class Land_lampa_ind_zebr: StreetLamp_BaseWeakYellow
	{
		colorDiffuse[]={0.5,0.40000001,0.1,0};
		colorAmbient[]={0.2,0.15000001,0.050000001,0};
		brightness=0.1;
		scope=2;
		model="\ca\buildings\Misc\lampa_ind_zebr";
	};
};
class CfgLoot
{
	trash[]=
	{
		
		{
			"TrashTinCan",
			"TrashJackDaniels",
			"ItemSodaEmpty"
		},
		{1,0.1,0.5}
	};
	civilian[]=
	{
		
		{
			"TrashTinCan",
			"TrashJackDaniels",
			"ItemSodaEmpty",
			"ItemSodaCoke",
			"ItemSodaPepsi",
			"FoodCanBakedBeans",
			"FoodCanSardines",
			"FoodCanFrankBeans",
			"FoodCanPasta",
			"8Rnd_9x18_Makarov",
			"7Rnd_45ACP_1911",
			"2Rnd_shotgun_74Slug",
			"2Rnd_shotgun_74Pellets",
			"ItemBandage",
			"ItemPainkiller"
		},
		{0.1,0.1,0.1,0.02,0.02,0.02,0.02,0.02,0.02,0.07,0.050000001,0.050000001,0.050000001,0.0099999998,0.059999999}
	};
	newGenShop[]=
	{
		
		{
			"ItemSodaEmpty",
			"ItemSodaCoke",
			"ItemSodaPepsi",
			"FoodCanBakedBeans",
			"FoodCanSardines",
			"FoodCanFrankBeans",
			"FoodCanPasta",
			"ItemBandage",
			"7Rnd_45ACP_1911",
			"5x_22_LR_17_HMR",
			"10x_303",
			"6Rnd_45ACP",
			"2Rnd_shotgun_74Slug",
			"2Rnd_shotgun_74Pellets",
			"8Rnd_9x18_Makarov",
			"15Rnd_W1866_Slug",
			"ItemPainkiller",
			"HandChemGreen",
			"HandChemBlue",
			"HandChemRed",
			"ItemHeatPack",
			"Skin_Sniper1_DZ",
			"ItemAntibiotic",
			"ItemBattery",
			"ItemSodaMdew"
		},
		{0.13,0.13,0.13,0.090000004,0.13,0.090000004,0.090000004,0.029999999,0.090000004,0.039999999,0.029999999,0.0099999998,0.039999999,0.039999999,0.050000001,0.050000001,0.090000004,0.02,0.02,0.0099999998,0.029999999,0.0099999998,0.039999999,0.039999999,0.02}
	};
	food[]=
	{
		
		{
			"TrashTinCan",
			"TrashJackDaniels",
			"ItemSodaEmpty",
			"ItemSodaCoke",
			"ItemSodaPepsi",
			"FoodCanBakedBeans",
			"FoodCanSardines",
			"FoodCanFrankBeans",
			"FoodCanPasta",
			"ItemBandage"
		},
		{0.13,0.13,0.13,0.090000004,0.13,0.090000004,0.090000004,0.090000004,0.090000004,0.02}
	};
	generic[]=
	{
		
		{
			"TrashTinCan",
			"ItemSodaEmpty",
			"ItemSodaCoke",
			"ItemSodaPepsi",
			"TrashJackDaniels",
			"FoodCanBakedBeans",
			"FoodCanSardines",
			"FoodCanFrankBeans",
			"FoodCanPasta",
			"ItemWaterbottleUnfilled",
			"ItemWaterbottle",
			"ItemBandage",
			"7Rnd_45ACP_1911",
			"5x_22_LR_17_HMR",
			"10x_303",
			"6Rnd_45ACP",
			"2Rnd_shotgun_74Slug",
			"2Rnd_shotgun_74Pellets",
			"8Rnd_9x18_Makarov",
			"15Rnd_W1866_Slug",
			"BoltSteel",
			"HandRoadFlare",
			"ItemPainkiller",
			"HandChemGreen",
			"HandChemBlue",
			"HandChemRed",
			"ItemHeatPack"
		},
		{0.059999999,0.029999999,0.02,0.039999999,0.039999999,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.059999999,0.029999999,0.0099999998,0.039999999,0.039999999,0.050000001,0.050000001,0.090000004,0.02,0.039999999,0.07,0.02,0.0099999998,0.029999999,0.029999999,0.039999999}
	};
	medical[]=
	{
		
		{
			"ItemBandage",
			"ItemPainkiller",
			"ItemMorphine",
			"ItemEpinephrine",
			"ItemAntibiotic",
			"ItemHeatPack"
		},
		{0.80000001,0.5,0.5,0.2,0.2,0.2}
	};
	hospital[]=
	{
		
		{
			"ItemBandage",
			"ItemPainkiller",
			"ItemMorphine",
			"ItemEpinephrine",
			"ItemBloodbag",
			"ItemAntibiotic"
		},
		{0.33000001,0.17,0.13,0.090000004,0.17,0.12}
	};
	military[]=
	{
		
		{
			"TrashTinCan",
			"ItemSodaEmpty",
			"ItemSodaCoke",
			"ItemSodaPepsi",
			"ItemBandage",
			"ItemAntibiotic",
			"ItemPainkiller",
			"ItemMorphine",
			"30Rnd_556x45_Stanag",
			"20Rnd_762x51_DMR",
			"17Rnd_9x19_glock17",
			"15Rnd_9x19_M9SD",
			"15Rnd_9x19_M9",
			"30Rnd_762x39_AK47",
			"30Rnd_545x39_AK",
			"5Rnd_762x51_M24",
			"7Rnd_45ACP_1911",
			"8Rnd_B_Beneli_74Slug",
			"1Rnd_HE_M203",
			"FlareWhite_M203",
			"FlareGreen_M203",
			"1Rnd_Smoke_M203",
			"200Rnd_556x45_M249",
			"HandGrenade_west",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellGreen",
			"8Rnd_B_Beneli_Pellets",
			"30Rnd_556x45_StanagSD",
			"30Rnd_9x19_MP5",
			"30Rnd_9x19_MP5SD",
			"100Rnd_762x51_M240",
			"HandChemGreen",
			"HandChemBlue",
			"HandChemRed",
			"ItemHeatPack",
			"30Rnd_762x39_SA58",
			"30Rnd_556x45_G36",
			"30Rnd_556x45_G36SD",
			"1Rnd_HE_GP25",
			"75Rnd_545x39_RPK",
			"10Rnd_9x39_SP5_VSS",
			"20Rnd_9x39_SP5_VSS",
			"8Rnd_9x18_MakarovSD",
			"64Rnd_9x19_Bizon",
			"30Rnd_545x39_AKSD",
			"100Rnd_762x54_PK",
			"HandGrenade_East",
			"Ori_mosin_clip",
			"Ori_35Rnd_smg",
			"Ori_10Rnd_SKS",
			"Ori_12Rnd_maka",
			"Ori_8Rnd_TT",
			"Ori_20Rnd_APS",
			"Ori_20Rnd_APS_SD",
			"10Rnd_762x54_SVD",
			"FlareGreen_GP25",
			"FlareWhite_GP25",
			"FlareRed_GP25",
			"1Rnd_SMOKE_GP25",
			"1Rnd_SmokeRed_GP25",
			"1Rnd_SmokeGreen_GP25"
		},
		{0.18000001,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.039999999,0.039999999,0.0099999998,0.039999999,0.0099999998,0.050000001,0.0099999998,0.02,0.039999999,0.039999999,0.0099999998,0.0099999998,0.039999999,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.039999999,0.02,0.02,0.039999999,0.0099999998,0.039999999,0.0099999998,0.0099999998,0.02,0.02,0.02,0.039999999,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.039999999,0.0099999998,0.0099999998,0.0099999998,0.02,0.02,0.02,0.02,0.050000001,0.050000001,0.050000001,0.039999999,0.0099999998,0.02,0.02,0.02,0.02,0.02,0.02}
	};
	policeman[]=
	{
		
		{
			"ItemBandage",
			"7Rnd_45ACP_1911",
			"6Rnd_45ACP",
			"15Rnd_W1866_Slug",
			"8Rnd_B_Beneli_74Slug",
			"HandRoadFlare"
		},
		{1,0.80000001,0.30000001,0.30000001,0.5,0.30000001}
	};
	hunter[]=
	{
		
		{
			"ItemBandage",
			"5x_22_LR_17_HMR",
			"7Rnd_45ACP_1911",
			"10x_303",
			"ItemWaterbottleUnfilled",
			"BoltSteel",
			"ItemHeatPack"
		},
		{1,0.5,0.2,0.5,0.2,1,0.2}
	};
	zBoss[]=
	{
		
		{
			"ItemGPS",
			"ItemMap",
			"ItemToolBox",
			"ItemEtool",
			"ItemSaw",
			"ItemHammer",
			"ItemPliers",
			"ItemRope"
		},
		{0.30000001,0.80000001,0.60000002,0.60000002,0.5,0.5,0.5,0.5}
	};
};
class CfgSurvival
{
	class Inventory
	{
		class Default
		{
			magazines[]=
			{
				"ItemBandage",
				"ItemPainkiller",
				"8Rnd_9x18_Makarov"
			};
			weapons[]=
			{
				"Makarov",
				"ItemFlashlight"
			};
			backpackWeapon="";
			backpack="";
		};
	};
	class Meat
	{
		class Default
		{
			yield=1;
		};
		class Cow: Default
		{
			yield=6;
		};
		class Cow01: Cow
		{
		};
		class Cow02: Cow
		{
		};
		class Cow03: Cow
		{
		};
		class Cow04: Cow
		{
		};
		class Goat: Default
		{
			yield=4;
		};
		class Sheep: Default
		{
			yield=3;
		};
		class WildBoar: Default
		{
			yield=2;
		};
	};
};
class CfgBuildingLoot
{
	class Default
	{
		zombieChance=0;
		minRoaming=0;
		maxRoaming=2;
		zombieClass[]=
		{
			"zZombie_Base",
			"z_policeman",
			"z_Boss_zed",
			"ori_zombie1",
			"ori_zombie1n",
			"ori_zombie2",
			"ori_zombie2n",
			"ori_zombie3",
			"ori_zombie3n",
			"ori_zombie4",
			"ori_zombie4n",
			"ori_zombie5",
			"ori_zombie5n",
			"ori_zombie6",
			"ori_zombie6n",
			"ori_zombie7",
			"ori_zombie7n",
			"ori_zombie8",
			"ori_zombie8n",
			"ori_zombie1L",
			"ori_zombie1Ln",
			"ori_zombie2L",
			"ori_zombie2Ln",
			"ori_zombie3L",
			"ori_zombie3Ln",
			"ori_zombie4L",
			"ori_zombie4Ln",
			"ori_zombie5L",
			"ori_zombie5Ln",
			"ori_zombie6L",
			"ori_zombie6Ln",
			"ori_zombie7L",
			"ori_zombie7Ln",
			"ori_zombie8L",
			"ori_zombie8Ln",
			"ori_vil_zombie_woman1",
			"ori_vil_zombie_woman2",
			"ori_vil_zombie_woman3",
			"ori_vil_zombie_woman4",
			"z_suit1",
			"z_suit2",
			"z_worker1",
			"z_worker2",
			"z_worker3",
			"z_doctor",
			"z_teacher",
			"z_hunter",
			"z_villager1",
			"z_villager2",
			"z_villager3",
			"z_priest",
			"z_soldier",
			"z_soldier_pilot",
			"z_soldier_heavy",
			"ori_pozarnik"
		};
		lootChance=0;
		lootPos[]={};
		itemType[]={};
		itemChance[]={};
		hangPos[]={};
		vehPos[]={};
	};
	class Master
	{
		weapons[]=
		{
			"SMAW",
			"Javelin",
			"G36C",
			"Stinger"
		};
	};
	class Residential: Default
	{
		zombieChance=0.30000001;
		maxRoaming=2;
		zombieClass[]=
		{
			"zZombie_Base",
			"z_hunter",
			"z_teacher",
			"z_villager1",
			"z_villager2",
			"z_villager3",
			"ori_zombie1",
			"ori_zombie2",
			"ori_zombie3",
			"ori_zombie4",
			"ori_zombie5",
			"ori_zombie6",
			"ori_zombie7",
			"ori_zombie8",
			"ori_zombie1L",
			"ori_zombie2L",
			"ori_zombie3L",
			"ori_zombie4L",
			"ori_zombie5L",
			"ori_zombie6L",
			"ori_zombie7L",
			"ori_zombie8L",
			"ori_vil_zombie_woman1",
			"ori_vil_zombie_woman2",
			"ori_vil_zombie_woman3",
			"ori_vil_zombie_woman4",
			"ori_zombie1Ln",
			"ori_zombie2n",
			"ori_zombie3n",
			"ori_zombie3Ln",
			"ori_zombie7Ln",
			"ori_zombie8n"
		};
		lootChance=0.40000001;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"ItemSodaMdew",
				"magazine"
			},
			
			{
				"ItemWatch",
				"generic"
			},
			
			{
				"ItemCompass",
				"generic"
			},
			
			{
				"ItemMap",
				"weapon"
			},
			
			{
				"Makarov",
				"weapon"
			},
			
			{
				"Colt1911",
				"weapon"
			},
			
			{
				"ItemFlashlight",
				"generic"
			},
			
			{
				"ItemKnife",
				"generic"
			},
			
			{
				"ItemMatchbox",
				"generic"
			},
			
			{
				"",
				"generic"
			},
			
			{
				"LeeEnfield",
				"weapon"
			},
			
			{
				"revolver_EP1",
				"weapon"
			},
			
			{
				"CZ_VestPouch_EP1",
				"object"
			},
			
			{
				"DZ_CivilBackpack_EP1",
				"object"
			},
			
			{
				"DZ_ALICE_Pack_EP1",
				"object"
			},
			
			{
				"Winchester1866",
				"weapon"
			},
			
			{
				"ItemRestTent",
				"magazine"
			},
			
			{
				"",
				"military"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"Crossbow",
				"weapon"
			},
			
			{
				"Binocular",
				"weapon"
			},
			
			{
				"Skin_Sniper1_DZ",
				"magazine"
			},
			
			{
				"MR43",
				"weapon"
			},
			
			{
				"Sa61_EP1",
				"weapon"
			},
			
			{
				"ItemBattery",
				"magazine"
			},
			
			{
				"ItemPin",
				"magazine"
			},
			
			{
				"ItemBpt_b1",
				"magazine"
			},
			
			{
				"ItemBpt_h1",
				"magazine"
			},
			
			{
				"origins_school_1",
				"object"
			},
			
			{
				"origins_school_2",
				"object"
			},
			
			{
				"origins_school_3",
				"object"
			}
		};
		itemChance[]={0.0099999998,0.15000001,0.050000001,0.0099999998,0.13,0.050000001,0.029999999,0.079999998,0.059999999,0.80000001,0.02,0.039999999,0.029999999,0.029999999,0.0099999998,0.0099999998,0.0099999998,0.029999999,0.40000001,0.059999999,0.059999999,0.0099999998,0.029999999,0.050000001,0.079999998,0.079999998,0.02,0.02,0.029999999,0.029999999,0.029999999};
	};
	class NoviShop: Default
	{
		zombieChance=0.30000001;
		maxRoaming=2;
		zombieClass[]=
		{
			"zZombie_Base",
			"z_hunter",
			"z_teacher",
			"z_villager1",
			"z_villager2",
			"z_villager3",
			"ori_zombie1",
			"ori_zombie2",
			"ori_zombie3",
			"ori_zombie4",
			"ori_zombie5",
			"ori_zombie6",
			"ori_zombie7",
			"ori_zombie8",
			"ori_zombie1L",
			"ori_zombie2L",
			"ori_zombie3L",
			"ori_zombie4L",
			"ori_zombie5L",
			"ori_zombie6L",
			"ori_zombie7L",
			"ori_zombie8L",
			"ori_vil_zombie_woman1",
			"ori_vil_zombie_woman2",
			"ori_vil_zombie_woman3",
			"ori_vil_zombie_woman4",
			"ori_zombie1Ln",
			"ori_zombie2n",
			"ori_zombie3n",
			"ori_zombie3Ln",
			"ori_zombie7Ln",
			"ori_zombie8n"
		};
		lootChance=0.40000001;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"Binocular",
				"weapon"
			},
			
			{
				"ItemMap",
				"weapon"
			},
			
			{
				"",
				"newGenShop"
			},
			
			{
				"ItemCompass",
				"weapon"
			},
			
			{
				"ItemWatch",
				"weapon"
			},
			
			{
				"ItemKnife",
				"weapon"
			}
		};
		itemChance[]={0.1,0.1,0.89999998,0.1,0.1,0.1};
	};
	class Office: Residential
	{
		maxRoaming=2;
		zombieClass[]=
		{
			"z_suit1",
			"z_suit2",
			"ori_zombie2Ln",
			"ori_zombie5n",
			"ori_zombie3n",
			"ori_zombie3Ln"
		};
	};
	class TavianaDZ: Default
	{
		zombieChance=0.89999998;
		zombieClass[]=
		{
			"z_soldier",
			"z_soldier_heavy",
			"ori_zombie6Ln"
		};
		minRoaming=1;
		maxRoaming=3;
		lootChance=0.2;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"AK_74",
				"weapon"
			},
			
			{
				"AKS_74",
				"weapon"
			},
			
			{
				"AK_74_GL",
				"weapon"
			},
			
			{
				"AK_74_GL_kobra",
				"weapon"
			},
			
			{
				"AK_107_kobra",
				"weapon"
			},
			
			{
				"AK_107_GL_kobra",
				"weapon"
			},
			
			{
				"AK_107_pso",
				"weapon"
			},
			
			{
				"AKS_74_kobra",
				"weapon"
			},
			
			{
				"AKS_74_pso",
				"weapon"
			},
			
			{
				"AKS_74_UN_kobra",
				"weapon"
			},
			
			{
				"SVD_NSPU_EP1",
				"weapon"
			},
			
			{
				"bizon",
				"weapon"
			},
			
			{
				"M249_EP1_DZ",
				"weapon"
			},
			
			{
				"M60A4_EP1_DZ",
				"weapon"
			},
			
			{
				"MakarovSD",
				"weapon"
			},
			
			{
				"M4SPR",
				"weapon"
			},
			
			{
				"Sa58V_RCO_EP1",
				"weapon"
			},
			
			{
				"Sa58V_CCO_EP1",
				"weapon"
			},
			
			{
				"M16A4_GL",
				"weapon"
			},
			
			{
				"M16A4_ACG_GL",
				"weapon"
			},
			
			{
				"M4A1_Aim_camo",
				"weapon"
			},
			
			{
				"RPK_74",
				"weapon"
			},
			
			{
				"M4A1_RCO_GL",
				"weapon"
			},
			
			{
				"M4A1_HWS_GL_SD_Camo",
				"weapon"
			},
			
			{
				"M4A1_HWS_GL",
				"weapon"
			},
			
			{
				"m16a4",
				"weapon"
			},
			
			{
				"AK_47_S",
				"weapon"
			},
			
			{
				"SVD",
				"weapon"
			},
			
			{
				"M4A3_RCO_GL_EP1",
				"weapon"
			},
			
			{
				"PK_DZ",
				"weapon"
			},
			
			{
				"",
				"medical"
			},
			
			{
				"DZ_Assault_Pack_EP1",
				"object"
			},
			
			{
				"DZ_Patrol_Pack_EP1",
				"object"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"DZ_Backpack_EP1",
				"object"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"ItemFlashlightRed",
				"military"
			},
			
			{
				"ItemKnife",
				"military"
			},
			
			{
				"ItemGPS",
				"weapon"
			},
			
			{
				"",
				"generic"
			},
			
			{
				"ItemRestTent",
				"magazine"
			},
			
			{
				"ItemBpt_b2",
				"magazine"
			},
			
			{
				"ItemBpt_h2",
				"magazine"
			}
		};
		itemChance[]={0.1,0.1,0.039999999,0.039999999,0.029999999,0.029999999,0.0099999998,0.029999999,0.02,0.029999999,0.0099999998,0.039999999,0.0099999998,0.0099999998,0.050000001,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.029999999,0.02,0.029999999,0.050000001,0.050000001,0.0099999998,0.029999999,0.0099999998,0.30000001,0.050000001,0.050000001,0.89999998,0.0099999998,0.89999998,0.039999999,0.12,0.02,0.80000001,0.02,0.0099999998,0.0099999998};
	};
	class IndNovistr: Default
	{
		zombieChance=0.60000002;
		zombieClass[]=
		{
			"z_worker1",
			"z_worker2",
			"z_worker3",
			"ori_zombie7n",
			"ori_zombie8Ln"
		};
		maxRoaming=3;
		lootChance=0.30000001;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"PartGeneric",
				"magazine"
			},
			
			{
				"",
				"generic"
			},
			
			{
				"PartFueltank",
				"magazine"
			},
			
			{
				"ItemKnife",
				"military"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"PartPipe",
				"magazine"
			},
			
			{
				"ItemCementBag",
				"magazine"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"ItemTow",
				"weapon"
			},
			
			{
				"PartAluminium",
				"magazine"
			},
			
			{
				"ItemHose",
				"weapon"
			},
			
			{
				"PartChipB",
				"magazine"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"ItemScrews",
				"magazine"
			},
			
			{
				"PartBlockV",
				"magazine"
			},
			
			{
				"ItemBpt_wt",
				"magazine"
			},
			
			{
				"ItemBlueSpr",
				"magazine"
			},
			
			{
				"ItemGreenSpr",
				"magazine"
			},
			
			{
				"ItemPinkSpr",
				"magazine"
			},
			
			{
				"ItemBlackSpr",
				"magazine"
			},
			
			{
				"ItemRedSpr",
				"magazine"
			},
			
			{
				"ItemYellowSpr",
				"magazine"
			},
			
			{
				"ItemWhiteSpr",
				"magazine"
			},
			
			{
				"ItemSaw",
				"weapon"
			},
			
			{
				"ItemHammer",
				"weapon"
			},
			
			{
				"ItemPliers",
				"weapon"
			},
			
			{
				"ItemCrane",
				"magazine"
			}
		};
		itemChance[]={0.039999999,0.15000001,0.039999999,0.050000001,0.34999999,0.039999999,0.039999999,0.25,0.0099999998,0.050000001,0.0099999998,0.050000001,0.2,0.02,0.02,0.02,0.07,0.07,0.07,0.07,0.07,0.07,0.07,0.02,0.02,0.02,0.02};
	};
	class IndustrialNew: Default
	{
		zombieChance=0.60000002;
		zombieClass[]=
		{
			"z_worker1",
			"z_worker2",
			"z_worker3",
			"ori_zombie7n",
			"ori_zombie8Ln"
		};
		maxRoaming=2;
		lootChance=0.2;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"PartGeneric",
				"magazine"
			},
			
			{
				"",
				"generic"
			},
			
			{
				"PartFueltank",
				"magazine"
			},
			
			{
				"PartEngine",
				"magazine"
			},
			
			{
				"ItemKnife",
				"military"
			},
			
			{
				"PartScrap",
				"magazine"
			},
			
			{
				"",
				"military"
			},
			
			{
				"PartPipe",
				"magazine"
			},
			
			{
				"ItemCementBag",
				"magazine"
			},
			
			{
				"ItemBpt_g_s",
				"magazine"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"ItemBpt_g_b",
				"magazine"
			},
			
			{
				"ItemTow",
				"weapon"
			},
			
			{
				"ItemHose",
				"weapon"
			},
			
			{
				"PartBlockV",
				"magazine"
			},
			
			{
				"ItemBpt_wt",
				"magazine"
			},
			
			{
				"ItemBlueSpr",
				"magazine"
			},
			
			{
				"ItemGreenSpr",
				"magazine"
			},
			
			{
				"ItemPinkSpr",
				"magazine"
			},
			
			{
				"ItemBlackSpr",
				"magazine"
			},
			
			{
				"ItemRedSpr",
				"magazine"
			},
			
			{
				"ItemYellowSpr",
				"magazine"
			},
			
			{
				"ItemWhiteSpr",
				"magazine"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"ItemSaw",
				"weapon"
			},
			
			{
				"ItemMTubes",
				"magazine"
			},
			
			{
				"ItemBpt_wt1",
				"magazine"
			},
			
			{
				"ItemBpt_wt2",
				"magazine"
			},
			
			{
				"ItemBpt_wt3",
				"magazine"
			},
			
			{
				"ItemBpt_wt4",
				"magazine"
			}
		};
		itemChance[]={0.039999999,0.34999999,0.039999999,0.02,0.050000001,0.02,0.34999999,0.039999999,0.039999999,0.0099999998,0.25,0.039999999,0.0099999998,0.0099999998,0.02,0.0099999998,0.050000001,0.050000001,0.050000001,0.050000001,0.050000001,0.050000001,0.050000001,0.1,0.050000001,0.029999999,0.029999999,0.029999999,0.029999999,0.029999999};
	};
	class Industrial: Default
	{
		zombieChance=0.60000002;
		zombieClass[]=
		{
			"z_worker1",
			"z_worker2",
			"z_worker3",
			"ori_zombie7n",
			"ori_zombie8Ln",
			"ori_pozarnik"
		};
		maxRoaming=3;
		lootChance=0.30000001;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"",
				"generic"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"",
				"military"
			},
			
			{
				"PartGeneric",
				"magazine"
			},
			
			{
				"PartWheel",
				"magazine"
			},
			
			{
				"PartFueltank",
				"magazine"
			},
			
			{
				"PartEngine",
				"magazine"
			},
			
			{
				"PartGlass",
				"magazine"
			},
			
			{
				"PartVRotor",
				"magazine"
			},
			
			{
				"ItemJerrycan",
				"magazine"
			},
			
			{
				"ItemHatchet",
				"weapon"
			},
			
			{
				"ItemKnife",
				"military"
			},
			
			{
				"ItemToolbox",
				"weapon"
			},
			
			{
				"ItemTankTrap",
				"magazine"
			},
			
			{
				"PartScrap",
				"magazine"
			},
			
			{
				"ItemJerrycanB",
				"magazine"
			},
			
			{
				"ItemPickaxe",
				"weapon"
			},
			
			{
				"ItemCeMix",
				"magazine"
			},
			
			{
				"ItemCementBag",
				"magazine"
			},
			
			{
				"ItemBpt_g_s",
				"magazine"
			},
			
			{
				"ItemBpt_g_b",
				"magazine"
			},
			
			{
				"ItemEtool",
				"weapon"
			},
			
			{
				"ItemHose",
				"weapon"
			}
		};
		itemChance[]={0.34999999,0.25,0.039999999,0.039999999,0.050000001,0.02,0.02,0.039999999,0.0099999998,0.039999999,0.11,0.07,0.029999999,0.039999999,0.050000001,0.0099999998,0.090000004,0.07,0.050000001,0.0099999998,0.0099999998,0.059999999,0.0099999998};
	};
	class Farm: Default
	{
		zombieChance=0.30000001;
		maxRoaming=3;
		zombieClass[]=
		{
			"zZombie_Base",
			"z_hunter",
			"z_hunter",
			"z_hunter",
			"z_villager1",
			"z_villager2",
			"z_villager3",
			"ori_vil_zombie_woman1",
			"ori_vil_zombie_woman2",
			"ori_vil_zombie_woman3",
			"ori_vil_zombie_woman4",
			"ori_zombie4Ln",
			"ori_zombie5Ln"
		};
		lootChance=0.5;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"ItemJerrycan",
				"magazine"
			},
			
			{
				"",
				"generic"
			},
			
			{
				"huntingrifle",
				"weapon"
			},
			
			{
				"LeeEnfield",
				"weapon"
			},
			
			{
				"Winchester1866",
				"weapon"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"Crossbow",
				"weapon"
			},
			
			{
				"ItemHatchet",
				"weapon"
			},
			
			{
				"MR43",
				"weapon"
			},
			
			{
				"ItemJerrycanB",
				"magazine"
			},
			
			{
				"ItemPickaxe",
				"weapon"
			},
			
			{
				"ItemCementBag",
				"magazine"
			},
			
			{
				"ItemBpt_g_s",
				"magazine"
			},
			
			{
				"ItemBpt_g_b",
				"magazine"
			},
			
			{
				"ItemBpt_b1",
				"magazine"
			},
			
			{
				"ItemBpt_h1",
				"magazine"
			},
			
			{
				"ItemRope",
				"weapon"
			}
		};
		itemChance[]={0.059999999,0.38,0.0099999998,0.0099999998,0.029999999,0.31999999,0.029999999,0.17,0.059999999,0.029999999,0.1,0.079999998,0.0099999998,0.0099999998,0.0099999998,0.0099999998,0.059999999};
	};
	class Supermarket: Default
	{
		lootChance=0.60000002;
		minRoaming=2;
		maxRoaming=3;
		zombieChance=0.30000001;
		zombieClass[]=
		{
			"zZombie_Base",
			"zZombie_Base",
			"z_teacher",
			"z_suit1",
			"z_suit2",
			"ori_vil_zombie_woman1",
			"ori_vil_zombie_woman2",
			"ori_vil_zombie_woman3",
			"ori_vil_zombie_woman4"
		};
		itemType[]=
		{
			
			{
				"ItemWatch",
				"generic"
			},
			
			{
				"ItemCompass",
				"generic"
			},
			
			{
				"ItemMap",
				"weapon"
			},
			
			{
				"Makarov",
				"weapon"
			},
			
			{
				"Colt1911",
				"weapon"
			},
			
			{
				"ItemFlashlight",
				"generic"
			},
			
			{
				"ItemKnife",
				"generic"
			},
			
			{
				"ItemMatchbox",
				"generic"
			},
			
			{
				"",
				"generic"
			},
			
			{
				"LeeEnfield",
				"weapon"
			},
			
			{
				"revolver_EP1",
				"weapon"
			},
			
			{
				"CZ_VestPouch_EP1",
				"object"
			},
			
			{
				"DZ_CivilBackpack_EP1",
				"object"
			},
			
			{
				"DZ_ALICE_Pack_EP1",
				"object"
			},
			
			{
				"Winchester1866",
				"weapon"
			},
			
			{
				"ItemRestTent",
				"magazine"
			},
			
			{
				"",
				"food"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"Crossbow",
				"weapon"
			},
			
			{
				"Binocular",
				"weapon"
			},
			
			{
				"MR43",
				"weapon"
			},
			
			{
				"ItemCementBag",
				"magazine"
			},
			
			{
				"ItemBattery",
				"magazine"
			},
			
			{
				"ItemPin",
				"magazine"
			},
			
			{
				"origins_school_1",
				"object"
			},
			
			{
				"origins_school_2",
				"object"
			},
			
			{
				"origins_school_3",
				"object"
			}
		};
		itemChance[]={0.15000001,0.0099999998,0.050000001,0.02,0.02,0.050000001,0.02,0.050000001,0.18000001,0.0099999998,0.0099999998,0.029999999,0.02,0.0099999998,0.0099999998,0.0099999998,0.30000001,0.75,0.11,0.050000001,0.0099999998,0.07,0.050000001,0.0099999998,0.0099999998,0.0099999998,0.0099999998};
	};
	class HeliCrash: Default
	{
		zombieChance=0;
		maxRoaming=2;
		zombieClass[]=
		{
			"z_soldier_pilot",
			"z_soldier",
			"z_soldier_heavy",
			"ori_zombie6n"
		};
		lootChance=0.5;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"FN_FAL",
				"weapon"
			},
			
			{
				"bizon_silenced",
				"weapon"
			},
			
			{
				"M14_EP1",
				"weapon"
			},
			
			{
				"FN_FAL_ANPVS4",
				"weapon"
			},
			
			{
				"huntingrifle",
				"weapon"
			},
			
			{
				"SVD",
				"weapon"
			},
			
			{
				"Mk_48_DZ",
				"weapon"
			},
			
			{
				"M249_DZ",
				"weapon"
			},
			
			{
				"BAF_L85A2_RIS_Holo",
				"weapon"
			},
			
			{
				"DMR",
				"weapon"
			},
			
			{
				"",
				"military"
			},
			
			{
				"",
				"medical"
			},
			
			{
				"NVGoggles",
				"weapon"
			},
			
			{
				"Skin_Sniper1_DZ",
				"magazine"
			},
			
			{
				"G36C",
				"weapon"
			},
			
			{
				"G36C_camo",
				"weapon"
			},
			
			{
				"G36A_camo",
				"weapon"
			},
			
			{
				"G36a",
				"weapon"
			},
			
			{
				"G36K_camo",
				"weapon"
			},
			
			{
				"G36K",
				"weapon"
			},
			
			{
				"ItemBpt_b3",
				"magazine"
			},
			
			{
				"ItemBpt_h3",
				"magazine"
			}
		};
		itemChance[]={0.02,0.30000001,0.050000001,0.02,0.0099999998,0.0099999998,0.059999999,0.059999999,0.059999999,0.0099999998,0.89999998,0.30000001,0.0099999998,0.050000001,0.029999999,0.02,0.02,0.02,0.02,0.02,0.0099999998,0.0099999998};
	};
	class Hospital: Default
	{
		zombieChance=0.40000001;
		minRoaming=2;
		maxRoaming=3;
		zombieClass[]=
		{
			"z_doctor",
			"z_doctor",
			"z_doctor",
			"ori_vil_zombie_woman1",
			"ori_vil_zombie_woman2",
			"ori_vil_zombie_woman3",
			"ori_vil_zombie_woman4",
			"ori_zombie1n",
			"ori_zombie4n",
			"ori_zombie1n",
			"ori_zombie4n"
		};
		lootChance=1;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"",
				"trash"
			},
			
			{
				"",
				"hospital"
			}
		};
		itemChance[]={0.2,0.5};
	};
	class Military: Default
	{
		zombieChance=0.30000001;
		maxRoaming=3;
		zombieClass[]=
		{
			"z_soldier",
			"z_soldier_heavy",
			"z_policeman",
			"ori_zombie6Ln"
		};
		lootChance=0.40000001;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"M9",
				"weapon"
			},
			
			{
				"M16A2",
				"weapon"
			},
			
			{
				"M16A2GL",
				"weapon"
			},
			
			{
				"M9SD",
				"weapon"
			},
			
			{
				"AK_74",
				"weapon"
			},
			
			{
				"M4A1_Aim",
				"weapon"
			},
			
			{
				"AKS_74_kobra",
				"weapon"
			},
			
			{
				"AKS_74_U",
				"weapon"
			},
			
			{
				"AK_47_M",
				"weapon"
			},
			
			{
				"M24",
				"weapon"
			},
			
			{
				"M1014",
				"weapon"
			},
			
			{
				"DMR",
				"weapon"
			},
			
			{
				"M4A1",
				"weapon"
			},
			
			{
				"M14_EP1",
				"weapon"
			},
			
			{
				"UZI_EP1",
				"weapon"
			},
			
			{
				"Remington870_lamp",
				"weapon"
			},
			
			{
				"glock17_EP1",
				"weapon"
			},
			
			{
				"MP5A5",
				"weapon"
			},
			
			{
				"MP5SD",
				"weapon"
			},
			
			{
				"M4A3_CCO_EP1",
				"weapon"
			},
			
			{
				"Binocular",
				"weapon"
			},
			
			{
				"ItemFlashlightRed",
				"military"
			},
			
			{
				"ItemKnife",
				"military"
			},
			
			{
				"ItemGPS",
				"weapon"
			},
			
			{
				"ItemMap",
				"military"
			},
			
			{
				"DZ_Assault_Pack_EP1",
				"object"
			},
			
			{
				"DZ_Patrol_Pack_EP1",
				"object"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"DZ_Backpack_EP1",
				"object"
			},
			
			{
				"",
				"medical"
			},
			
			{
				"",
				"generic"
			},
			
			{
				"",
				"military"
			},
			
			{
				"ItemEtool",
				"weapon"
			},
			
			{
				"ItemSandbag",
				"magazine"
			},
			
			{
				"Sa58P_EP1",
				"weapon"
			},
			
			{
				"Sa58V_EP1",
				"weapon"
			},
			
			{
				"ItemRestTent",
				"magazine"
			},
			
			{
				"Ori_mosin",
				"weapon"
			},
			
			{
				"Ori_PPS43",
				"weapon"
			},
			
			{
				"ori_vil_uzi_rozkl",
				"weapon"
			},
			
			{
				"ori_vil_uzi_sd",
				"weapon"
			},
			
			{
				"ori_vil_uzimini",
				"weapon"
			},
			
			{
				"ori_vil_uzimini_SD",
				"weapon"
			},
			
			{
				"Ori_Sa48SMG",
				"weapon"
			},
			
			{
				"Ori_SKS",
				"weapon"
			},
			
			{
				"Ori_Tt33",
				"weapon"
			},
			
			{
				"Ori_APS",
				"weapon"
			},
			
			{
				"Ori_APS_SD",
				"weapon"
			},
			
			{
				"Ori_cz75",
				"weapon"
			},
			
			{
				"Ori_cz83",
				"weapon"
			},
			
			{
				"Ori_mossberg",
				"weapon"
			}
		};
		itemChance[]={0.050000001,0.050000001,0.0099999998,0.02,0.090000004,0.0099999998,0.079999998,0.050000001,0.050000001,0.0099999998,0.050000001,0.0099999998,0.02,0.0099999998,0.050000001,0.079999998,0.1,0.039999999,0.02,0.0099999998,0.059999999,0.1,0.1,0.0099999998,0.050000001,0.059999999,0.039999999,0.5,0.02,0.1,0.5,0.5,0.050000001,0.1,0.029999999,0.029999999,0.0099999998,0.0099999998,0.050000001,0.050000001,0.029999999,0.050000001,0.029999999,0.050000001,0.050000001,0.050000001,0.050000001,0.050000001,0.050000001,0.050000001,0.1};
	};
	class MilitarySNovi: Default
	{
		zombieChance=0.60000002;
		minRoaming=2;
		maxRoaming=3;
		zombieClass[]=
		{
			"z_soldier_pilot",
			"z_soldier",
			"z_soldier_heavy",
			"ori_zombie6n"
		};
		lootChance=0.13;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"M16A2",
				"weapon"
			},
			
			{
				"M16A2GL",
				"weapon"
			},
			
			{
				"SCAR_L_CQC_CCO_SD",
				"weapon"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"SCAR_L_CQC_Holo",
				"weapon"
			},
			
			{
				"M1014",
				"weapon"
			},
			
			{
				"huntingrifle",
				"weapon"
			},
			
			{
				"SCAR_L_CQC_EGLM_Holo",
				"weapon"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"SCAR_L_STD_EGLM_RCO",
				"weapon"
			},
			
			{
				"M4A1_Aim_camo",
				"weapon"
			},
			
			{
				"M4A1",
				"weapon"
			},
			
			{
				"SCAR_L_STD_HOLO",
				"weapon"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"SCAR_L_STD_Mk4CQT",
				"weapon"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"Remington870_lamp",
				"weapon"
			},
			
			{
				"glock17_EP1",
				"weapon"
			},
			
			{
				"Skin_Sniper1_DZ",
				"magazine"
			},
			
			{
				"SCAR_H_CQC_CCO",
				"weapon"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"SCAR_H_CQC_CCO_SD",
				"weapon"
			},
			
			{
				"M9",
				"weapon"
			},
			
			{
				"MP5A5",
				"weapon"
			},
			
			{
				"MP5SD",
				"weapon"
			},
			
			{
				"SCAR_H_STD_EGLM_Spect",
				"weapon"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"SCAR_H_LNG_Sniper",
				"weapon"
			},
			
			{
				"",
				"trash"
			},
			
			{
				"M9SD",
				"weapon"
			},
			
			{
				"DZ_Backpack_EP1",
				"object"
			},
			
			{
				"SCAR_H_LNG_Sniper_SD",
				"weapon"
			},
			
			{
				"M4A1_RCO_GL",
				"weapon"
			},
			
			{
				"M4A1_HWS_GL_SD_Camo",
				"weapon"
			},
			
			{
				"M4A1_HWS_GL",
				"weapon"
			},
			
			{
				"M24",
				"weapon"
			},
			
			{
				"MG36",
				"weapon"
			},
			
			{
				"MG36_camo",
				"weapon"
			},
			
			{
				"AK_107_GL_pso",
				"weapon"
			},
			
			{
				"Saiga12K",
				"weapon"
			}
		};
		itemChance[]={0.1,0.050000001,0.0099999998,0.25,0.0099999998,0.15000001,0.1,0.0099999998,0.2,0.0099999998,0.050000001,0.2,0.0099999998,0.1,0.0099999998,0.15000001,0.2,0.2,0.050000001,0.0099999998,0.22,0.0099999998,0.1,0.1,0.1,0.0099999998,0.30000001,0.0099999998,0.2,0.1,0.1,0.0099999998,0.1,0.1,0.1,0.050000001,0.0099999998,0.0099999998,0.050000001,0.050000001};
	};
	class MilitarySpecial: Default
	{
		zombieChance=0.40000001;
		minRoaming=2;
		maxRoaming=3;
		zombieClass[]=
		{
			"z_soldier_heavy",
			"ori_zombie6Ln"
		};
		lootChance=0.40000001;
		lootPos[]={};
		itemType[]=
		{
			
			{
				"M16A2",
				"weapon"
			},
			
			{
				"M16A2GL",
				"weapon"
			},
			
			{
				"M249_DZ",
				"weapon"
			},
			
			{
				"M9SD",
				"weapon"
			},
			
			{
				"AK_74",
				"weapon"
			},
			
			{
				"M4A1_Aim",
				"weapon"
			},
			
			{
				"AKS_74_kobra",
				"weapon"
			},
			
			{
				"AKS_74_U",
				"weapon"
			},
			
			{
				"AK_47_M",
				"weapon"
			},
			
			{
				"M24",
				"weapon"
			},
			
			{
				"SVD_CAMO",
				"weapon"
			},
			
			{
				"M1014",
				"weapon"
			},
			
			{
				"huntingrifle",
				"weapon"
			},
			
			{
				"DMR",
				"weapon"
			},
			
			{
				"M4A1",
				"weapon"
			},
			
			{
				"M14_EP1",
				"weapon"
			},
			
			{
				"UZI_EP1",
				"weapon"
			},
			
			{
				"Remington870_lamp",
				"weapon"
			},
			
			{
				"glock17_EP1",
				"weapon"
			},
			
			{
				"M240_DZ",
				"weapon"
			},
			
			{
				"M4A1_AIM_SD_camo",
				"weapon"
			},
			
			{
				"M16A4_ACG",
				"weapon"
			},
			
			{
				"M4A1_HWS_GL_camo",
				"weapon"
			},
			
			{
				"Mk_48_DZ",
				"weapon"
			},
			
			{
				"M4A3_CCO_EP1",
				"weapon"
			},
			
			{
				"Binocular",
				"weapon"
			},
			
			{
				"ItemFlashlightRed",
				"military"
			},
			
			{
				"ItemKnife",
				"military"
			},
			
			{
				"ItemGPS",
				"weapon"
			},
			
			{
				"ItemMap",
				"military"
			},
			
			{
				"Binocular_Vector",
				"military"
			},
			
			{
				"DZ_Assault_Pack_EP1",
				"object"
			},
			
			{
				"DZ_Patrol_Pack_EP1",
				"object"
			},
			
			{
				"DZ_Backpack_EP1",
				"object"
			},
			
			{
				"",
				"medical"
			},
			
			{
				"",
				"generic"
			},
			
			{
				"",
				"military"
			},
			
			{
				"Sa58V_RCO_EP1",
				"weapon"
			},
			
			{
				"Sa58V_CCO_EP1",
				"weapon"
			},
			
			{
				"M40A3",
				"weapon"
			},
			
			{
				"ItemBpt_b2",
				"magazine"
			},
			
			{
				"ItemBpt_h2",
				"magazine"
			}
		};
		itemChance[]={0.1,0.050000001,0.0099999998,0.02,0.1,0.02,0.1,0.1,0.1,0.0099999998,0.0099999998,0.2,0.0099999998,0.02,0.1,0.029999999,0.2,0.1,0.2,0.0099999998,0.039999999,0.050000001,0.02,0.0099999998,0.079999998,0.1,0.050000001,0.15000001,0.0099999998,0.029999999,0.0099999998,0.02,0.029999999,0.02,0.30000001,0.89999998,0.80000001,0.0099999998,0.0099999998,0.02,0.02,0.02};
	};
	class Church: Residential
	{
		minRoaming=1;
		maxRoaming=3;
		zombieClass[]=
		{
			"z_priest",
			"z_priest",
			"z_priest"
		};
	};
	class Land_tav_Barrack2: MilitarySNovi
	{
		lootPos[]=
		{
			{1.24634,4.1289101,-0.68939},
			{1.14526,0.33007801,-0.72159201},
			{-1.6864001,3.8418,-0.71040201},
			{-2.1881101,-2.9160199,-0.69275701},
			{1.37219,-0.96875,-0.65321702}
		};
	};
	class Land_tav_Ind_Pec_03_nov: IndNovistr
	{
		lootPos[]=
		{
			{7.1181598,-21.186501,-5.3902302},
			{3.1523399,-9.5878897,-5.3902302},
			{8.6377001,1.13916,-5.3902302},
			{-0.453125,-0.96435499,-5.3902302},
			{-13.3867,-10.0005,-5.3302302},
			{-7.7695298,-10.0313,-5.3302302},
			{-8.6035204,-15.8286,-3.9672101},
			{-9.10742,-12.6348,-2.4703701},
			{-13.2656,-9.3276396,-2.4503701},
			{11.7871,-7.7817402,5.80546},
			{-1.21582,-13.377,5.8354602},
			{-0.91992199,19.687,4.0910301}
		};
	};
	class Land_tav_tovarna2: IndNovistr
	{
		lootPos[]=
		{
			{-11.6309,7.2052002,-5.55933},
			{-12.0674,2.5690899,-5.55933},
			{-4.8935499,6.6394,-5.55933},
			{-3.74121,2.9039299,-3.8966501},
			{-12.8672,1.44519,-2.2313499},
			{-12.415,8.1310997,-2.2313499},
			{-12.7236,4.1125498,-2.2313499},
			{-3.99805,8.9800997,-2.23156},
			{-7.3310499,8.4421396,-2.23156},
			{-4.55371,5.22644,-2.23156},
			{-11.4746,2.92114,1.66661},
			{-11.0703,8.1381798,1.66661},
			{-4.6757798,7.3267798,1.62174},
			{-2.68262,3.4476299,3.4243},
			{-13.1953,-8.9586201,3.4243},
			{-8.8085899,-0.443481,0.40122601},
			{-12.1328,-0.149414,0.42429799},
			{-2.0341799,6.61414,-5.55933},
			{0.23925801,1.72278,-5.59793},
			{6.2246099,-3.948,-4.6182499},
			{-6.3935499,-8.2435303,-5.5954099},
			{-10.8496,-6.9121099,-5.5657201},
			{-6.77637,-1.73083,-5.5601902}
		};
	};
	class Land_tav_Ind_Pec_03: Industrial
	{
		lootPos[]=
		{
			{12.4282,-24.232401,-5.4302201},
			{6.04492,-14.6445,-5.4602199},
			{4.4872999,-3.7793,-5.4602199},
			{9.9052696,0.28710899,-5.4502301},
			{-2.3041999,-24.466801,-5.4402199},
			{-6.3056598,-9.9804697,-5.4602199},
			{-12.8062,-9.5625,-5.4502301},
			{-7.3935499,-17.0527,-4.0213799},
			{-12.0459,-16.070299,-2.4603601},
			{-11.731,-10.4531,-2.4503601},
			{-7.09863,-13.1465,-2.4403501},
			{-3.5,12.125,-5.3702202}
		};
	};
	class Land_Ind_Mlyn_01: IndustrialNew
	{
		lootPos[]=
		{
			{-6.8852501,2.5332,9.2211304},
			{-7.2104502,2.5947299,3.18799},
			{-2.6933601,8.4384804,0.28856},
			{-2.80615,8.0205097,-7.6715598}
		};
	};
	class Land_Ind_Mlyn_03: IndustrialNew
	{
		lootPos[]=
		{
			{-7.8779302,6.7529302,-4.1519599},
			{2.3110399,1.54102,-4.1519599},
			{2.45068,-7.54883,-4.1519599}
		};
	};
	class Land_Barn_Metal: IndustrialNew
	{
		lootPos[]=
		{
			{-9.2910204,-25.209999,5.5999999},
			{10.665,-6.7568402,5.5999999},
			{-3.7929699,-3.1816399,5.4631},
			{10.5615,14.0342,5.5999999},
			{9.87012,3.90625,-5.4501901},
			{-6.7158198,14.6953,-5.4501901},
			{-0.53027302,-14.2139,-5.4501901},
			{8.0942402,-21.9443,-5.4501901},
			{-8.6406298,-24.3398,-5.4501901},
			{-9.3803701,4.0634799,5.5981002},
			{-9.5141602,20.625999,5.5681}
		};
	};
	class Land_Ind_TankBig: IndustrialNew
	{
		lootPos[]=
		{
			{-3.74512,2.40503,5.4099998},
			{1.77441,-1.92456,5.4099998}
		};
	};
	class Land_Ind_SiloVelke_02: IndustrialNew
	{
		lootPos[]=
		{
			{9.4453096,0.056640599,17.7159},
			{-6.5742202,0.064453103,17.7059}
		};
	};
	class Land_Ind_SiloVelke_01: IndustrialNew
	{
		lootPos[]=
		{
			{1.86816,6.2578101,11.9014},
			{1.64258,-1.85742,11.8514},
			{-5.6718798,3.0429699,11.8514},
			{2.0117199,-1.57813,-5.45222},
			{2.01367,7.2304702,-5.4622202}
		};
	};
	class Land_Ind_Pec_03b: IndustrialNew
	{
		lootPos[]=
		{
			{1.79883,-17.834,5.7454901},
			{-2.7109399,10.7085,5.7454901},
			{-2.0810499,19.0791,4.0300002},
			{0.71484399,25.252001,4.0300002}
		};
	};
	class Land_Ind_Expedice_3: IndustrialNew
	{
		lootPos[]=
		{
			{1.86475,-5.7314501,2.1586499},
			{2.06738,6.7929702,2.11729},
			{-1.11279,17.6689,2.1016099}
		};
	};
	class Land_tav_HouseV2_01B: Residential
	{
		maxRoaming=2;
		lootPos[]=
		{
			{-8.6088896,2.9101601,1.15648},
			{-9.1362305,-0.74804699,1.16798},
			{-4.9389601,3.45801,1.1567301},
			{-1.05664,2.2216799,1.15663},
			{-2.76758,-1.0625,5.4390898},
			{-7.4848599,0.98632801,5.44909},
			{-1.41699,4.82129,5.4590902},
			{1.76758,-0.64843798,6.17909},
			{6.99365,4.5390601,5.42909},
			{1.5249,1.26465,5.42909}
		};
	};
	class Land_tav_guardhouse: Military
	{
		maxRoaming=2;
		lootPos[]=
		{
			{0.020507799,2.8378899,-1.7079099},
			{4.2597699,-0.359375,-1.68791},
			{-1,-0.61718798,-1.7179101},
			{0.95214802,-3.1552701,-1.7179101},
			{-2.46191,-3.07129,-1.03791},
			{-2.44434,3.08691,-1.6907001}
		};
	};
	class Land_tav_houseblock_b1: NoviShop
	{
		maxRoaming=3;
		lootPos[]=
		{
			{9.7959003,-2.9033201,-7.2865601},
			{7.8242202,-3.5478499,-7.2865601},
			{7.3247099,-1.29346,-7.2865601},
			{5.1152301,-3.3647499,-7.2865601},
			{3.61865,-0.50292999,-7.2865601},
			{9.7543898,2.1445301,-7.2865601},
			{3.8496101,1.2998,-7.2865601},
			{-4.9965801,2.3496101,-7.2888498},
			{9.4135704,-0.222656,-7.2865601}
		};
	};
	class Land_tav_houseblock_b4_in: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{0.39648399,-1.9960901,-7.3045702},
			{1.09375,0.025390601,-3.3261199},
			{-4.1230502,2.87305,-3.2861199},
			{-3.9247999,2.9677701,-2.5461199},
			{-1.61133,3.0839801,-2.2961199},
			{-5.2871099,-2.0790999,-3.2861199},
			{-1.53418,-3.9453101,-3.3161199},
			{5.0625,-2.58496,-2.7861199},
			{0.83984399,-3.9970701,-3.3061199},
			{-5.3730502,0.94921899,-3.3161199}
		};
	};
	class Land_tav_HouseV_2L: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{2.9472699,-4.0978999,-3.05021},
			{0.29492199,-1.46436,-3.0599899},
			{0.49218801,3.0639601,-4.07833},
			{4.2421899,1.87793,-4.0090399},
			{-2.95117,2.56055,-4.0583301},
			{-1.3007801,-3.3041999,-1.13694},
			{2.68555,-4.2480502,-1.13486},
			{-3.6210899,2.6252401,-0.59485799},
			{1.5,3.74561,-0.39485699},
			{-2.23633,-4.28052,-4.07968}
		};
	};
	class LAND_Domek_zluty_BEZ: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{6.4755902,2.7578101,-2.42348},
			{-0.32641599,-0.212891,-2.42361},
			{0.686768,3.9277301,-2.40346},
			{-5.34692,3.45313,-1.53343},
			{-7.04883,-0.207031,-2.42347},
			{-6.9184599,-3.81055,-2.4235799},
			{-2.61182,-4.1894498,-2.42365}
		};
	};
	class Land_Bulding_r: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-11.9141,-7.7005601,-3.1149299},
			{-5.3378901,-8.8535204,-3.1149299},
			{9.8945303,-8.9166298,-3.1249299},
			{3.5957,0.79113799,-3.1149299},
			{-0.53710902,4.5377202,-2.80493},
			{-4.2578101,6.32971,0.53680003},
			{3.0820301,1.11963,0.54680097},
			{-6.57617,-8.6317101,0.53680003},
			{-4.5742202,12.075,0.53680003},
			{-20.648399,-12.1409,0.53680003},
			{-17.916,-16.721701,0.54680097},
			{8.2871103,-15.3203,0.53680003},
			{13.3633,-1.95349,0.52679998}
		};
	};
	class Land_Barrack2: TavianaDZ
	{
		lootChance=0.2;
		lootPos[]=
		{
			{0.43945301,4.2631798,-0.69944799},
			{0.953125,0.38427699,-0.70163703},
			{-2.1835899,-2.6220701,-0.68288398},
			{1.95313,-2.7221701,-0.70316702},
			{1.90039,-0.90771502,-0.723221}
		};
	};
	class Land_avtovokzal: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-3.32178,-5.5683599,-8.0534897},
			{7.4384799,-5.3903799,-8.0632},
			{9.1122999,-0.67431599,-8.0534897},
			{-11.4043,-0.51098597,-8.0437899},
			{1.90039,11.5913,-8.03409},
			{-2.2714801,11.5042,-8.0243702},
			{6.75,13.7864,-8.0340996},
			{11.4536,8.3190899,-8.0243597},
			{-7.5956998,27.913601,-8.0335999},
			{-8.1792002,-1.3313,-6.2697401},
			{-15.1543,7.4189501,-4.5084701},
			{-6.0703101,5.7661099,-4.4987602},
			{-16.736799,-13.3428,-4.5181699},
			{-5.5127001,-11.8528,-4.5181699},
			{16.675301,-13.9314,-4.5181699},
			{-5.4965801,14.0745,-4.5181699},
			{-7.8652301,31.4902,-2.85935},
			{-8.66504,26.7742,-1.1369801},
			{-7.9794898,31.4202,0.58895099}
		};
	};
	class Land_Fregata_3: Residential
	{
		maxRoaming=0;
		lootPos[]=
		{
			{1.11719,7.11621,8.9616404},
			{-2.3066399,7.84863,8.9836397},
			{-2.4003899,6.5195298,12.981},
			{5.3378901,10.582,12.6525},
			{2.5976601,19.752001,6.4239001},
			{-1.125,18.210899,6.4239001},
			{2.4648399,36.391602,6.4239001},
			{-2.0703101,41.110401,6.4239001},
			{-3.7714801,51.904301,6.4239001},
			{3.32617,58.472698,6.4239001},
			{-1.1132801,59.6035,3.3771501},
			{-4.0331998,76.424797,3.31896},
			{4.76758,81.8545,3.34021},
			{4.20117,52.4258,12.0555},
			{-4.41992,49.991199,11.9888},
			{4.7128901,22.4795,3.2993801},
			{4.6660199,11.7598,3.2993801},
			{0.54101598,10.2637,-0.146273},
			{-1.81055,22.3398,-0.146273}
		};
	};
	class LAND_x: Default
	{
		minRoaming=0;
		maxRoaming=1;
		zombieClass[]={};
		lootPos[]={};
	};
	class Land_zombie_spawn: Default
	{
		minRoaming=0;
		maxRoaming=1;
		zombieClass[]=
		{
			"z_Mutant"
		};
		lootPos[]={};
	};
	class Land_dumruina_mini: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_statek_hl_bud: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_HouseBlock_D1_ex1: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_HouseBlock_D1: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_Zachytka: Military
	{
		maxRoaming=4;
		lootPos[]=
		{
			{4.4101601,-9.6533203,-4.0440202},
			{-4.4277301,-9.0883799,-4.0340099},
			{2.9375,-2.86865,-4.0340099},
			{-6.2343798,3.5820301,-4.0440202},
			{-5.7753901,7.7627001,-4.0440202},
			{3.8359399,11.6025,-4.0540199},
			{3.5273399,5.0234399,-4.0640101},
			{1.8418,-10.5039,-4.0440202},
			{-6.1601601,2.50049,-0.46163899},
			{4.0820298,10.9927,-0.471634},
			{3.8320301,8.3374004,-0.471634},
			{4.8242202,-1.71338,-0.471634},
			{4.3242202,1.0376,-0.471634},
			{-5.2421899,-6.2514601,3.2191601},
			{-5.5585899,10.5459,3.2191601},
			{3.8242199,8.9702101,3.2091701},
			{2.6289101,-2.66064,3.2191601}
		};
	};
	class Land_tav_sabina_nad_station: Residential
	{
		maxRoaming=0;
		lootPos[]=
		{
			{-10.3213,0.21679699,-2.05459},
			{10.8057,2.05371,-2.04459},
			{6.1122999,-2.1757801,-2.03459}
		};
	};
	class Land_tav_rozhledna: Residential
	{
		maxRoaming=4;
		lootPos[]=
		{
			{-5.6572299,-0.71093798,5.3926201},
			{-5.9785199,4.7202101,5.4026299},
			{-0.73046899,2.12256,5.4126301}
		};
	};
	class Land_tav_ind_Pec_02_mig: Industrial
	{
		maxRoaming=3;
		lootPos[]=
		{
			{2.24121,16.045401,-6.0046802},
			{2.20508,4.6484399,-5.9846802},
			{2.5029299,-6.92383,-5.9846802},
			{-2.33008,-7.0659199,-5.9846802},
			{-1.89355,13.5068,-5.9946799}
		};
	};
	class Land_tav_Ind_Pec_02_tanky: Industrial
	{
		maxRoaming=3;
		lootPos[]=
		{
			{6.34375,15.9766,-5.9446802},
			{2.3046899,7.3945298,-5.9646802},
			{2.5507801,-10.127,-5.95468},
			{5.8867202,-20.933599,-5.9446802},
			{-5.7890601,-20.2852,-5.95468},
			{-2.27441,-6.2695298,-5.93468},
			{-2.31055,5.7480502,-5.91468},
			{-6.20508,19.003901,-5.9046798}
		};
	};
	class Land_tav_Ind_Pec_02_v3s: Industrial
	{
		maxRoaming=3;
		lootPos[]=
		{
			{6.4394498,15.7002,-4.1700001},
			{5.6660199,2.9404299,-4.1700001},
			{2.8652301,-14.1748,-4.1700001},
			{3.7890601,-20.4,-4.1700001},
			{-4.9980502,-16.491699,-4.1700001},
			{-6.1777301,-2.8666999,-4.1700001},
			{-2.8007801,5.4003901,-4.1700001},
			{-5.9355502,18.4048,-4.1700001}
		};
	};
	class Land_tav_sabina_nad_2: Residential
	{
		maxRoaming=1;
		lootPos[]=
		{
			{-9.4101601,3.8466799,-14.9546},
			{-9.04883,-6.8964801,-14.8846},
			{5.4394498,-5.8144498,-14.8746},
			{6.0956998,11.3701,-14.8646},
			{0.70898402,24.003901,-14.1946},
			{-13.3184,36.245098,-14.2101}
		};
	};
	class Land_tav_sabina_nad_3: Residential
	{
		maxRoaming=1;
		lootPos[]=
		{
			{-9.1171904,2.2021501,-21.0306},
			{1.2382801,-4.2939501,-21.0406},
			{-20.142599,-7.7089801,-21.080601},
			{1.9179699,-15.7344,-21.070601},
			{13.834,-11.0615,-21.080601}
		};
	};
	class Land_tav_sabina_nad_4: Residential
	{
		maxRoaming=1;
		lootPos[]=
		{
			{-10.2959,-8.4755898,-11.475},
			{2.20313,-9.41504,-11.475},
			{-0.0478516,0.61230499,-11.475},
			{-10.2373,4.25,-11.475},
			{9.5527296,5.7519498,-11.475}
		};
	};
	class Land_tav_cernja_basnja: Residential
	{
		maxRoaming=1;
		lootPos[]=
		{
			{-1.6543,1.7338901,-21.6483},
			{2.04688,-1.8286099,-18.054399},
			{-0.225586,-1.30225,-14.4509},
			{1.38965,-1.56836,-10.8535},
			{-2.3515601,-1.89404,-3.6347699},
			{3.4033201,-2.9829099,3.6373999},
			{-3.2382801,3.19385,3.6573999},
			{-2.29004,-1.68945,0.041088101},
			{-2.5371101,-1.11035,-7.20643}
		};
	};
	class Land_ori_tmz_back: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-1.73511,1.88281,-0.27241901},
			{-7.1579599,-2.25,-0.27241901},
			{10.3618,-1.54883,4.0852098},
			{18.5525,2.95117,4.0852098},
			{-15.0562,4.5156298,2.86431},
			{8.4025898,2.12695,2.89431},
			{1.29565,-1.5332,2.90431},
			{-8.7597704,1.5976599,2.9243},
			{-1.46973,-2.1816399,2.93431},
			{-14.4214,-1.8554699,2.9443099},
			{-14.906,2.0722699,2.9543099}
		};
	};
	class Land_ori_tmz_base: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{-8.6623497,-6.75,-4.46632},
			{-9.4948702,2.1679699,-4.4563098},
			{-4.98242,8.5683603,-4.4463201},
			{-12.0129,9.7343798,-4.4363098},
			{12.0637,3.49805,-4.4263201}
		};
	};
	class Land_tav_cinzak_long_centr: Residential
	{
		maxRoaming=2;
		lootPos[]=
		{
			{-2.2197299,1.4179699,-11.6367},
			{2.0976601,-1.30371,-8.5065498},
			{-2.49805,-1.71387,-5.3501},
			{12.1367,0.94921899,-5.3301001},
			{10.5967,4.8554702,-4.6801},
			{13.1523,3.91504,-4.6100998},
			{11.9443,-4.32617,-5.4500999},
			{6.3222699,1.11719,-5.4401002},
			{2.12988,-2.1054699,2.49806},
			{-11.7949,-4.26367,2.47806},
			{-11.0703,4.6152301,2.49806},
			{-12.6133,5.0956998,3.27806},
			{-8.7294903,-3.6103499,2.49806}
		};
	};
	class Land_tav_HouseBlock_D1_ex1: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-0.44531301,-0.050781298,-9.6000004},
			{5.9091802,-0.0078125,-6.0476799},
			{0.96142602,0.09375,-2.62567},
			{6.8242202,-6.7460899,-2.2356801},
			{2.5947299,-6.5410199,-2.628},
			{2.42676,-2.1914101,-2.6300001},
			{8.9443398,-6.3691401,-2.6300001}
		};
	};
	class Land_tav_bunker_b1: Military
	{
		maxRoaming=3;
		lootPos[]=
		{
			{2.8540001,4.9003901,4.5866899},
			{-3.7207,4.9960899,4.5866599},
			{-3.2270501,-5.5830102,4.1779199},
			{2.9570301,-5.9257798,4.1879201},
			{-4.6328101,6.5253901,8.4257498},
			{4.1484399,0.66796899,8.4257498}
		};
	};
	class Land_tav_Ind_SawMill: Industrial
	{
		maxRoaming=3;
		lootPos[]=
		{
			{4.8579102,9.64258,-5.7893901},
			{7.69385,-6.4121099,-5.7793899},
			{0.50927699,-3.39551,-5.7693901},
			{-1.47803,4.63379,-5.7493901},
			{0.75634801,12.4063,-5.7393899}
		};
	};
	class Land_vez: Military
	{
		maxRoaming=0;
		lootPos[]=
		{
			{-0.0117188,1.43945,1.35}
		};
	};
	class Land_Barn_W_01_dam: Farm
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-5.3852501,-18.6357,-2.6403699},
			{4.22119,-14.9209,-2.66063},
			{-1.79883,-5.2168002,-2.58219},
			{2.75635,1.33496,-2.5933299},
			{-3.9760699,6.1416001,-2.60464},
			{-5.3823199,16.3311,-2.6059501},
			{4.3881798,17.9932,-2.61637}
		};
	};
	class Land_Farm_Cowshed_b: Farm
	{
		maxRoaming=3;
		lootPos[]=
		{
			{8.3691397,-2.6122999,-3.1208601},
			{10.5049,2.5566399,-3.1208601}
		};
	};
	class Land_Farm_Cowshed_c: Farm
	{
		maxRoaming=3;
		lootPos[]=
		{
			{4.92383,2.4677701,-3.1456101},
			{4.54492,-3.09863,-3.1355}
		};
	};
	class Land_Church_05R: Residential
	{
		maxRoaming=1;
		lootPos[]=
		{
			{2.98242,-1.61914,-7.2341299},
			{-4.625,4.4785199,-7.6895099}
		};
	};
	class Land_repair_center: Industrial
	{
		maxRoaming=2;
		lootPos[]=
		{
			{-2.6152301,4.8476601,-1.5698299},
			{-2.5322299,0.51171899,-1.5598201},
			{-2.7226601,-2.0371101,-1.5598201}
		};
	};
	class Land_sara_hasic_zbroj: Industrial
	{
		maxRoaming=2;
		lootPos[]=
		{
			{5.9355502,1.99512,-2.6426401},
			{5.26367,-1.60059,-2.6426401},
			{2.0253899,1.03125,-2.6426401},
			{-2.3046899,-1.9882801,-2.6526401},
			{-1.96289,1.6992199,-2.6826401}
		};
	};
	class Land_muzeum: Residential
	{
		maxRoaming=4;
		lootPos[]=
		{
			{-9.0878897,-24.8857,-11.2382},
			{9.7519503,-25.002899,-11.2282},
			{9.7402296,-7.5029302,-11.2182},
			{9.7294903,3.7070301,-11.2182},
			{-8.1591797,3.9609399,-11.2182},
			{-3.7158201,-4.48242,-11.2582},
			{0.118164,-4.2734399,-11.2682},
			{15.1025,-2.1728499,-11.2282},
			{25.931601,-2.93262,-11.2382},
			{18.316401,10.4082,-11.2382},
			{25.952101,23.8818,-11.2282},
			{23.570299,-11.0918,-11.2182},
			{24.172899,-22.8857,-11.2282},
			{17.741199,-22.310499,-11.2382},
			{-17.154301,-21.960899,-11.2382},
			{-23.9814,-21.191401,-11.2282},
			{-23.096701,-10.542,-11.2282},
			{-23.4951,-1.28223,-11.2382},
			{-22.482401,10.4258,-11.2382},
			{-4.8496099,23.244101,-11.2282},
			{23.250999,-22.8867,-4.8527298},
			{5.2255902,-23.602501,-4.86273},
			{-14.7852,-22.267599,-4.86273},
			{-22.164101,-22.710899,-4.86273},
			{-16.3447,18.7939,-4.86273},
			{20.7656,9.0566397,-4.8027301},
			{19.2451,22.2129,-4.8127298},
			{5.7529302,23.4629,-4.86273},
			{-9.6455097,23.808599,-4.86273},
			{-25.2939,-11.5391,-4.86273}
		};
	};
	class LAND_Tav_panelak: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-3.66748,-4.5996099,0.071426399},
			{-2.21387,2.4921899,0.071426399},
			{-6.2841802,3.85938,0.071426399},
			{-4.82373,-2.40625,0.071426399},
			{-6.7646499,-6.64258,0.071426399},
			{-0.484375,4.40625,1.37},
			{6.4292002,-4.5058599,2.77144},
			{5.15381,3.6660199,2.77144},
			{3.7241199,-4.1660199,2.77144}
		};
	};
	class LAND_skola: Residential
	{
		lootChance=0.2;
		maxRoaming=3;
		lootPos[]=
		{
			{16.0049,18.898399,-2.02338},
			{7.9697299,4.17383,-2.0133801},
			{16.249001,-6.4072299,-2.0033801},
			{-4.3271499,5.94238,-1.98338},
			{-5.6835899,22.3613,-1.97338},
			{4.3691401,16.110399,-1.96338},
			{28.872101,7.0293002,-1.95338},
			{18.916,-18.4219,-1.99338},
			{23.7188,-9.0917997,-1.98338},
			{-4.6142602,-10.9414,-1.98338},
			{-0.34375,-16.4541,-1.98338},
			{-9.1718798,14.0557,-1.99338},
			{-21.878901,-2.0878899,-1.98338},
			{7.83496,-12.7637,1.22105},
			{15.9482,-13.5342,1.23106},
			{-3.17188,-11.582,1.2010601},
			{5.5830102,-25.247999,1.2010601},
			{23.1943,-11.2646,1.21105},
			{5.2627001,-6.0605502,1.21105},
			{-2.8290999,7.4355502,1.23106},
			{-6.2353501,16.232401,1.28105},
			{3.2910199,17.9014,1.29105},
			{16.064501,11.959,1.30106},
			{30.262699,-24.627001,1.20746},
			{28.2188,7.625,1.25105},
			{18.4307,22.417,1.26105}
		};
	};
	class LAND_shopping_sab5: Supermarket
	{
		maxRoaming=3;
		lootPos[]=
		{
			{23.2139,12.7173,-1.23866},
			{21.1094,13.7158,-1.23866},
			{16.9443,3.02637,-1.23866},
			{5.57617,-5.2912598,-1.23866},
			{9.1152296,-12.2751,-1.23866},
			{11.8945,-10.8354,-1.23866},
			{-7.8408198,14.6606,-1.23866},
			{-10.4814,14.1499,-1.23866},
			{-22.7188,11.2546,-1.23866},
			{-22.404301,8.2836905,-1.23866},
			{-19.154301,9.1296396,-1.23866},
			{-0.29296899,8.0329599,-2.0892799},
			{-13.8271,4.7880902,-2.0892799},
			{-21.9023,4.7534199,-2.0892799},
			{-18.8818,-0.33935499,-2.0892799},
			{-14.6416,-0.49755901,-2.0892799},
			{-6.5166001,-2.0105,-2.0892799},
			{-7.0810499,-8.3632803,-2.0892799},
			{-14.9609,-13.0854,-2.0892799},
			{-20.832001,-12.3401,-2.06915},
			{-14.5264,-8.3710899,-2.0892799},
			{3.02051,3.0727501,-2.0992601},
			{1.94531,-11.5063,-2.0992601},
			{-9.3515596,-11.8855,-2.0992601},
			{-10.6836,-5.36694,-2.0992601},
			{-12.2695,-3.6877401,-2.0992601},
			{-17.068399,-6.44312,-2.0992601},
			{14.3516,0.14550801,-1.46162},
			{14.1914,-5.9726601,-1.47161},
			{16.408199,0.51391602,-1.4816099}
		};
	};
	class LAND_hockej_stadion: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_konecna: Residential
	{
		maxRoaming=4;
		lootPos[]=
		{
			{14.687,-1.82471,-1.6034},
			{15.5627,-8.44629,-1.5934},
			{15.4387,-6.1957998,-1.5834},
			{9.8427696,-9.2446299,-1.5734},
			{6.3720698,-7.7963901,-1.5734},
			{10.1802,-1.46289,-1.5934},
			{-14.553,-7.34375,-1.5934},
			{-24.861799,-9.1079102,-1.6034},
			{-23.592501,-2.7934599,-1.6034}
		};
	};
	class LAND_Big_Panelka: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{2.7246101,-0.67382801,-14.7521},
			{3.5610399,3.8828101,-14.7521},
			{8.9443398,-1.90771,-14.7521},
			{10.9814,0.088378899,-14.7519}
		};
	};
	class LAND_small_Panelka: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_garaz: Industrial
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class Land_Tav_Panelak3: Residential
	{
		maxRoaming=4;
	};
	class Land_Tav_Panelak2: Residential
	{
		maxRoaming=4;
		lootPos[]=
		{
			{0.29394501,-2.1601601,-2.6285901},
			{-0.258789,4.4267602,-1.30137},
			{-0.24902301,-2.0839801,0.071428299},
			{-0.540039,2.8252001,1.45},
			{0.33105499,-2.1171899,2.78},
			{4.6279302,-1.43066,5.4499998},
			{6.9375,-4.94238,5.4499998},
			{6.5068402,3.7285199,5.4499998},
			{2.95117,3.61133,5.4499998}
		};
	};
	class LAND_shopping_sab1: Supermarket
	{
		lootChance=0.30000001;
		maxRoaming=3;
		lootPos[]=
		{
			{-20.084999,20.236799,-6.2566299},
			{-23.869101,12.5679,-6.2566299},
			{-7.7480502,12.6436,-6.2566299},
			{-15.5684,25.4688,-6.2566299},
			{11.2949,6.83496,-6.2566299},
			{17.205601,18.7749,-6.2566299},
			{11.3975,27.7456,-6.2566299},
			{0.102539,22.6035,-6.2566299},
			{-10.1343,30.6821,-6.2566299},
			{-6.9716802,-10.4419,-6.2566299},
			{-23.603001,-10.7573,-6.2566299},
			{-31.4121,7.5854502,-6.2566299},
			{-2.49561,-5.6469698,-6.2566299},
			{18.971201,-12.1416,-6.2568402},
			{18.0986,3.2709999,-6.2566299},
			{30.0249,-6.4760699,-6.2566299},
			{36.609402,2.45508,-6.2566299},
			{7.9453101,-17.1504,-2.3866401},
			{29.4858,-20.3657,-2.3928199},
			{31.8311,-26.116199,-2.3969901},
			{23.8062,-29.196301,-2.39503},
			{22.872601,-14.0181,-2.3882101},
			{40.3643,-19.2593,-2.3882101},
			{42.0947,-12.2627,-2.3882101},
			{36.389599,4.40869,-2.3866401},
			{25.2612,-4.4477501,-2.3866401},
			{25.060499,10.561,-2.3866401},
			{10.1772,12.8071,-2.3866401},
			{5.7148399,16.915001,-2.3866401},
			{12.8091,24.324699,-2.3866401},
			{-12.9209,30.5352,-2.3866401},
			{-16.4102,24.9956,-2.3866401},
			{-23.3652,29.646,-2.3866401},
			{-31.604,25.274401,-2.3866401},
			{-31.2188,21.065901,-2.3866401},
			{-30.3223,10.8169,-2.3866401},
			{-40.086399,-0.042480499,-2.3866401},
			{-22.6709,-9.5493202,-2.3866401},
			{-8.4189501,-14.1587,-2.3866401},
			{-7.2553701,-29.0215,-2.3866401},
			{-1.0957,-19.667999,-2.3866401}
		};
	};
	class Land_statek_brana: Farm
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_Statek_kulna: Farm
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_Hotel: Residential
	{
		lootChance=0.30000001;
		maxRoaming=3;
		lootPos[]=
		{
			{-10.6719,11.4453,-7.76649},
			{-16.2012,-16.3057,-7.76649},
			{-2.1884799,-8.5771503,-7.76649},
			{15.7583,-15.7441,-7.7764902},
			{8.4907198,-2.77246,-7.76649},
			{16.392599,17.137699,-7.7764802},
			{4.58008,1.96289,-7.7764902},
			{3.21436,17.845699,-7.76649},
			{-17.708,-17.8867,-4.2491999},
			{-11.6343,-2.44238,-4.2592001},
			{-17.5313,12.4141,-4.2592001},
			{-4.0771499,17.2246,-4.2592001},
			{3.0127001,6.02246,-4.2491999},
			{20.708,14.9082,-4.2192001},
			{5.5004902,-17.6094,-4.2491999},
			{-9.1049805,-17.9277,-0.74882698},
			{-20.6187,-3.79492,-0.72919703},
			{-13.2671,16.6357,-0.71882403},
			{-4.3994098,20.6611,-0.70919597},
			{15.5454,18.3652,-0.75882697},
			{13.689,8.4697304,-0.75882697},
			{16.887699,-9.2334003,-0.74882698},
			{10.8457,-20.909201,-0.71919799},
			{-20.753401,-17.653299,2.7708001},
			{-20.512199,-9.6494102,2.7708001},
			{-4.8129902,0.20117199,2.74105},
			{-8.7749004,17.553699,2.76105},
			{0.95654303,8.8867197,2.75105},
			{3.62549,1.11523,2.74105},
			{14.4985,13.3672,2.74105},
			{20.4849,5.2578101,2.7708001},
			{15.9282,-20.732401,2.7708001},
			{4.1181598,-15.6709,2.74105},
			{-1.31689,-8.9335899,2.75105},
			{4.5039101,5.41113,6.2550802},
			{-16.366199,-16.167999,6.2550802},
			{-3.88135,9.8085899,6.24508},
			{17.290501,9.1767597,6.24508},
			{12.5791,-11.5234,6.24508}
		};
	};
	class LAND_domek05: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-4.8510699,-1.41309,-2.7972701},
			{-4.9218798,1.28662,-2.7972801},
			{0.28027299,-1.30566,-2.7972801},
			{2.2851601,-1.74805,-2.7972701},
			{4.5629902,0.94384801,-2.7972701}
		};
	};
	class LAND_ZalChata: Residential
	{
		maxRoaming=2;
		lootPos[]=
		{
			{-0.60527301,-2.3008499,-0.54000002}
		};
	};
	class LAND_hotel_rivera2: Residential
	{
		maxRoaming=4;
		lootPos[]=
		{
			{-6.8164101,-8.8741503,-0.22741599},
			{-6.94629,2.83325,-0.39583099}
		};
	};
	class LAND_hotel_rivera1: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{10.8145,4.7237501,-0.209453},
			{2.4316399,6.8355699,-0.271956},
			{-6.5273399,5.1361098,-0.35827699}
		};
	};
	class LAND_Posta: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{-15.4492,15.625,1.00044},
			{-13.248,2.375,1.00044},
			{-3.5878899,7.8564501,1.00044},
			{-14.9326,-5.1093798,1.00044},
			{-1.9804699,-7.8320298,1.00044},
			{12.4336,-5.13379,1.00044},
			{11.2168,12.8516,1.00044}
		};
	};
	class LAND_bus_depo: Industrial
	{
		maxRoaming=5;
		lootPos[]=
		{
			{46.220699,-12.0498,-10.9823},
			{41.7188,-16.086901,-10.9823},
			{33.993198,-27.471701,-10.9823},
			{34.557598,-22.0527,-10.9823},
			{27.3032,-11.8188,-10.9823},
			{20.503901,-15.9302,-10.9823},
			{22.4487,-38.8652,-10.9823},
			{12.3018,-33.763699,-10.9823},
			{12.332,-27.6064,-10.9823},
			{8.6870098,-11.834,-10.9823},
			{-6.2260699,-15.6729,-10.9823},
			{-6.7002001,-26.419399,-10.9823},
			{-9.3007803,-38.296398,-10.9823},
			{-17.5396,-40.076199,-10.9823},
			{-17.577101,-20.0938,-10.9823},
			{-12.4268,-9.2739296,-10.9823},
			{-23.0518,-24.9692,-10.9823},
			{-40.2495,-25.6689,-10.9823},
			{-34.682098,-15.707,-10.9823},
			{-22.811501,-2.7260699,-10.9823},
			{-23.340799,15.585,-10.9823},
			{-30.1621,35.708,-10.9823},
			{-23.607901,32.461899,-10.9823}
		};
	};
	class LAND_casino: Residential
	{
		maxRoaming=5;
		lootPos[]={};
	};
	class Land_Ind_Expedice_1: Industrial
	{
		maxRoaming=5;
		lootPos[]=
		{
			{-11.7539,-19.5098,-3.47649},
			{-0.59570301,-16.288099,-3.47649},
			{-7.75,-3.98926,-3.47649},
			{2.9589801,7.0507798,-3.47649},
			{3.1777301,18.0977,-3.47649},
			{-2.81738,13.9277,-3.47649},
			{3.08496,17.2617,-5.6436601},
			{-1.9668,7.1435499,-5.6436601},
			{1.6084,0.850586,-5.6436601},
			{-0.70117199,3.91113,9.7004099},
			{-0.70117199,9.9609404,9.7004099},
			{-0.53515601,15.2793,9.7004099}
		};
	};
	class LAND_Parlament: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{14.3896,16.247999,-8.6890497},
			{9.8330097,-8.9384804,-8.6890497},
			{10.9756,-22.2969,-8.6890497},
			{-3.5752001,-15.6768,-8.6890497},
			{-10.0947,-3.3896501,-8.6890497},
			{-32.477501,-11.9082,-9.1582804},
			{-41.960899,-6.9052701,-8.6890497},
			{-20.877899,-0.0322266,-8.6890497},
			{-23.399401,9.42383,-8.6890497},
			{-36.835899,12.3271,-8.6890497},
			{-23.6777,6.1132798,-4.44803},
			{-23.183599,0.36523399,-4.44803},
			{-37.266602,3.17383,-4.44803},
			{-11.3096,-14.624,-1.5775},
			{-16.029301,-2.8935499,-1.5775},
			{-9.7890596,17.9072,-1.5775},
			{2.2265601,22.077101,-1.5775},
			{6.81738,18.7188,-1.5775},
			{15.8086,10.7207,-1.5775},
			{12.6025,-14.8164,-1.5775},
			{11.9072,-23.654301,-1.5775},
			{-6.1747999,-23.732401,-1.5775}
		};
	};
	class LAND_Galerie: Residential
	{
		lootChance=0.2;
		maxRoaming=5;
		lootPos[]=
		{
			{2.2997999,-15.3848,-4.0387301},
			{-3.5214801,-5.5752001,-4.0387301},
			{-0.50097698,6.5205102,-4.0387301},
			{3.0839801,17.0322,-4.0387301},
			{7.0507798,21.653299,-4.0387301},
			{15.0928,20.6689,-4.0387301},
			{9.7314501,13.6855,-4.0387301},
			{6.7714801,6.11621,-4.0387301},
			{10.415,-5.6660199,-4.0387301},
			{17.2861,-0.50585902,-4.0387301},
			{14.792,-11.7266,-4.0387301},
			{7.3935499,-9.91992,-4.0387301},
			{11.9824,-23.0996,-4.0387301},
			{17.012699,-22.916,-4.0387301},
			{-6.96387,-22.440399,-4.0387301},
			{-16.3311,-20.2607,-4.0387301},
			{-8.69629,-12.6553,-4.0387301},
			{-15.2529,-3.1904299,-4.0387301},
			{-13.6553,17.4678,-4.0284901},
			{-7.13867,5.29004,-4.0387301},
			{-13.9561,0.84277302,-4.0184898},
			{-16.933599,11.4092,-4.0387301},
			{-17.1719,23.0137,-4.0387301},
			{-0.41601601,24.7656,-2.77127},
			{2.2529299,10.8838,-0.079940803},
			{-0.390625,-21.5742,-0.079940803},
			{-15.8799,-21.9678,-0.079940803},
			{-8.3818398,-15.25,-0.079940803},
			{-15.9922,-3.94824,-0.079940803},
			{-9.8759804,2.0615201,-0.079940803},
			{-15.7168,20.9795,-0.079940803},
			{-7.9267602,21.0273,-0.079940803},
			{7.2919898,21.8848,-0.079940803},
			{9.7470703,14.2617,-0.079940803},
			{16.721701,15.6582,-0.079940803},
			{15.3125,4.1523399,-0.079940803},
			{9.3154297,-2.77637,-0.079940803},
			{8.64258,-12.2246,-0.079940803},
			{15.874,-15.8506,-0.079940803},
			{8.0019503,-22.679701,-0.079940803}
		};
	};
	class LAND_Stojan_Bus: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{-0.43261701,-4.72363,-2.9472499},
			{-0.13867199,2.7216799,-2.9472499},
			{-0.0273438,14.0723,-2.9472499}
		};
	};
	class LAND_dum_patrovy03: Residential
	{
		maxRoaming=5;
		lootPos[]={};
	};
	class LAND_Cinzak_long: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class LAND_Cinzak_corner2: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class LAND_Cinzak_long_centr: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class LAND_Cinzak_corner: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class LAND_Cinzak_long_double: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class LAND_hospoda: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-6.7402301,5.9179702,-1.80275},
			{-3.31738,-4.9140601,-1.80292},
			{7.2021499,-7.9677701,-1.8026201},
			{7.2607398,-2.9179699,-1.8028001},
			{0.15918,4.6669898,-1.80325},
			{-0.79980499,2.0615201,-1.80331}
		};
	};
	class LAND_spital: Hospital
	{
		maxRoaming=3;
		lootPos[]=
		{
			{26.746099,5.39746,-20.368799},
			{27.538099,-11.8232,-20.343599},
			{27.3848,-4.2402301,-20.343599},
			{16.9307,-1.49316,-20.368799},
			{4.95117,-14.4082,-20.368799},
			{-0.453125,-8.0292997,-20.368799},
			{-3.30566,0.111328,-20.368799},
			{-16.380899,0.61132801,-20.368799},
			{-15.084,5.4375,-20.368799}
		};
	};
	class LAND_Podloubi_double_low: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_Podloubi_End_Low_1: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_Podloubi_End_Low_2: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_Garaz_velka: Industrial
	{
		maxRoaming=3;
		lootPos[]=
		{
			{23.190399,13.9424,2.0199101},
			{3.24121,-11.0928,2.0044501},
			{-19.814501,-6.8603501,1.98736},
			{-1.86914,27.056601,-0.1248146},
			{9.6015596,6.1708999,-1.75024},
			{-16.471701,-7.5293002,-1.77044},
			{-1.99414,24.2988,-3.8975},
			{5.6757798,14.3477,-5.51864},
			{17.374001,7.6269498,-5.5088},
			{12.4443,-6.5253901,-5.5133901},
			{-22.549801,-19.5303,-5.5405102}
		};
	};
	class LAND_Hotel_Marcomio: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_shopping_sab2: Supermarket
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-3.02246,-9.1865196,-3.6614799},
			{2.74121,-0.43652299,-3.6614799},
			{-2.81445,9.3994102,-3.6614799},
			{-8.21387,8.5810499,-3.6614799},
			{-4.8252001,20.610399,-3.6614799},
			{3.1747999,21.4014,-3.6614799},
			{-11.0781,-11.707,-3.6614799},
			{-11.3047,-1.60938,-3.6614799},
			{7.6660199,-10.1807,-3.6614799},
			{9.9228497,-2.8945301,-3.6614799},
			{11.5693,3.95996,-3.65815},
			{10.6963,10.0068,-3.6559899}
		};
	};
	class LAND_Nadrazi_sabina: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{9.3915997,2.6377001,-18.608999},
			{12.6191,-13.3779,-18.083},
			{-12.0859,-13.4141,-18.0592},
			{-10.3867,11.1563,-20.558399},
			{18.303699,25.971701,-23.834101},
			{-16.3701,27.2012,-24.99},
			{-28.586901,29.310499,-24.99},
			{-31.9834,-6.9472699,-18.051701},
			{-21.3545,-38.388699,-12.6001},
			{-5.7558599,-43.291,-12.6138},
			{9.5820303,-38.444302,-12.5712},
			{19.1826,-42.455101,-12.5954},
			{-1.72852,-27.684601,-22.0921},
			{19.621099,-30.216801,-22.031799},
			{28.9629,-26.2432,-21.993601}
		};
	};
	class LAND_dum_patrovy06: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_dum_mesto: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class Land_leseni2x: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class LAND_Autosalon: Residential
	{
		maxRoaming=4;
		lootPos[]=
		{
			{-0.67578101,-2.7890601,-8.8872204},
			{9.98242,0.103516,-8.8872204},
			{13.1133,11.5215,-8.8872204},
			{18.6689,20.7617,-8.8872204},
			{7.2578101,17.586901,-8.8872204},
			{-1.80371,22.6143,-8.8872204},
			{-20.994101,-4.5752001,-1.02026},
			{-8.0732403,19.542,-1.02026},
			{-4.66113,9.1181602,-1.02026},
			{3.7529299,8.75488,-1.02026},
			{13.1406,19.0322,-1.02026},
			{15.6494,4.3232398,-1.02026}
		};
	};
	class LAND_Banka: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{3.83691,-15.7803,-25.6122},
			{5.2753901,-7.6455102,-25.6122},
			{13.2227,-7.4433599,-25.6122},
			{11.8125,-11.6328,-25.6122}
		};
	};
	class Land_budova4_in_ori: Military
	{
		maxRoaming=7;
		lootPos[]=
		{
			{4.7158198,-1.90723,-1.877},
			{1.53809,2.3515601,-1.877},
			{2.3828101,-2.5009799,-1.877},
			{-2.8564501,-1.00586,-1.877},
			{-5.2314501,-1.0752,-1.877},
			{-7.3935499,-1.28125,-1.877},
			{-7.9316401,2.2910199,-1.877}
		};
	};
	class LAND_vokzal_big: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-8.1269503,-7.29883,-7.9628301},
			{4.7568402,-7.0127001,-7.9628301},
			{5.3271499,-0.78417999,-7.9628301},
			{3.16309,2.8115201,-7.9628301},
			{-4.8828101,1.66113,-7.9628301}
		};
	};
	class LAND_big_church: Church
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_Ruske_kolo: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_Bufet: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-2.6435499,-8.9902296,-1.7132699},
			{6.6210899,5.7744098,-1.7132699},
			{6.25,-2.67871,-1.7232701},
			{-5.8408198,0.66699201,-1.7132699},
			{-6.0791001,-2.7822299,-1.7132699},
			{-5.8935499,-8.8847704,-1.7132699},
			{-9.4980497,-9.0947304,-1.70327},
			{-10.1289,-3.3535199,-1.70327},
			{-10.8418,10.3799,-1.7132699},
			{0.38085899,8.1542997,-1.7132699},
			{2.21387,2.88867,-1.7132699}
		};
	};
	class LAND_Bus_Stojan_Bud: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_Cinzak_roh2: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_Cinzak_roh3: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_Cinzak_trojuhlenik: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_kanovka_budova: Industrial
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-4.9365201,-3.7285199,-6.5841799},
			{-6.65625,10.7012,-6.5841799}
		};
	};
	class LAND_kanovka_budova_snich: Industrial
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-12.3037,-0.175781,-7.4669499},
			{-6.47119,-8.6523399,-7.4669499},
			{-4.8134799,-3.4902301,-7.4669499}
		};
	};
	class LAND_HouseV_2I_snow: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_bouda1_zima: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_kasarna_brana: Military
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_kasarna: Military
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_kasarna_prujezd: Military
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_kasarna_rohova: Military
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class LAND_watertower1: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class OSShDY_base: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class CD2: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Ds: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_afbarabizna: Residential
	{
		maxRoaming=10;
		lootPos[]=
		{
			{5.24512,5.3703599,-4.1949401},
			{5.20117,-1.5229501,-4.2211699},
			{-2.97363,-1.07031,-4.2211699},
			{-2.5039101,5.43677,-4.2211699},
			{5.04004,-0.233643,-0.168262}
		};
	};
	class Land_fuelstation_army: Military
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_army_hut_int: Military
	{
		maxRoaming=3;
		lootPos[]=
		{
			{1.6445301,-5.52002,-1.33056},
			{0.53125,1.72607,-1.36391}
		};
	};
	class Land_army_hut3_long_int: Military
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-1.72803,-0.72656298,-1.2361701},
			{-2.2641599,-4.8740201,-1.2361701},
			{-0.44921899,3.7133801,-1.2361701}
		};
	};
	class Land_army_hut2_int: Military
	{
		maxRoaming=3;
		lootPos[]=
		{
			{0.70336902,0.56054699,-0.94832802},
			{1.6875,-2.17627,-0.94832802}
		};
	};
	class Land_cihlovej_dum_in: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{1.87744,2.3759799,-5.2758799},
			{-1.7148401,1.78711,-1.8147},
			{0.64013702,-1.3979501,-1.81472}
		};
	};
	class Land_dum_mesto_in: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{-4.72754,-0.46240199,-4.23207},
			{5.5239301,-1.52441,-4.2133698},
			{-4.9189501,3.5524399,-4.27988},
			{5.2128901,2.8867199,-1.28},
			{5.2744098,-1.2695301,-1.23014},
			{-3.92676,4.3217802,-1.23014},
			{-3.1626,-0.68847698,-1.22935}
		};
	};
	class Land_sara_Domek_sedy: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-1.2832,0.84472698,-2.1419599},
			{-3.5952101,3.1489301,-2.1419799},
			{4.4956799,2.2133801,-2.1419599}
		};
	};
	class Land_hruzdum: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{1.3164099,2.1147499,1.59321},
			{-1.16504,0.63964802,1.59321},
			{0.55859399,2.17696,-1.16265}
		};
	};
	class Land_tovarna1: Industrial
	{
		maxRoaming=5;
		lootPos[]=
		{
			{1.59082,-4.7314501,-5.7544198},
			{-6.4804702,-0.56542999,-5.7544198},
			{-9.13379,4,4.82972},
			{-5.4169898,-6.4604502,4.82972},
			{3.5659201,-7.5331998,-0.32010701},
			{1.1416,-6.83887,2.17997},
			{2.7128899,1.61426,2.15098},
			{-9.2114296,-6.2822299,2.17997}
		};
	};
	class Land_ryb_domek: Residential
	{
		maxRoaming=2;
		lootPos[]=
		{
			{-0.059570301,-1.03418,-2.0150001}
		};
	};
	class Land_benzina_schnell: Industrial
	{
		maxRoaming=7;
		lootPos[]={};
	};
	class Land_deutshe_mini: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-1.81348,2.3696301,-2.7926199},
			{-2.1176801,-0.95800799,-2.7306199},
			{3.4135699,0.91650403,-2.7843499},
			{3.7617199,-2.10693,-2.7306499}
		};
	};
	class Land_sara_stodola: Farm
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-2.94824,-0.0193848,-2.19523},
			{4.0830102,-1.0835,-2.19523}
		};
	};
	class Land_hut01: Residential
	{
		maxRoaming=2;
		lootPos[]={0.32324201,1.36377,-0.44834};
	};
	class Land_hut02: Residential
	{
		maxRoaming=2;
		lootPos[]={-0.162598,1.24707,-0.44576299};
	};
	class Land_hut04: Residential
	{
		maxRoaming=2;
		lootPos[]={-0.020507799,1.74512,-0.43719801};
	};
	class Land_hut03: Residential
	{
		maxRoaming=2;
		lootPos[]={};
	};
	class Land_tav_hut_old02: Industrial
	{
		maxRoaming=5;
		lootPos[]=
		{
			{0.57324201,-7.0903301,-3.0330801},
			{0.1875,0.72314501,-3.0330801},
			{-7.0903301,-3.1464801,-3.0330801},
			{-7.1845698,1.79688,-3.0330801}
		};
	};
	class Land_dum_rasovna: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{1.02197,3.1860399,0.27260599},
			{1.36816,1.83447,-2.66958}
		};
	};
	class Land_dum_istan3_pumpa: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{3.21826,0.55029303,1.4748501},
			{-2.80615,0.32763699,1.4748501}
		};
	};
	class Land_dum_istan3_hromada2: Residential
	{
		maxRoaming=5;
		lootPos[]=
		{
			{-1.50049,4.3276401,-1.28517},
			{-1.12061,-3.42383,-1.28517},
			{4.62012,-3.88379,2.0880101},
			{6.2016602,2.9365201,2.0880101}
		};
	};
	class Land_fuelstation: Industrial
	{
		maxRoaming=3;
	};
	class Land_chilovej_dum_mini: Residential
	{
		maxRoaming=3;
		lootPos[]={2.5122099,2.3945301,-2.8694201};
	};
	class Land_dum_mesto2: Residential
	{
		maxRoaming=3;
		lootPos[]=
		{
			{-2.2177701,5.0058599,-0.94400603},
			{1.03662,6.8510699,-0.94400603},
			{-1.46631,-5.90137,-0.94400603},
			{0.75732398,-3.8290999,-0.94400603},
			{-2.23193,-6.6684599,-4.3447499},
			{-1.34229,-2.26807,-4.3447499},
			{2.4028299,4.8393602,-4.3447499},
			{-1.56201,5.7690401,-4.3447499}
		};
	};
	class Land_HouseV_1I4: Residential
	{
		lootPos[]=
		{
			{-0.40014601,-3.87695,-2.76879},
			{-3.67749,-2.52002,-2.7655101},
			{-0.472168,3.1970201,-2.7202101}
		};
	};
	class Land_kulna: Residential
	{
		lootPos[]=
		{
			{0.50439501,0.218262,-1.11643},
			{-0.496582,1.93262,-1.12826}
		};
	};
	class Land_Ind_Workshop01_01: Industrial
	{
		lootPos[]=
		{
			{0.59521502,-2.43115,-1.29412},
			{1.24365,0.46386701,-1.295},
			{-0.66357398,-0.50292999,-1.29837}
		};
	};
	class Land_Ind_Garage01: Industrial
	{
		lootPos[]=
		{
			{-0.58007801,-1.49707,-1.23483},
			{-0.83447301,2.7578101,-1.22563},
			{2.47754,-1.1289099,-1.2371401},
			{1.31934,1.63086,-1.23228}
		};
	};
	class Land_Ind_Workshop01_02: Industrial
	{
		lootPos[]=
		{
			{1.1543,-0.55224597,-1.42943},
			{-1.18665,-0.178223,-1.4286799},
			{-0.66162097,1.104,-1.42682}
		};
	};
	class Land_Ind_Workshop01_04: Industrial
	{
		lootPos[]=
		{
			{-1.37415,4.1889601,-1.53123},
			{0.69543499,4.2456102,-1.52934},
			{-1.06677,2.6953101,-1.53062},
			{0.79247999,-4.60742,-1.49341},
			{-1.84424,-6.1708999,-1.44427},
			{-1.05566,-4.0839801,-1.5192699},
			{1.43774,-6.5942402,-1.41742}
		};
		hangPos[]=
		{
			{-0.54174799,4.0122099,-2.0306799}
		};
	};
	class Land_Ind_Workshop01_L: Industrial
	{
		lootPos[]=
		{
			{-3.2617199,4.7543898,-1.30246},
			{0.175781,3.91748,-1.30766},
			{-2.3789101,2.35303,-1.30405},
			{4.1054702,-4.1079102,-1.31345},
			{0.727539,-2.61621,-1.31418},
			{2.54688,-2.1772499,-1.3148201},
			{1.52344,-3.79443,-1.31332}
		};
	};
	class Land_Hangar_2: Industrial
	{
		lootPos[]=
		{
			{10.1245,-6.4872999,-2.56317},
			{11.9387,7.91113,-2.56317},
			{1.7951699,7.1269498,-2.56317},
			{-11.8948,10.5449,-2.56317},
			{-8.9702101,-4.3476601,-2.56317},
			{-0.56274402,-7.59375,-2.56317},
			{5.98804,-2.6122999,-2.56317}
		};
	};
	class Land_hut06: Residential
	{
		lootPos[]=
		{
			{0.328125,2.2695301,-1.57786},
			{-0.55236799,-0.0620117,-1.53837}
		};
	};
	class Land_stodola_old_open: Farm
	{
		lootPos[]=
		{
			{-3.0683601,8.6318398,-5.0805402},
			{2.5258801,10.5261,-5.0805101},
			{4.76758,5.0085402,-0.99349999},
			{-2.7846701,10.2368,-0.99349999},
			{4.6259799,10.4983,-0.993469},
			{2.0908201,10.8425,2.9644799},
			{-0.440918,10.3091,2.9644499},
			{-2.5883801,-5.91821,-5.0805402},
			{4.1108398,-10.9302,-5.0805402},
			{-2.6284201,-6.5551801,-1.0158401},
			{2.5053699,-10.741,2.9644499},
			{0.041015599,-11.0596,2.9644499}
		};
		hangPos[]=
		{
			{-1.50537,5.3447299,-5.08813},
			{0.49414101,9.4272499,-5.0901599},
			{2.5947299,-6.2119098,-5.0805502},
			{-1.74854,-2.3984399,-1.14301}
		};
	};
	class Land_A_FuelStation_Build: Industrial
	{
		lootChance=0.5;
		zombieClass[]=
		{
			"zZombie_Base",
			"zZombie_Base",
			"z_teacher",
			"z_suit1",
			"z_suit2"
		};
		lootPos[]=
		{
			{-1.31958,-0.65515101,-1.5744801},
			{1.82349,0.76965302,-1.57458},
			{1.67871,-0.91870099,-1.57458},
			{-1.23242,1.26794,-1.57458}
		};
	};
	class Land_A_GeneralStore_01: Supermarket
	{
		lootPos[]=
		{
			{-9.3896503,-3.30371,-1.20155},
			{-3.7753899,-3.86865,-1.20155},
			{1.31836,1.46631,-1.20155},
			{9.01367,3.8457,-1.20155},
			{13.3008,-1.77832,-1.20155},
			{9.8105497,1.43213,-1.20155},
			{1.65039,5.1435499,-1.20155},
			{0.75390601,-3.6953101,-1.20155},
			{13.3125,-7.65137,-1.20155},
			{11.168,-3.73682,-1.20155},
			{8.8945303,-8.3740196,-1.20155},
			{-2.04492,-7.5810499,-1.20155},
			{-7.8476601,-5.73633,-1.20155},
			{-8.2246103,-7.3242202,-1.20155},
			{3.79004,-5.6933599,-1.20155},
			{-9.38379,4.4619098,-1.20155},
			{-3.5752001,4.4653301,-1.20155},
			{-3.3378899,0.61279303,-1.20155},
			{10.5918,-9.9457998,-1.21082},
			{0.105469,-9.6084003,-1.21082},
			{-4.8603501,-10.4209,-1.21082},
			{-6.8085899,-1.23975,-1.20155},
			{1.12207,-1.58887,-1.20155}
		};
	};
	class Land_Farm_Cowshed_a: Farm
	{
		lootPos[]=
		{
			{-1.06836,-5.9216299,-3.08763},
			{1.69043,-4.9108901,-3.08763},
			{5.8832998,-6.15381,-3.08763},
			{8.8398399,-5.6027799,-3.08763},
			{9.7402296,-2.4865699,-3.08763},
			{2.88428,-2.3454599,-3.08763},
			{7.8803701,2.9421401,-3.08763}
		};
	};
	class Land_stodola_open: Farm
	{
		lootPos[]=
		{
			{-2.60303,5.3166499,-4.1280398},
			{-2.5815401,-0.530029,-4.17349},
			{-0.0478516,-4.8898902,-4.1360002},
			{0.98339802,6.2048302,-4.1114302}
		};
		hangPos[]=
		{
			{-0.93261701,-3.3596201,-4.1644602},
			{-2.01563,-0.115112,-4.1949201}
		};
	};
	class Land_Barn_W_01: Farm
	{
		lootPos[]=
		{
			{4.93188,-17.044399,-2.63063},
			{-3.82813,-18.669901,-2.6303599},
			{-4.46387,16.6665,-2.6365099},
			{5.7871099,18.9473,-2.6368999},
			{3.9540999,4.8842802,-2.63446},
			{-2.99072,-4.16748,-2.63287}
		};
	};
	class Land_Hlidac_budka: Residential
	{
		lootPos[]=
		{
			{-2.3185999,1.5127,-0.78363001},
			{2.02075,0.444336,-0.78363001},
			{-0.46093801,1.75879,-0.78363001}
		};
	};
	class Land_HouseV2_02_Interier: Residential
	{
		lootPos[]=
		{
			{7.2309599,5.3720698,-5.5306702},
			{8.5500498,0.75488299,-5.5306702},
			{5.2016602,-1.54004,-5.5306702},
			{3.3491199,1.9707,-5.5306702},
			{-3.6259799,3.05371,-5.5306702},
			{-5.4812002,-0.029296899,-5.5306702},
			{-5.83325,3.26563,-5.5306702},
			{-5.7104502,5.4941401,-5.5306702}
		};
	};
	class Land_a_stationhouse: Military
	{
		lootChance=0.30000001;
		lootPos[]=
		{
			{-2.6992199,-7.5742202,-9.4705801},
			{-0.89257801,-5.7168002,-9.4705801},
			{-3.2416999,-6.6191401,-4.6489},
			{-1.35645,-8.3622999,-4.6489},
			{-1.70801,-7.8544898,-0.043792699},
			{-3.39502,-7.8828101,-0.043792699},
			{-1.396,-7.79883,4.4114099},
			{-1.37939,-5.7910199,4.4114099},
			{1.5127,1.9648401,-9.4705801},
			{18.9058,-4.06738,-9.4705801}
		};
	};
	class Land_Mil_ControlTower: Military
	{
		lootChance=0.40000001;
		lootPos[]=
		{
			{10.0703,3.76367,-9.6286898},
			{3.8984399,3.4345701,-5.4636798},
			{1.75195,5.6816401,-5.4636798},
			{6.66113,-0.62548798,-1.0687},
			{2.6396501,-0.191406,-1.0687},
			{6.7226601,3.2338901,-1.0687}
		};
	};
	class Land_SS_hangar: Military
	{
		maxRoaming=3;
		lootPos[]=
		{
			{13.3604,-19.273399,-5.8822999},
			{-11.5059,-19.0898,-5.8723001},
			{-13.4648,2.6992199,-5.8723001},
			{-13.7119,22.5977,-5.8723001},
			{7.46387,-2.0839801,-5.8723001},
			{13.8135,22.210899,-5.8723001}
		};
	};
	class Land_A_Pub_01: Residential
	{
		zombieChance=0.2;
		lootPos[]=
		{
			{1.83398,0.39379901,-5.7462001},
			{-1.7651401,0.33447301,-5.7462201},
			{-6.6220698,-6.55371,-5.7462201},
			{-4.63623,-0.100586,-5.7462201},
			{-5.7592802,-3.0502901,-5.7462201},
			{-2.0820301,0.92285198,-1.76122},
			{-4.7651401,-5.8908701,-1.76122},
			{-6.94385,-1.9375,-1.76122},
			{-4.0522499,-0.77978498,-1.76122},
			{1.3979501,-1.73779,-1.76122},
			{3.13867,-2.78564,-1.76122},
			{3.58301,-0.59130901,-1.76122},
			{3.0302701,-4.0434599,-1.76122},
			{1.94092,3.18799,-1.76122},
			{-0.096191399,6.22437,-1.76122},
			{5.3046899,7.5595698,-1.76122},
			{6.7255902,-2.7270501,-1.76122},
			{2.56885,-4.6001,-5.7462101},
			{4.06738,5.4140601,-5.7462201},
			{0.75341803,2.2997999,-5.7462201}
		};
	};
	class Land_HouseB_Tenement: Office
	{
		lootPos[]=
		{
			{5.4057598,9.8955097,-20.7845},
			{5.9902301,14.1689,-20.7845},
			{12.9609,14.0718,-20.7845},
			{14.6069,8.92383,-20.7845},
			{-2.75635,-2.0859399,-20.7845}
		};
	};
	class Land_A_Hospital: Hospital
	{
		lootChance=0.89999998;
		lootPos[]=
		{
			{0.80712903,-1.16333,-7.3396602},
			{-7.2338901,-2.6364701,-7.3396602},
			{-16.3687,-2.40381,-7.3396602},
			{-12.2847,-3.1960399,-7.3396602},
			{4.4067402,-3.5051301,-7.3396602},
			{-3.2665999,-0.92529303,-7.3396602},
			{6.8569298,-2.7514601,-7.3396602},
			{11.0151,-3.95435,-7.3396602},
			{16.819799,-4.7111802,-7.3396602},
			{-1.12793,3.7841799,-7.4493899},
			{12.7476,0.142822,3.2918401},
			{10.2661,-1.21558,3.2918401}
		};
	};
	class Land_Panelak: Office
	{
		lootPos[]=
		{
			{-2.7690401,-6.2656298,0.071422599},
			{-2.9389601,-1.3916,0.071422599},
			{-5.42065,-3.13184,0.071422599},
			{-6.8112798,-6.1552701,0.0714221},
			{-4.00879,2.5302701,0.071422599},
			{-0.73095697,-3.20117,2.77144},
			{3.9790001,-7.0893602,2.77144},
			{2.4960899,2.93701,2.77144},
			{6.7372999,1.63281,2.77144},
			{6.3852501,-2.3915999,2.77144},
			{6.80615,-5.7729502,2.77144},
			{3.75122,-0.803711,2.77144},
			{-0.82421899,1.86914,1.32865}
		};
	};
	class Land_Panelak2: Office
	{
		lootPos[]=
		{
			{-0.72949201,-3.00635,-2.6285901},
			{-0.76464802,1.36279,-1.3},
			{-0.30127001,3.6503899,1.40864},
			{0.73584002,-3.2221701,2.7509699},
			{-0.63085902,1.8476599,4.1524401},
			{3.6892099,-7.3354502,5.4486499},
			{2.26807,2.9409201,5.4486499},
			{6.7002001,2.68994,5.4486499},
			{6.8784199,-1.45947,5.4486499},
			{6.09619,-5.9482398,5.4486499},
			{4.45508,-1.64893,5.4486499},
			{2.76367,0.44580099,5.4486499}
		};
	};
	class Land_Shed_Ind02: Industrial
	{
		lootPos[]=
		{
			{-2.28174,-5.6723599,-4.6259899},
			{4.54529,9.6665001,-4.6259899},
			{4.41223,2.64941,-1.2795399},
			{-0.437866,11.6943,-1.27641},
			{-3.4448199,12.2119,-1.27704},
			{4.1279302,9.8007803,-1.31032},
			{4.51758,-9.1279297,-1.31454},
			{-3.9277301,-3.91992,-1.29566},
			{3.1572299,-0.175781,-4.6259899},
			{3.8935499,-8.3056602,-4.6259899}
		};
	};
	class Land_Shed_wooden: Residential
	{
		lootPos[]=
		{
			{1.26807,-0.36132801,-1.29153},
			{-0.34277299,1.0293,-1.29153}
		};
	};
	class Land_Misc_PowerStation: Industrial
	{
		lootPos[]=
		{
			{4.0988798,4.89746,-1.2674299},
			{4.2282701,-1.19873,-1.2681}
		};
	};
	class Land_HouseBlock_A1_1: Residential
	{
		lootPos[]=
		{
			{-3.52881,0.15893599,-4.74365},
			{-3.5615201,-2.3348401,-4.73106}
		};
	};
	class Land_Shed_W01: Industrial
	{
		lootPos[]=
		{
			{-1.52637,-0.246094,-1.41129}
		};
	};
	class Land_HouseV_1I1: Residential
	{
		lootPos[]=
		{
			{0.181641,-1.97314,-2.8227501}
		};
	};
	class Land_Tovarna2: Industrial
	{
		lootPos[]=
		{
			{-11.6309,7.2052002,-5.5999999},
			{-12.0674,2.5690899,-5.5999999},
			{-4.8935499,6.6394,-5.5999999},
			{-3.74121,2.9039299,-3.8966501},
			{-12.8672,1.44519,-2.3099999},
			{-12.415,8.1310997,-2.3099999},
			{-12.7236,4.1125498,-2.3099999},
			{-3.99805,8.9800997,-2.3099999},
			{-7.3310499,8.4421396,-2.3099999},
			{-4.55371,5.22644,-2.3099999},
			{-11.4746,2.92114,1.6},
			{-11.0703,8.1381798,1.6},
			{-4.6757798,7.3267798,1.6},
			{-2.68262,3.4476299,3.4243},
			{-13.1953,-8.9586201,3.4243},
			{-8.8085899,-0.443481,0.40122601},
			{-12.1328,-0.149414,0.42429799},
			{-2.0341799,6.61414,-5.55933},
			{0.23925801,1.72278,-5.59793},
			{6.2246099,-3.948,-4.6182499},
			{-6.3935499,-8.2435303,-5.5954099},
			{-10.8496,-6.9121099,-5.5657201},
			{-6.77637,-1.73083,-5.5601902}
		};
	};
	class Land_rail_station_big: Office
	{
		lootPos[]=
		{
			{-4.9726601,4.5573702,-4.9643798},
			{0.458496,4.8522902,-4.9643798},
			{2.4624,2.2185099,-4.9643798},
			{-1.32373,-2.60571,-4.9643798},
			{-3.29443,-0.121826,-4.9643798},
			{-1.0776401,2.3664601,-4.9643798},
			{7.4604502,-3.4152801,-4.9643798},
			{8.9340801,3.1189001,-4.9643798},
			{-8.1635704,-5.1284199,-4.9643798}
		};
	};
	class Land_Ind_Vysypka: Industrial
	{
		lootPos[]=
		{
			{0.48608401,4.9545898,-4.9686098},
			{1.08032,-0.40673801,-4.9680099},
			{-0.035400402,-10.8208,-4.9668598},
			{-5.0778799,-16.4624,-4.9675899},
			{-6.3029799,2.9296899,-4.96838},
			{-6.26685,26.7349,-4.9772},
			{1.64697,23.403799,-4.9709702},
			{7.14575,3.9252901,-4.9697199},
			{4.6359901,-12.1621,-4.9697099}
		};
	};
	class Land_A_MunicipalOffice: Residential
	{
		zombieChance=0;
		minRoaming=3;
		maxRoaming=9;
		zombieClass[]=
		{
			"z_soldier",
			"z_soldier_heavy",
			"z_policeman"
		};
		lootChance=0.40000001;
		lootPos[]=
		{
			{-4.66113,-6.2717299,-18.429001},
			{3.3164101,-5.7741699,-18.429001},
			{-0.20751999,-6.4868202,-18.429001},
			{-9.7241201,-4.8874502,-3.7590301},
			{-9.5781298,3.55615,-3.7790301},
			{-7.1679702,11.0737,-3.7890301},
			{5.0742202,11.1838,-3.7890301},
			{9.3207998,5.38623,-3.7590301},
			{9.6533203,-4.82056,-3.7890301},
			{3.2353499,-0.105957,-0.169027},
			{4.8520498,-3.6901901,-0.169027},
			{-0.80127001,-7.8908701,-0.169027},
			{-4.4081998,-4.9177198,-0.169027},
			{-4.9077101,-2.2316899,-0.169027}
		};
	};
	class Land_A_Office01: Office
	{
		lootPos[]=
		{
			{-2.5039101,-2.46948,-4.5279999},
			{4.2353501,-0.336914,-4.5279999},
			{4.11133,6.1122999,-4.5279999},
			{0.24218801,6.0629902,-4.5279999},
			{4.3164101,3.7402301,-4.5279999},
			{5.08887,0.21972699,-4.5279999},
			{11.6504,-1.5647,-4.5279999},
			{14.5811,-4.1122999,-4.5279999},
			{13.8545,-0.74902302,-4.5279999},
			{-7.7627001,5.5908198,-4.5279999},
			{1.81152,0.99340802,-2.0280001},
			{4.9316401,4.3198199,-2.0280001},
			{1.18945,6.0703101,-2.0280001},
			{2.2314501,3.76563,-2.0280001},
			{-4.76367,-2.5122099,-2.0280001},
			{-14.5596,-3.4072299,-1.9680001},
			{-15.2705,5.9277301,-1.9680001},
			{-10.9063,6.04175,0.47200799},
			{-6.30762,3.3007801,0.47200599},
			{7.6416001,6.38696,0.47200099},
			{13.6729,6.5956998,0.47199899},
			{13.1924,-2.58691,0.47199801},
			{3.0918,2.4375,6.2049098},
			{-1.4570301,-2.28369,6.2049098},
			{-2.12988,4.5158701,0.47200501},
			{4.7441401,-4.6015601,-2.0148599},
			{8.3457003,-1.10718,-2.0280001},
			{9.9472704,-3.7414601,-2.0280001},
			{7.13867,-2.5073199,-2.0280001},
			{12.8701,4.7092299,-2.0280001},
			{15.3721,3.42383,-2.0280001}
		};
	};
	class Land_A_Office02: Office
	{
		lootPos[]=
		{
			{4.7226601,-5.74121,-8.1510801},
			{0.96142602,-5.1694298,-8.1507597}
		};
	};
	class Land_A_BuildingWIP: Industrial
	{
		lootChance=0.5;
		lootPos[]=
		{
			{-4.62573,4.5234399,-6.4526801},
			{-12.6377,0.49414101,-6.4924202},
			{-14.6023,-8.6284199,-6.4996099},
			{-16.0005,-9.8095703,-6.50423},
			{-15.5627,-5.1772499,-6.5052299},
			{0.94458002,-2.30371,-6.4304299},
			{7.28125,3.2089801,-6.4404202},
			{9.7570801,10.1138,-6.4082699},
			{14.771,7.2968798,-6.47756},
			{15.4504,-0.31494099,-6.5297899},
			{20.4895,2.3183601,-4.5257101},
			{17.3123,-3.1001,-2.5329101},
			{10.707,-6.5161099,-2.5325501},
			{2.2253399,-9.2158203,-2.5339999},
			{-8.9194298,-7.1889601,-2.5331299},
			{-16.3179,-8.3564501,-2.5335701},
			{-21.3064,-6.7915001,-2.5318201},
			{-21.601801,-1.79541,-2.5318201},
			{-17.580799,6.14746,-2.5318201},
			{-23.198,8.4472704,-2.5318201},
			{-17.1973,9.5859404,-2.5318201},
			{-4.9902301,9.8095703,-2.5318201},
			{14.0872,7.4409199,-2.5267601},
			{10.5796,-6.8491201,1.48116},
			{-3.19116,-2.4946301,1.49403},
			{-13.8186,3.9897499,1.4982899},
			{-15.9502,-6.17383,1.4880199},
			{-20.699699,-16.976101,1.50282},
			{-15.415,-13.3901,5.4668298}
		};
	};
	class Land_Church_01: Church
	{
		lootPos[]=
		{
			{-6.92102,-0.38281301,-4.2133899}
		};
	};
	class Land_Church_03: Church
	{
		lootPos[]=
		{
			{5.1533198,-6.96875,-14.3021},
			{-1.79053,-7.6801801,-14.3021},
			{-0.026367201,-2.98438,-14.3021},
			{-0.0034179699,2.02246,-14.3021},
			{5.4987798,7.20508,-14.3021},
			{5.3889198,3.4043,-14.3021},
			{3.2365699,2.76074,-14.3021},
			{-1.51001,7.6630902,-14.3021},
			{-7.6416001,4.8125,-14.3021},
			{-6.5659199,-4.59131,-14.3021},
			{9.552,2.22363,-13.7588},
			{9.93262,-3.85254,-13.7588}
		};
		hangPos[]=
		{
			{1.72168,-8.3977098,-0.17256901},
			{2.0883801,-14.4236,-0.27535999},
			{-13.7158,-10.4808,-0.795174},
			{-12.9072,-16.4105,-0.89506501}
		};
	};
	class Land_Church_02: Church
	{
		lootPos[]={};
		maxRoaming=2;
	};
	class Land_Church_02a: Church
	{
		lootPos[]={};
		maxRoaming=2;
	};
	class Land_Mil_Barracks_i: MilitarySpecial
	{
		lootPos[]=
		{
			{5.3903799,-1.75684,-1.09824},
			{1.46753,-0.131836,-1.09824},
			{1.29395,-2.1621101,-1.09824},
			{-1.78394,-0.168945,-1.09824},
			{-1.80615,-1.97656,-1.09824},
			{-4.77881,0.048828099,-1.09824},
			{-5.39258,-2.11816,-1.09824},
			{-5.4704599,2.5810499,-1.09824},
			{-8.3259296,-0.144531,-1.09824},
			{-9.1496601,-2.5585899,-1.09824},
			{-1.95288,2.5771501,-1.09824},
			{5.4636202,2.57813,-1.09824}
		};
	};
	class Land_A_TVTower_Base: Industrial
	{
		lootPos[]=
		{
			{-0.98242199,-1.92627,-2.21573},
			{-2.0178199,-4.2417002,-2.2191801},
			{-0.75927699,1.4213901,-2.21573}
		};
	};
	class Land_Mil_House: Military
	{
		vehPos[]=
		{
			{13.439,3.25244,-5.71244,84}
		};
		lootPos[]=
		{
			{12.457,1.4248,-5.51439},
			{11.0391,4.8527799,-5.51439},
			{13.667,4.4213901,-5.51439}
		};
	};
	class Land_Misc_Cargo1Ao: Industrial
	{
		lootPos[]=
		{
			{0.48877001,-1.61377,-1.09224},
			{0.012207,2.1926301,-1.09224},
			{0.0097656297,0.19043,-1.09224}
		};
	};
	class Land_Misc_Cargo1Bo: Industrial
	{
		lootPos[]=
		{
			{-0.32202101,1.68555,-1.0922199},
			{0.54858398,-1.96289,-1.0922199},
			{0.223389,-0.58007801,-1.0922199}
		};
	};
	class Land_Nav_Boathouse: Industrial
	{
		lootPos[]=
		{
			{5.26367,-1.47559,3.6826301},
			{5.3066401,3.81738,3.6826301},
			{-0.85644501,7.1640601,3.6826301},
			{-4.9384799,6.7871099,3.6826301},
			{-5.49512,2.0293,3.6826301},
			{-7.6933599,-1.9248,3.6826301},
			{-7.52246,6.5214801,3.6826301}
		};
	};
	class Land_ruin_01: Residential
	{
		lootPos[]=
		{
			{-4.3193402,-0.115234,-1.45578},
			{3.41309,0.27050799,-1.71365},
			{3.0029299,3.4277301,-1.55765},
			{0.62207001,-1.73779,-1.4904799}
		};
	};
	class Land_wagon_box: Industrial
	{
		lootPos[]=
		{
			{0.54296899,-3.8945301,-0.77667898},
			{0.47997999,-0.60839802,-0.77663797},
			{0.51538098,3.0385699,-0.77659202}
		};
	};
	class Land_HouseV2_04_interier: Residential
	{
		lootPos[]=
		{
			{7.4946299,5.8374,-5.7390199},
			{7.5098901,-0.93017602,-5.7417598},
			{1.95532,4.1640601,-5.7393799},
			{2.1087601,6.6064501,-5.7385998},
			{-2.3001699,4.2246099,-5.7393599},
			{-5.13306,6.74365,-5.7385602},
			{-4.7465801,2.6845701,-5.73985}
		};
	};
	class Land_HouseV2_01A: Residential
	{
		lootPos[]=
		{
			{-3.52881,-3.1689501,-5.6034598},
			{-1.62988,-3.25439,-5.66887}
		};
	};
	class Land_psi_bouda: Residential
	{
		maxRoaming=4;
		lootPos[]=
		{
			{1,0,0}
		};
	};
	class Land_KBud: Residential
	{
		zombieChance=0;
		maxRoaming=0;
		lootPos[]=
		{
			{0.1,0.15000001,-0.60000002}
		};
	};
	class Land_A_Castle_Bergfrit: Residential
	{
		lootPos[]=
		{
			{0.018554701,1.91602,-2.8364},
			{1.1914099,-1.43848,-2.8364},
			{-2.36816,3.3227501,-0.62857097},
			{2.36133,3.8676801,1.83972},
			{2.48438,-3.20557,3.8554101},
			{-2.0947299,-3.44873,6.3190298},
			{-1.15918,3.13867,8.7669096},
			{1.74707,1.26807,8.7669096},
			{-0.540039,-2.35254,8.7669096},
			{-1.62207,-4.2797899,13.4801},
			{-2.2304699,4.8247099,16.856001},
			{1.6757801,-0.82519501,16.8505}
		};
	};
	class Land_A_Castle_Stairs_A: Residential
	{
		lootPos[]=
		{
			{0.69799799,-1.79395,0.72692901},
			{8.3937998,0.890625,0.87512201},
			{8.1726103,1.48926,7.0258799}
		};
	};
	class Land_A_Castle_Gate: Residential
	{
		lootChance=0.69999999;
		lootPos[]=
		{
			{0.244141,-4.4848599,-3.14362},
			{-1.25293,2.9877901,-3.0702801},
			{4.5068402,-3.3115201,-2.9488499},
			{4.5517602,3.2983401,-2.94858},
			{7.9482398,1.4082,-2.9100299}
		};
	};
	class Land_Mil_Barracks: Military
	{
		lootPos[]={};
	};
	class Land_Mil_Barracks_L: Military
	{
		lootPos[]={};
	};
	class Land_Barn_W_02: Farm
	{
		lootPos[]=
		{
			{3.16504,5.5654302,-2.31409},
			{3.35938,-0.152344,-2.31305},
			{2.53613,-5.8945298,-2.3095701},
			{-2.94629,-5.01367,-2.31006},
			{-2.84375,0.212891,-2.31183},
			{-5.6328101,4.8291001,-2.3136301}
		};
	};
	class Land_sara_domek_zluty: Residential
	{
		maxRoaming=1;
		lootPos[]=
		{
			{2.9570301,3.0073199,-2.4337001},
			{7.06738,2.95557,-2.4337001},
			{6.36304,-0.23632801,-2.4337499},
			{0.62768602,-0.586914,-2.4338701},
			{-0.65991199,2.05371,-2.4337001},
			{-2.7751501,0.75195301,-2.4337201},
			{-5.0766602,3.04492,-2.43361},
			{-6.1713901,-2.33691,-2.43382},
			{-3.7529299,-3.54688,-2.43382}
		};
	};
	class Land_HouseV_3I4: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_Shed_W4: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_HouseV_3I1: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_HouseV_1L2: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_HouseV_1T: Residential
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_telek1: Industrial
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_Rail_House_01: Industrial
	{
		lootPos[]=
		{
			{2.8115201,3.61426,-1.28266},
			{-1.82178,3.1054699,-1.28266},
			{0.487793,3.38867,-1.28266}
		};
	};
	class Land_HouseV_2I: Default
	{
		maxRoaming=3;
		lootPos[]={};
	};
	class Land_Misc_deerstand: Military
	{
		zombieChance=0;
		lootChance=0.5;
		maxRoaming=3;
		lootPos[]=
		{
			{-0.92382801,-0.80859399,1.08539},
			{0.41992199,-0.237305,1.08539}
		};
	};
	class Land_Stan: Military
	{
		maxRoaming=1;
		lootPos[]=
		{
			{0.88037097,2.1601601,-1.1405801},
			{-0.37207001,-0.76367199,-1.14759}
		};
	};
	class CampEast: Military
	{
		maxRoaming=1;
		lootPos[]=
		{
			{-1.05713,-1.80762,-1.31049},
			{0.62744099,1.83398,-1.31049}
		};
	};
	class Land_stan_east: Military
	{
		maxRoaming=1;
		lootPos[]=
		{
			{2,-3.4000001,-1.20093},
			{-1,1,-1.27363},
			{-2,-3.4000001,-1.27363},
			{1,1,-1.27363}
		};
	};
	class MASH: Hospital
	{
		maxRoaming=1;
		lootChance=0.40000001;
		lootPos[]=
		{
			{1.18213,-1.65039,-1.17793},
			{0.24707,0.79931599,-1.17803}
		};
	};
	class MASH_EP1: MASH
	{
	};
	class UH1Wreck_Ori: Military
	{
		zombieClass[]=
		{
			"z_soldier_pilot",
			"z_soldier_heavy"
		};
		zombieChance=0;
		lootChance=0;
		minRoaming=4;
		maxRoaming=5;
		lootPos[]={};
	};
	class Land_kamaz: TavianaDZ
	{
		zombieClass[]=
		{
			"z_soldier_heavy",
			"z_soldier_heavy"
		};
		zombieChance=1;
		lootChance=1;
		minRoaming=3;
		maxRoaming=9;
		lootPos[]=
		{
			{-2.2685499,2.1084001,-1.7832201},
			{-0.98632801,-0.76074201,-1.7832299},
			{-1.16699,-3.86816,-1.7832299},
			{0.26953101,-5.4194298,-1.78321},
			{1.9414099,-3.60742,-1.78316},
			{1.25928,0.82665998,-1.7831},
			{2.2285199,3.4252901,-1.78313}
		};
	};
	class Land_zygul_wrecked: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class Land_sedan_weck: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class Land_Trabant_wreck: Residential
	{
		maxRoaming=1;
		lootPos[]={};
	};
	class Land_kamaz_hasic: Residential
	{
		minRoaming=1;
		maxRoaming=1;
		zombieClass[]=
		{
			"ori_pozarnik",
			"ori_pozarnik",
			"ori_pozarnik",
			"ori_zombie6Ln"
		};
		lootPos[]={};
	};
	class USMC_WarfareBFieldhHospital: MASH
	{
		minRoaming=1;
		maxRoaming=3;
		zombieClass[]=
		{
			"z_soldier",
			"z_soldier_heavy"
		};
		lootPos[]=
		{
			{-3.52246,-5.03931,1.14726},
			{2.36621,-4.5229502,1.1478601},
			{1.39063,-0.423096,1.14746},
			{1.14258,5.0095201,1.1478},
			{3.7124,1.8979501,1.14788}
		};
	};
	class Land_Ind_Shed_02_main: Default
	{
		zombieChance=0;
		maxRoaming=3;
	};
	class HouseRoaming: Residential
	{
		lootChance=0;
		zombieChance=0;
		maxRoaming=2;
	};
	class FarmRoaming: Farm
	{
		lootChance=0;
		zombieChance=0;
		maxRoaming=2;
	};
	class Land_Shed_W03: HouseRoaming
	{
	};
	class Land_HouseV_1I3: HouseRoaming
	{
	};
	class Land_HouseV_1L1: HouseRoaming
	{
	};
	class Land_HouseV_1I2: HouseRoaming
	{
	};
	class Land_HouseV_2L: HouseRoaming
	{
	};
	class Land_HouseV_2T1: HouseRoaming
	{
	};
	class Land_houseV_2T2: HouseRoaming
	{
	};
	class Land_HouseV_3I2: HouseRoaming
	{
	};
	class Land_HouseV_3I3: HouseRoaming
	{
	};
	class Land_HouseBlock_A1: HouseRoaming
	{
	};
	class Land_HouseBlock_A1_2: HouseRoaming
	{
	};
	class Land_HouseBlock_A2: HouseRoaming
	{
	};
	class Land_HouseBlock_A2_1: HouseRoaming
	{
	};
	class Land_HouseBlock_A3: HouseRoaming
	{
	};
	class Land_HouseBlock_B1: HouseRoaming
	{
	};
	class Land_HouseBlock_B2: HouseRoaming
	{
	};
	class Land_HouseBlock_B3: HouseRoaming
	{
	};
	class Land_HouseBlock_B4: HouseRoaming
	{
	};
	class Land_HouseBlock_B5: HouseRoaming
	{
	};
	class Land_HouseBlock_B6: HouseRoaming
	{
	};
	class Land_HouseBlock_C1: HouseRoaming
	{
	};
	class Land_HouseBlock_C2: HouseRoaming
	{
	};
	class Land_HouseBlock_C3: HouseRoaming
	{
	};
	class Land_HouseBlock_C4: HouseRoaming
	{
	};
	class Land_HouseBlock_C5: HouseRoaming
	{
	};
	class Land_HouseV2_01B: HouseRoaming
	{
	};
	class Land_Misc_Cargo1D: HouseRoaming
	{
	};
	class Land_HouseV2_03: HouseRoaming
	{
	};
	class Land_Ind_Shed_01_end: HouseRoaming
	{
	};
	class Land_A_statue01: HouseRoaming
	{
		zombieClass[]=
		{
			"zZombie_Base",
			"zZombie_Base",
			"z_teacher",
			"z_suit1",
			"z_suit2",
			"z_soldier",
			"z_soldier_heavy",
			"z_policeman"
		};
		minRoaming=2;
		maxRoaming=8;
	};
	class Land_Shed_W02: FarmRoaming
	{
	};
	class Grave: HouseRoaming
	{
		maxRoaming=3;
	};
	class GraveCross1: HouseRoaming
	{
		maxRoaming=2;
	};
	class GraveCross2: HouseRoaming
	{
		maxRoaming=2;
	};
	class GraveCrossHelmet: Military
	{
		maxRoaming=4;
	};
};
