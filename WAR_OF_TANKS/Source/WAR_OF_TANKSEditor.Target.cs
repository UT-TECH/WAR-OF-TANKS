// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class WAR_OF_TANKSEditorTarget : TargetRules
{
	public WAR_OF_TANKSEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "WAR_OF_TANKS" } );
	}
}
