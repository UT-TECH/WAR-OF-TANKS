// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class WAR_OF_TANKSTarget : TargetRules
{
	public WAR_OF_TANKSTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "WAR_OF_TANKS" } );
	}
}
