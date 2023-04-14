@interface PXNavigationListItem : NSObject
@end

@interface PXNavigationListDisplayAssetCollectionItem : PXNavigationListItem
@property (nonatomic, assign, readonly) PHCollection *collection;
@end

@interface PXNavigationListAssetCollectionItem : PXNavigationListDisplayAssetCollectionItem
@end

@interface PXGadgetUICollectionViewCell : UICollectionViewCell
@property (nonatomic, strong, readwrite) UIView *gadgetContentView;
@end

@interface PXAssetReference : NSObject
@property (nonatomic, readonly) id assetCollection;
@end

@interface PXPhotosUIViewController : UIViewController
@property (nonatomic, readonly) PXAssetReference *assetReferenceForCurrentScrollPosition;
@end



@interface PXActionMenuController : NSObject
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSArray *actionManagers; // PXPhotoKitAssetCollectionManager
@property (nonatomic, readonly) NSArray *availableActionTypes; // PXAssetCollectionActionTypeDelete
@end

@interface PXPhotosGridActionMenuController : PXActionMenuController
@end

@interface PXSectionedObjectReference : NSObject
@end

@interface PXAssetCollectionReference : PXSectionedObjectReference
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@end

@interface PXActionManager : NSObject
@end

@interface PXAssetCollectionActionManager : PXActionManager
@property (nonatomic, readonly) PXAssetCollectionReference *assetCollectionReference;
@end

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager
@end