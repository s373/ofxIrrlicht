# ofxIrrLicht
### s373.net/x 2017


Irrlicht inside openFrameworks and openFrameworks inside Irrlicht.

Programmed at s373.net/x art codex studios by André Sier, Dec 2017.

Addon follows MIT licensing.

```

//       ________ ___                        
//   () /   \   //   \                   /   
//   /\   __/  /   __/  _  _    _ _|_   /    
//  /  \    \ /      \ / |/ |  |/  |   //\/  
// /(__/\___//   \___/o  |  |_/|__/|_//  /\_/
//
//                                          

```




```


.
├── include
│   ├── CDynamicMeshBuffer.h
│   ├── CIndexBuffer.h
│   ├── CMeshBuffer.h
│   ├── CVertexBuffer.h
│   ├── EAttributes.h
│   ├── ECullingTypes.h
│   ├── EDebugSceneTypes.h
│   ├── EDeviceTypes.h
│   ├── EDriverFeatures.h
│   ├── EDriverTypes.h
│   ├── EGUIAlignment.h
│   ├── EGUIElementTypes.h
│   ├── EHardwareBufferFlags.h
│   ├── EMaterialFlags.h
│   ├── EMaterialTypes.h
│   ├── EMeshWriterEnums.h
│   ├── EMessageBoxFlags.h
│   ├── EPrimitiveTypes.h
│   ├── ESceneNodeAnimatorTypes.h
│   ├── ESceneNodeTypes.h
│   ├── EShaderTypes.h
│   ├── ETerrainElements.h
│   ├── IAnimatedMesh.h
│   ├── IAnimatedMeshMD2.h
│   ├── IAnimatedMeshMD3.h
│   ├── IAnimatedMeshSceneNode.h
│   ├── IAttributeExchangingObject.h
│   ├── IAttributes.h
│   ├── IBillboardSceneNode.h
│   ├── IBillboardTextSceneNode.h
│   ├── IBoneSceneNode.h
│   ├── ICameraSceneNode.h
│   ├── IColladaMeshWriter.h
│   ├── ICursorControl.h
│   ├── IDummyTransformationSceneNode.h
│   ├── IDynamicMeshBuffer.h
│   ├── IEventReceiver.h
│   ├── IFileArchive.h
│   ├── IFileList.h
│   ├── IFileSystem.h
│   ├── IGPUProgrammingServices.h
│   ├── IGUIButton.h
│   ├── IGUICheckBox.h
│   ├── IGUIColorSelectDialog.h
│   ├── IGUIComboBox.h
│   ├── IGUIContextMenu.h
│   ├── IGUIEditBox.h
│   ├── IGUIElement.h
│   ├── IGUIElementFactory.h
│   ├── IGUIEnvironment.h
│   ├── IGUIFileOpenDialog.h
│   ├── IGUIFont.h
│   ├── IGUIFontBitmap.h
│   ├── IGUIImage.h
│   ├── IGUIImageList.h
│   ├── IGUIInOutFader.h
│   ├── IGUIListBox.h
│   ├── IGUIMeshViewer.h
│   ├── IGUIScrollBar.h
│   ├── IGUISkin.h
│   ├── IGUISpinBox.h
│   ├── IGUISpriteBank.h
│   ├── IGUIStaticText.h
│   ├── IGUITabControl.h
│   ├── IGUITable.h
│   ├── IGUIToolbar.h
│   ├── IGUITreeView.h
│   ├── IGUIWindow.h
│   ├── IGeometryCreator.h
│   ├── IImage.h
│   ├── IImageLoader.h
│   ├── IImageWriter.h
│   ├── IIndexBuffer.h
│   ├── ILightManager.h
│   ├── ILightSceneNode.h
│   ├── ILogger.h
│   ├── IMaterialRenderer.h
│   ├── IMaterialRendererServices.h
│   ├── IMesh.h
│   ├── IMeshBuffer.h
│   ├── IMeshCache.h
│   ├── IMeshLoader.h
│   ├── IMeshManipulator.h
│   ├── IMeshSceneNode.h
│   ├── IMeshWriter.h
│   ├── IMetaTriangleSelector.h
│   ├── IOSOperator.h
│   ├── IParticleAffector.h
│   ├── IParticleAnimatedMeshSceneNodeEmitter.h
│   ├── IParticleAttractionAffector.h
│   ├── IParticleBoxEmitter.h
│   ├── IParticleCylinderEmitter.h
│   ├── IParticleEmitter.h
│   ├── IParticleFadeOutAffector.h
│   ├── IParticleGravityAffector.h
│   ├── IParticleMeshEmitter.h
│   ├── IParticleRingEmitter.h
│   ├── IParticleRotationAffector.h
│   ├── IParticleSphereEmitter.h
│   ├── IParticleSystemSceneNode.h
│   ├── IQ3LevelMesh.h
│   ├── IQ3Shader.h
│   ├── IRandomizer.h
│   ├── IReadFile.h
│   ├── IReferenceCounted.h
│   ├── ISceneCollisionManager.h
│   ├── ISceneLoader.h
│   ├── ISceneManager.h
│   ├── ISceneNode.h
│   ├── ISceneNodeAnimator.h
│   ├── ISceneNodeAnimatorCameraFPS.h
│   ├── ISceneNodeAnimatorCameraMaya.h
│   ├── ISceneNodeAnimatorCollisionResponse.h
│   ├── ISceneNodeAnimatorFactory.h
│   ├── ISceneNodeFactory.h
│   ├── ISceneUserDataSerializer.h
│   ├── IShaderConstantSetCallBack.h
│   ├── IShadowVolumeSceneNode.h
│   ├── ISkinnedMesh.h
│   ├── ITerrainSceneNode.h
│   ├── ITextSceneNode.h
│   ├── ITexture.h
│   ├── ITimer.h
│   ├── ITriangleSelector.h
│   ├── IVertexBuffer.h
│   ├── IVideoDriver.h
│   ├── IVideoModeList.h
│   ├── IVolumeLightSceneNode.h
│   ├── IWriteFile.h
│   ├── IXMLReader.h
│   ├── IXMLWriter.h
│   ├── IrrCompileConfig.h
│   ├── IrrlichtDevice.h
│   ├── Keycodes.h
│   ├── S3DVertex.h
│   ├── SAnimatedMesh.h
│   ├── SColor.h
│   ├── SExposedVideoData.h
│   ├── SIrrCreationParameters.h
│   ├── SKeyMap.h
│   ├── SLight.h
│   ├── SMaterial.h
│   ├── SMaterialLayer.h
│   ├── SMesh.h
│   ├── SMeshBuffer.h
│   ├── SMeshBufferLightMap.h
│   ├── SMeshBufferTangents.h
│   ├── SParticle.h
│   ├── SSharedMeshBuffer.h
│   ├── SSkinMeshBuffer.h
│   ├── SVertexIndex.h
│   ├── SVertexManipulator.h
│   ├── SViewFrustum.h
│   ├── SceneParameters.h
│   ├── aabbox3d.h
│   ├── coreutil.h
│   ├── dimension2d.h
│   ├── driverChoice.h
│   ├── fast_atof.h
│   ├── heapsort.h
│   ├── irrAllocator.h
│   ├── irrArray.h
│   ├── irrList.h
│   ├── irrMap.h
│   ├── irrMath.h
│   ├── irrString.h
│   ├── irrTypes.h
│   ├── irrXML.h
│   ├── irrlicht.h
│   ├── irrpack.h
│   ├── irrunpack.h
│   ├── line2d.h
│   ├── line3d.h
│   ├── matrix4.h
│   ├── path.h
│   ├── plane3d.h
│   ├── position2d.h
│   ├── quaternion.h
│   ├── rect.h
│   ├── triangle3d.h
│   ├── vector2d.h
│   └── vector3d.h
└── lib
    ├── linux64
    │   ├── libIrrlicht.a
    │   └── libirrBullet.a
    └── osx
        └── libIrrlicht.a

4 directories, 185 files

ar rs libIrrlicht.a CBSPMeshFileLoader.o CMD2MeshFileLoader.o
 CMD3MeshFileLoader.o CMS3DMeshFileLoader.o CB3DMeshFileLoader.o
  C3DSMeshFileLoader.o COgreMeshFileLoader.o COBJMeshFileLoader.o CColladaFileLoader.o CCSMLoader.o
   CDMFLoader.o CLMTSMeshFileLoader.o CMY3DMeshFileLoader.o
    COCTLoader.o CXMeshFileLoader.o CIrrMeshFileLoader.o
	 CSTLMeshFileLoader.o CLWOMeshFileLoader.o
	  CPLYMeshFileLoader.o CSMFMeshFileLoader.o
	   CColladaMeshWriter.o CIrrMeshWriter.o CSTLMeshWriter.o
	    COBJMeshWriter.o CPLYMeshWriter.o CSkinnedMesh.o
		 CBoneSceneNode.o CMeshSceneNode.o
		  CAnimatedMeshSceneNode.o CAnimatedMeshMD2.o
		   CAnimatedMeshMD3.o CQ3LevelMesh.o
		    CQuake3ShaderSceneNode.o CAnimatedMeshHalfLife.o
			 CBillboardSceneNode.o CCameraSceneNode.o
			  CDummyTransformationSceneNode.o CEmptySceneNode.o
			   CGeometryCreator.o CLightSceneNode.o
			    CMeshManipulator.o CMetaTriangleSelector.o
				 COctreeSceneNode.o COctreeTriangleSelector.o
				  CSceneCollisionManager.o CSceneManager.o
				   CShadowVolumeSceneNode.o CSkyBoxSceneNode.o
				    CSkyDomeSceneNode.o CTerrainSceneNode.o
					 CTerrainTriangleSelector.o
					  CVolumeLightSceneNode.o CCubeSceneNode.o
					   CSphereSceneNode.o CTextSceneNode.o
					    CTriangleBBSelector.o
						 CTriangleSelector.o
						  CWaterSurfaceSceneNode.o CMeshCache.o
						   CDefaultSceneNodeAnimatorFactory.o
						    CDefaultSceneNodeFactory.o
							 CSceneLoaderIrr.o
							  CParticleAnimatedMeshSceneNodeEmi
							  tter.o CParticleBoxEmitter.o
							   CParticleCylinderEmitter.o
							    CParticleMeshEmitter.o
								 CParticlePointEmitter.o
								  CParticleRingEmitter.o
								   CParticleSphereEmitter.o
								    CParticleAttractionAffector
									.o
									 CParticleFadeOutAffector.o
									  CParticleGravityAffector.o
									   CParticleRotationAffecto
									   r.o
									    CParticleSystemSceneNod
										e.o
										 CParticleScaleAffector
										 .o
										  CSceneNodeAnimatorCam
										  eraFPS.o
										   CSceneNodeAnimatorCa
										   meraMaya.o
										    CSceneNodeAnimatorC
											ollisionResponse.o
											 CSceneNodeAnimator
											 Delete.o
											  CSceneNodeAnimato
											  rFlyCircle.o
											   CSceneNodeAnimat
											   orFlyStraight.o
											    CSceneNodeAnima
												torFollowSpline
												.o
												 CSceneNodeAnim
												 atorRotation.o
												  CSceneNodeAni
												  matorTexture.o
												   CVideoModeLi
												   st.o
												    CFPSCounter
													.o
													 CNullDrive
													 r.o
													  COpenGLDriver.o COpenGLNormalMapRenderer.o COpenGLParallaxMapRenderer.o COpenGLShaderMaterialRenderer.o COpenGLTexture.o COpenGLSLMaterialRenderer.o COpenGLExtensionHandler.o CD3D8Driver.o CD3D8NormalMapRenderer.o CD3D8ParallaxMapRenderer.o CD3D8ShaderMaterialRenderer.o CD3D8Texture.o CD3D9Driver.o CD3D9HLSLMaterialRenderer.o CD3D9NormalMapRenderer.o CD3D9ParallaxMapRenderer.o CD3D9ShaderMaterialRenderer.o CD3D9Texture.o CColorConverter.o CImage.o CImageLoaderBMP.o CImageLoaderDDS.o CImageLoaderJPG.o CImageLoaderPCX.o CImageLoaderPNG.o CImageLoaderPSD.o CImageLoaderTGA.o CImageLoaderPPM.o CImageLoaderWAL.o CImageLoaderRGB.o CImageWriterBMP.o CImageWriterJPG.o CImageWriterPCX.o CImageWriterPNG.o CImageWriterPPM.o CImageWriterPSD.o CImageWriterTGA.o CSoftwareDriver.o CSoftwareTexture.o CTRFlat.o CTRFlatWire.o CTRGouraud.o CTRGouraudWire.o CTRNormalMap.o CTRStencilShadow.o CTRTextureFlat.o CTRTextureFlatWire.o CTRTextureGouraud.o CTRTextureGouraudAdd.o CTRTextureGouraudNoZ.o CTRTextureGouraudWire.o CZBuffer.o CTRTextureGouraudVertexAlpha2.o CTRTextureGouraudNoZ2.o CTRTextureLightMap2_M2.o CTRTextureLightMap2_M4.o CTRTextureLightMap2_M1.o CSoftwareDriver2.o CSoftwareTexture2.o CTRTextureGouraud2.o CTRGouraud2.o CTRGouraudAlpha2.o CTRGouraudAlphaNoZ2.o CTRTextureDetailMap2.o CTRTextureGouraudAdd2.o CTRTextureGouraudAddNoZ2.o CTRTextureWire2.o CTRTextureLightMap2_Add.o CTRTextureLightMapGouraud2_M4.o IBurningShader.o CTRTextureBlend.o CTRTextureGouraudAlpha.o CTRTextureGouraudAlphaNoZ.o CDepthBuffer.o CBurningShader_Raster_Reference.o CFileList.o CFileSystem.o CLimitReadFile.o CMemoryFile.o CReadFile.o CWriteFile.o CXMLReader.o CXMLWriter.o CWADReader.o CZipReader.o CPakReader.o CNPKReader.o CTarReader.o CMountPointReader.o irrXML.o CAttributes.o lzma/LzmaDec.o CIrrDeviceSDL.o CIrrDeviceLinux.o CIrrDeviceConsole.o CIrrDeviceStub.o CIrrDeviceWin32.o CIrrDeviceFB.o CLogger.o COSOperator.o Irrlicht.o os.o CGUIButton.o CGUICheckBox.o CGUIComboBox.o CGUIContextMenu.o CGUIEditBox.o CGUIEnvironment.o CGUIFileOpenDialog.o CGUIFont.o CGUIImage.o CGUIInOutFader.o CGUIListBox.o CGUIMenu.o CGUIMeshViewer.o CGUIMessageBox.o CGUIModalScreen.o CGUIScrollBar.o CGUISpinBox.o CGUISkin.o CGUIStaticText.o CGUITabControl.o CGUITable.o CGUIToolBar.o CGUIWindow.o CGUIColorSelectDialog.o CDefaultGUIElementFactory.o CGUISpriteBank.o CGUIImageList.o CGUITreeView.o zlib/adler32.o zlib/compress.o zlib/crc32.o zlib/deflate.o zlib/inffast.o zlib/inflate.o zlib/inftrees.o zlib/trees.o zlib/uncompr.o zlib/zutil.o jpeglib/jcapimin.o jpeglib/jcapistd.o jpeglib/jccoefct.o jpeglib/jccolor.o jpeglib/jcdctmgr.o jpeglib/jchuff.o jpeglib/jcinit.o jpeglib/jcmainct.o jpeglib/jcmarker.o jpeglib/jcmaster.o jpeglib/jcomapi.o jpeglib/jcparam.o jpeglib/jcprepct.o jpeglib/jcsample.o jpeglib/jctrans.o jpeglib/jdapimin.o jpeglib/jdapistd.o jpeglib/jdatadst.o jpeglib/jdatasrc.o jpeglib/jdcoefct.o jpeglib/jdcolor.o jpeglib/jddctmgr.o jpeglib/jdhuff.o jpeglib/jdinput.o jpeglib/jdmainct.o jpeglib/jdmarker.o jpeglib/jdmaster.o jpeglib/jdmerge.o jpeglib/jdpostct.o jpeglib/jdsample.o jpeglib/jdtrans.o jpeglib/jerror.o jpeglib/jfdctflt.o jpeglib/jfdctfst.o jpeglib/jfdctint.o jpeglib/jidctflt.o jpeglib/jidctfst.o jpeglib/jidctint.o jpeglib/jmemmgr.o jpeglib/jmemnobs.o jpeglib/jquant1.o jpeglib/jquant2.o jpeglib/jutils.o jpeglib/jcarith.o jpeglib/jdarith.o jpeglib/jaricom.o libpng/png.o libpng/pngerror.o libpng/pngget.o libpng/pngmem.o libpng/pngpread.o libpng/pngread.o libpng/pngrio.o libpng/pngrtran.o libpng/pngrutil.o libpng/pngset.o libpng/pngtrans.o libpng/pngwio.o libpng/pngwrite.o libpng/pngwtran.o libpng/pngwutil.o aesGladman/aescrypt.o aesGladman/aeskey.o aesGladman/aestab.o aesGladman/fileenc.o aesGladman/hmac.o aesGladman/prng.o aesGladman/pwd2key.o aesGladman/sha1.o aesGladman/sha2.o bzip2/blocksort.o bzip2/huffman.o bzip2/crctable.o bzip2/randtable.o bzip2/bzcompress.o bzip2/decompress.o bzip2/bzlib.o
ar: creating libIrrlicht.a
mkdir -p ../../lib/Linux
cp libIrrlicht.a ../../lib/Linux

```
