//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct SBBannerDismissGestureState {
    _Bool _field1;
    _Bool _field2;
    struct CGSize _field3;
    struct CGSize _field4;
    struct CGRect _field5;
    long long _field6;
    double _field7;
    _Bool _field8;
};

struct SBIconCoordinate {
    long long row;
    long long col;
};

struct SBWindowLevelRange_struct {
    double start;
    double end;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[1168];
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
} CDStruct_89ddc8e1;

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    double _field5;
    int _field6;
} CDStruct_ebaa735e;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    _Bool itemIsEnabled[25];
    char timeString[64];
    int gsmSignalStrengthRaw;
    int gsmSignalStrengthBars;
    char serviceString[100];
    char serviceCrossfadeString[100];
    char serviceImages[2][100];
    char operatorDirectory[1024];
    unsigned int serviceContentType;
    int wifiSignalStrengthRaw;
    int wifiSignalStrengthBars;
    unsigned int dataNetworkType;
    int batteryCapacity;
    unsigned int batteryState;
    char batteryDetailString[150];
    int bluetoothBatteryCapacity;
    int thermalColor;
    unsigned int thermalSunlightMode:1;
    unsigned int slowActivity:1;
    unsigned int syncActivity:1;
    char activityDisplayId[256];
    unsigned int bluetoothConnected:1;
    unsigned int displayRawGSMSignal:1;
    unsigned int displayRawWifiSignal:1;
    unsigned int locationIconType:1;
    unsigned int quietModeInactive:1;
    unsigned int tetheringConnectionCount;
} CDStruct_0e61b686;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    unsigned int willActivate:1;
    unsigned int didActivate:1;
    unsigned int willDeactivate:1;
    unsigned int didDeactivate:1;
    unsigned int didChangeTop:1;
    unsigned int topBgStyleChange:1;
    unsigned int willTearDownWindow:1;
    unsigned int didTearDownWindow:1;
    unsigned int didRemoveFromWindow:1;
} CDStruct_6031b1ff;

typedef struct {
    double x;
    double y;
    double scale;
    double rotate;
} CDStruct_3dac535d;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long startStyle;
    long long endStyle;
    double transitionFraction;
} CDStruct_059c2b36;

typedef struct {
    _Bool valid;
    CDStruct_059c2b36 styleTransitionState;
} CDStruct_e838e30c;

typedef struct {
    int type;
    int modifier;
    unsigned long long pathIndex;
    unsigned long long pathIdentity;
    struct CGPoint location;
    struct CGPoint previousLocation;
    struct CGPoint unrotatedLocation;
    struct CGPoint previousUnrotatedLocation;
    double totalDistanceTraveled;
    long long interfaceOrientation;
    long long previousInterfaceOrientation;
    double timestamp;
} CDStruct_bab9d11d;

